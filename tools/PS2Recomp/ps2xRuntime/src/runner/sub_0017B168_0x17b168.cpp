#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B168
// Address: 0x17b168 - 0x17b250
void sub_0017B168_0x17b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B168_0x17b168");
#endif

    switch (ctx->pc) {
        case 0x17b1b8u: goto label_17b1b8;
        case 0x17b1d4u: goto label_17b1d4;
        case 0x17b1e4u: goto label_17b1e4;
        case 0x17b230u: goto label_17b230;
        default: break;
    }

    ctx->pc = 0x17b168u;

    // 0x17b168: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17b168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17b16c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x17b16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x17b170: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17b170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17b174: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17b174u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b178: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17b17c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17b180: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17b184: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x17B184u;
    {
        const bool branch_taken_0x17b184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B184u;
        // 0x17b188: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b184) {
            ctx->pc = 0x17B230u;
            goto label_17b230;
        }
    }
    ctx->pc = 0x17B18Cu;
    // 0x17b18c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b190: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x17b190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17b194: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x17b194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b198: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x17b198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x17b19c: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x17b19cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
    // 0x17b1a0: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x17b1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17b1a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17b1a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x17b1a8: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x17b1a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x17b1ac: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x17b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x17b1b0: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x17B1B0u;
    SET_GPR_U32(ctx, 31, 0x17B1B8u);
    ctx->pc = 0x17B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1B0u;
    // 0x17b1b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17B1B0u, 0x17B1B8u)) {
        return;
    }
    ctx->pc = 0x17B1B8u;
label_17b1b8:
    // 0x17b1b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17b1b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1c4: 0xae700008  sw          $s0, 0x8($s3)
    ctx->pc = 0x17b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 16));
    // 0x17b1c8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x17b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x17b1cc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17B1CCu;
    SET_GPR_U32(ctx, 31, 0x17B1D4u);
    ctx->pc = 0x17B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1CCu;
    // 0x17b1d0: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17B1CCu, 0x17B1D4u)) {
        return;
    }
    ctx->pc = 0x17B1D4u;
label_17b1d4:
    // 0x17b1d4: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x17b1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x17b1d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b1dc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17B1DCu;
    SET_GPR_U32(ctx, 31, 0x17B1E4u);
    ctx->pc = 0x17B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1DCu;
    // 0x17b1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17B1DCu, 0x17B1E4u)) {
        return;
    }
    ctx->pc = 0x17B1E4u;
label_17b1e4:
    // 0x17b1e4: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x17b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x17b1e8: 0x26830014  addiu       $v1, $s4, 0x14
    ctx->pc = 0x17b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x17b1ec: 0xae720014  sw          $s2, 0x14($s3)
    ctx->pc = 0x17b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 18));
    // 0x17b1f0: 0xae710018  sw          $s1, 0x18($s3)
    ctx->pc = 0x17b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 17));
    // 0x17b1f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17b1f8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x17b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x17b1fc: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x17b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x17b200: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x17b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17b204: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17B204u;
    {
        const bool branch_taken_0x17b204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b204) {
            ctx->pc = 0x17B208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B204u;
            // 0x17b208: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B20Cu;
            goto label_17b20c;
        }
    }
    ctx->pc = 0x17B20Cu;
label_17b20c:
    // 0x17b20c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x17b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17b210: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17B210u;
    {
        const bool branch_taken_0x17b210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b210) {
            ctx->pc = 0x17B214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B210u;
            // 0x17b214: 0xac730004  sw          $s3, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B218u;
            goto label_17b218;
        }
    }
    ctx->pc = 0x17B218u;
label_17b218:
    // 0x17b218: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x17b218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x17b21c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b220: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x17b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x17b224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b228: 0xc06491a  jal         func_192468
    ctx->pc = 0x17B228u;
    SET_GPR_U32(ctx, 31, 0x17B230u);
    ctx->pc = 0x17B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B228u;
    // 0x17b22c: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192468u, 0x17B228u, 0x17B230u)) {
        return;
    }
    ctx->pc = 0x17B230u;
label_17b230:
    // 0x17b230: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17b230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b234: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17b234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b238: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17b238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b23c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17b23cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b240: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17b240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b248: 0x3e00008  jr          $ra
    ctx->pc = 0x17B248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B248u;
        // 0x17b24c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B250u;
}
