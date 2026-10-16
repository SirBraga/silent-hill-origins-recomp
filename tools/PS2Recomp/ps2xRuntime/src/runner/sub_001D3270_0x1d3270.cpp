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

// Function: sub_001D3270
// Address: 0x1d3270 - 0x1d3308
void sub_001D3270_0x1d3270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3270_0x1d3270");
#endif

    switch (ctx->pc) {
        case 0x1d3270u: goto label_1d3270;
        case 0x1d3274u: goto label_1d3274;
        case 0x1d3278u: goto label_1d3278;
        case 0x1d327cu: goto label_1d327c;
        case 0x1d3280u: goto label_1d3280;
        case 0x1d3284u: goto label_1d3284;
        case 0x1d3288u: goto label_1d3288;
        case 0x1d328cu: goto label_1d328c;
        case 0x1d3290u: goto label_1d3290;
        case 0x1d3294u: goto label_1d3294;
        case 0x1d3298u: goto label_1d3298;
        case 0x1d329cu: goto label_1d329c;
        case 0x1d32a0u: goto label_1d32a0;
        case 0x1d32a4u: goto label_1d32a4;
        case 0x1d32a8u: goto label_1d32a8;
        case 0x1d32acu: goto label_1d32ac;
        case 0x1d32b0u: goto label_1d32b0;
        case 0x1d32b4u: goto label_1d32b4;
        case 0x1d32b8u: goto label_1d32b8;
        case 0x1d32bcu: goto label_1d32bc;
        case 0x1d32c0u: goto label_1d32c0;
        case 0x1d32c4u: goto label_1d32c4;
        case 0x1d32c8u: goto label_1d32c8;
        case 0x1d32ccu: goto label_1d32cc;
        case 0x1d32d0u: goto label_1d32d0;
        case 0x1d32d4u: goto label_1d32d4;
        case 0x1d32d8u: goto label_1d32d8;
        case 0x1d32dcu: goto label_1d32dc;
        case 0x1d32e0u: goto label_1d32e0;
        case 0x1d32e4u: goto label_1d32e4;
        case 0x1d32e8u: goto label_1d32e8;
        case 0x1d32ecu: goto label_1d32ec;
        case 0x1d32f0u: goto label_1d32f0;
        case 0x1d32f4u: goto label_1d32f4;
        case 0x1d32f8u: goto label_1d32f8;
        case 0x1d32fcu: goto label_1d32fc;
        case 0x1d3300u: goto label_1d3300;
        case 0x1d3304u: goto label_1d3304;
        default: break;
    }

    ctx->pc = 0x1d3270u;

label_1d3270:
    // 0x1d3270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d3274:
    // 0x1d3274: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d3274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d3278:
    // 0x1d3278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d327c:
    // 0x1d327c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d327cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d3280:
    // 0x1d3280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3284:
    // 0x1d3284: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3288:
    // 0x1d3288: 0x2442fff3  addiu       $v0, $v0, -0xD
    ctx->pc = 0x1d3288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
label_1d328c:
    // 0x1d328c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d328cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d3290:
    // 0x1d3290: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1d3294:
    if (ctx->pc == 0x1D3294u) {
        ctx->pc = 0x1D3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3290u;
        // 0x1d3294: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3298u;
        goto label_1d3298;
    }
    ctx->pc = 0x1D3290u;
    {
        const bool branch_taken_0x1d3290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3290u;
        // 0x1d3294: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3290) {
            ctx->pc = 0x1D32ECu;
            goto label_1d32ec;
        }
    }
    ctx->pc = 0x1D3298u;
label_1d3298:
    // 0x1d3298: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d3298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d329c:
    // 0x1d329c: 0x8c429b78  lw          $v0, -0x6488($v0)
    ctx->pc = 0x1d329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941560)));
label_1d32a0:
    // 0x1d32a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1d32a4:
    if (ctx->pc == 0x1D32A4u) {
        ctx->pc = 0x1D32A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32A0u;
        // 0x1d32a4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D32A8u;
        goto label_1d32a8;
    }
    ctx->pc = 0x1D32A0u;
    {
        const bool branch_taken_0x1d32a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d32a0) {
            ctx->pc = 0x1D32A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D32A0u;
            // 0x1d32a4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D32B8u;
            goto label_1d32b8;
        }
    }
    ctx->pc = 0x1D32A8u;
label_1d32a8:
    // 0x1d32a8: 0x40f809  jalr        $v0
label_1d32ac:
    if (ctx->pc == 0x1D32ACu) {
        ctx->pc = 0x1D32B0u;
        goto label_1d32b0;
    }
    ctx->pc = 0x1D32A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D32B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D32A8u, 0x1D32B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D32B0u;
label_1d32b0:
    // 0x1d32b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d32b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d32b4:
    // 0x1d32b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d32b8:
    // 0x1d32b8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1d32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d32bc:
    // 0x1d32bc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_1d32c0:
    if (ctx->pc == 0x1D32C0u) {
        ctx->pc = 0x1D32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32BCu;
        // 0x1d32c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D32C4u;
        goto label_1d32c4;
    }
    ctx->pc = 0x1D32BCu;
    {
        const bool branch_taken_0x1d32bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32BCu;
        // 0x1d32c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32bc) {
            ctx->pc = 0x1D32F0u;
            goto label_1d32f0;
        }
    }
    ctx->pc = 0x1D32C4u;
label_1d32c4:
    // 0x1d32c4: 0xc05f90a  jal         func_17E428
label_1d32c8:
    if (ctx->pc == 0x1D32C8u) {
        ctx->pc = 0x1D32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32C4u;
        // 0x1d32c8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D32CCu;
        goto label_1d32cc;
    }
    ctx->pc = 0x1D32C4u;
    SET_GPR_U32(ctx, 31, 0x1D32CCu);
    ctx->pc = 0x1D32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D32C4u;
    // 0x1d32c8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1D32C4u, 0x1D32CCu)) {
        return;
    }
    ctx->pc = 0x1D32CCu;
label_1d32cc:
    // 0x1d32cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d32ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d32d0:
    // 0x1d32d0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1d32d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1d32d4:
    // 0x1d32d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d32d8:
    // 0x1d32d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d32d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d32dc:
    // 0x1d32dc: 0x0  nop
    ctx->pc = 0x1d32dcu;
    // NOP
label_1d32e0:
    // 0x1d32e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1d32e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d32e4:
    // 0x1d32e4: 0xc05f910  jal         func_17E440
label_1d32e8:
    if (ctx->pc == 0x1D32E8u) {
        ctx->pc = 0x1D32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32E4u;
        // 0x1d32e8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D32ECu;
        goto label_1d32ec;
    }
    ctx->pc = 0x1D32E4u;
    SET_GPR_U32(ctx, 31, 0x1D32ECu);
    ctx->pc = 0x1D32E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D32E4u;
    // 0x1d32e8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1D32E4u, 0x1D32ECu)) {
        return;
    }
    ctx->pc = 0x1D32ECu;
label_1d32ec:
    // 0x1d32ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d32ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d32f0:
    // 0x1d32f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d32f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d32f4:
    // 0x1d32f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d32f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d32f8:
    // 0x1d32f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d32f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d32fc:
    // 0x1d32fc: 0x3e00008  jr          $ra
label_1d3300:
    if (ctx->pc == 0x1D3300u) {
        ctx->pc = 0x1D3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32FCu;
        // 0x1d3300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3304u;
        goto label_1d3304;
    }
    ctx->pc = 0x1D32FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32FCu;
        // 0x1d3300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D32FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3304u;
label_1d3304:
    // 0x1d3304: 0x0  nop
    ctx->pc = 0x1d3304u;
    // NOP
    ctx->pc = 0x1d3308u;
}
