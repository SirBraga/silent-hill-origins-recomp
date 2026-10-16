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

// Function: sub_001BF158
// Address: 0x1bf158 - 0x1bf368
void sub_001BF158_0x1bf158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF158_0x1bf158");
#endif

    switch (ctx->pc) {
        case 0x1bf174u: goto label_1bf174;
        case 0x1bf1b8u: goto label_1bf1b8;
        case 0x1bf1e8u: goto label_1bf1e8;
        case 0x1bf208u: goto label_1bf208;
        case 0x1bf238u: goto label_1bf238;
        case 0x1bf344u: goto label_1bf344;
        case 0x1bf354u: goto label_1bf354;
        default: break;
    }

    ctx->pc = 0x1bf158u;

    // 0x1bf158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bf158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bf15c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bf15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bf160: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bf160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bf164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf16c: 0xc070482  jal         func_1C1208
    ctx->pc = 0x1BF16Cu;
    SET_GPR_U32(ctx, 31, 0x1BF174u);
    ctx->pc = 0x1BF170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF16Cu;
    // 0x1bf170: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1208u, 0x1BF16Cu, 0x1BF174u)) {
        return;
    }
    ctx->pc = 0x1BF174u;
label_1bf174:
    // 0x1bf174: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bf174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf178: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bf178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bf17c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BF17Cu;
    {
        const bool branch_taken_0x1bf17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF17Cu;
        // 0x1bf180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf17c) {
            ctx->pc = 0x1BF1D0u;
            goto label_1bf1d0;
        }
    }
    ctx->pc = 0x1BF184u;
    // 0x1bf184: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1bf184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1bf188: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bf188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1bf18c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bf18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bf190: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1bf190u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1bf194: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bf194u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bf198: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF198u;
    {
        const bool branch_taken_0x1bf198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf198) {
            ctx->pc = 0x1BF19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF198u;
            // 0x1bf19c: 0x8e0202f8  lw          $v0, 0x2F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF1BCu;
            goto label_1bf1bc;
        }
    }
    ctx->pc = 0x1BF1A0u;
    // 0x1bf1a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bf1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf1a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF1A4u;
    {
        const bool branch_taken_0x1bf1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1A4u;
        // 0x1bf1a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1a4) {
            ctx->pc = 0x1BF1B8u;
            goto label_1bf1b8;
        }
    }
    ctx->pc = 0x1BF1ACu;
    // 0x1bf1ac: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bf1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bf1b0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BF1B0u;
    SET_GPR_U32(ctx, 31, 0x1BF1B8u);
    ctx->pc = 0x1BF1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1B0u;
    // 0x1bf1b4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BF1B0u, 0x1BF1B8u)) {
        return;
    }
    ctx->pc = 0x1BF1B8u;
label_1bf1b8:
    // 0x1bf1b8: 0x8e0202f8  lw          $v0, 0x2F8($s0)
    ctx->pc = 0x1bf1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
label_1bf1bc:
    // 0x1bf1bc: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1BF1BCu;
    {
        const bool branch_taken_0x1bf1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1BCu;
        // 0x1bf1c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1bc) {
            ctx->pc = 0x1BF32Cu;
            goto label_1bf32c;
        }
    }
    ctx->pc = 0x1BF1C4u;
    // 0x1bf1c4: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x1bf1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    // 0x1bf1c8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1BF1C8u;
    {
        const bool branch_taken_0x1bf1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1C8u;
        // 0x1bf1cc: 0xae02030c  sw          $v0, 0x30C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1c8) {
            ctx->pc = 0x1BF354u;
            goto label_1bf354;
        }
    }
    ctx->pc = 0x1BF1D0u;
label_1bf1d0:
    // 0x1bf1d0: 0xae030268  sw          $v1, 0x268($s0)
    ctx->pc = 0x1bf1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 3));
    // 0x1bf1d4: 0xae030264  sw          $v1, 0x264($s0)
    ctx->pc = 0x1bf1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 3));
    // 0x1bf1d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1bf1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bf1dc: 0xae030260  sw          $v1, 0x260($s0)
    ctx->pc = 0x1bf1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 3));
    // 0x1bf1e0: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x1BF1E0u;
    SET_GPR_U32(ctx, 31, 0x1BF1E8u);
    ctx->pc = 0x1BF1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1E0u;
    // 0x1bf1e4: 0xae020274  sw          $v0, 0x274($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1BF1E0u, 0x1BF1E8u)) {
        return;
    }
    ctx->pc = 0x1BF1E8u;
label_1bf1e8:
    // 0x1bf1e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bf1e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bf1ec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1bf1ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1bf1f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf1f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bf1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf1f8: 0x0  nop
    ctx->pc = 0x1bf1f8u;
    // NOP
    // 0x1bf1fc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1bf1fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bf200: 0xc05f910  jal         func_17E440
    ctx->pc = 0x1BF200u;
    SET_GPR_U32(ctx, 31, 0x1BF208u);
    ctx->pc = 0x1BF204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF200u;
    // 0x1bf204: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1BF200u, 0x1BF208u)) {
        return;
    }
    ctx->pc = 0x1BF208u;
label_1bf208:
    // 0x1bf208: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1bf208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1bf20c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bf20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bf210: 0x8c634430  lw          $v1, 0x4430($v1)
    ctx->pc = 0x1bf210u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4430u));
    // 0x1bf214: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1bf214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bf218: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF218u;
    {
        const bool branch_taken_0x1bf218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bf218) {
            ctx->pc = 0x1BF21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF218u;
            // 0x1bf21c: 0x8e040268  lw          $a0, 0x268($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF23Cu;
            goto label_1bf23c;
        }
    }
    ctx->pc = 0x1BF220u;
    // 0x1bf220: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bf220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf224: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF224u;
    {
        const bool branch_taken_0x1bf224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF224u;
        // 0x1bf228: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf224) {
            ctx->pc = 0x1BF238u;
            goto label_1bf238;
        }
    }
    ctx->pc = 0x1BF22Cu;
    // 0x1bf22c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf230: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BF230u;
    SET_GPR_U32(ctx, 31, 0x1BF238u);
    ctx->pc = 0x1BF234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF230u;
    // 0x1bf234: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BF230u, 0x1BF238u)) {
        return;
    }
    ctx->pc = 0x1BF238u;
label_1bf238:
    // 0x1bf238: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1bf238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1bf23c:
    // 0x1bf23c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1bf23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bf240: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1bf240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1bf244: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1bf244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bf248: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1bf248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bf24c: 0x246694d8  addiu       $a2, $v1, -0x6B28
    ctx->pc = 0x1bf24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939864));
    // 0x1bf250: 0x24c20014  addiu       $v0, $a2, 0x14
    ctx->pc = 0x1bf250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x1bf254: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1bf254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf258: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1bf258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bf25c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bf25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf260: 0x14670005  bne         $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF260u;
    {
        const bool branch_taken_0x1bf260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1BF264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF260u;
        // 0x1bf264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf260) {
            ctx->pc = 0x1BF278u;
            goto label_1bf278;
        }
    }
    ctx->pc = 0x1BF268u;
    // 0x1bf268: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1bf268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1bf26c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1bf26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1bf270: 0x10670009  beq         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF270u;
    {
        const bool branch_taken_0x1bf270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1BF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF270u;
        // 0x1bf274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf270) {
            ctx->pc = 0x1BF298u;
            goto label_1bf298;
        }
    }
    ctx->pc = 0x1BF278u;
label_1bf278:
    // 0x1bf278: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x1bf278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    // 0x1bf27c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bf27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf280: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF280u;
    {
        const bool branch_taken_0x1bf280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1BF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF280u;
        // 0x1bf284: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf280) {
            ctx->pc = 0x1BF290u;
            goto label_1bf290;
        }
    }
    ctx->pc = 0x1BF288u;
    // 0x1bf288: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1bf288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1bf28c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1bf28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1bf290:
    // 0x1bf290: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF290u;
    {
        const bool branch_taken_0x1bf290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF290u;
        // 0x1bf294: 0xae02026c  sw          $v0, 0x26C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf290) {
            ctx->pc = 0x1BF29Cu;
            goto label_1bf29c;
        }
    }
    ctx->pc = 0x1BF298u;
label_1bf298:
    // 0x1bf298: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1bf298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
label_1bf29c:
    // 0x1bf29c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BF29Cu;
    {
        const bool branch_taken_0x1bf29c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF29Cu;
        // 0x1bf2a0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf29c) {
            ctx->pc = 0x1BF2FCu;
            goto label_1bf2fc;
        }
    }
    ctx->pc = 0x1BF2A4u;
    // 0x1bf2a4: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x1bf2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1bf2a8: 0x250394d8  addiu       $v1, $t0, -0x6B28
    ctx->pc = 0x1bf2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939864));
    // 0x1bf2ac: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1bf2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1bf2b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf2b4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1bf2b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf2b8: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1bf2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x1bf2bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bf2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bf2c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bf2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bf2c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bf2c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bf2c8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1bf2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf2cc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1bf2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf2d0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1bf2d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf2d4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1bf2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1bf2d8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1bf2d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1bf2dc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1bf2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf2e0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1bf2e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1bf2e4: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1bf2e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1bf2e8: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x1bf2e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1bf2ec: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1bf2ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1bf2f0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1bf2f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1bf2f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BF2F4u;
    {
        const bool branch_taken_0x1bf2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2F4u;
        // 0x1bf2f8: 0xe6030004  swc1        $f3, 0x4($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2f4) {
            ctx->pc = 0x1BF320u;
            goto label_1bf320;
        }
    }
    ctx->pc = 0x1BF2FCu;
label_1bf2fc:
    // 0x1bf2fc: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1bf2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1bf300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf304: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1bf304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x1bf308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf30c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1bf30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1bf310: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x1bf310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1bf314: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x1bf314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x1bf318: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bf318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bf31c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bf31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1bf320:
    // 0x1bf320: 0x8e0202f8  lw          $v0, 0x2F8($s0)
    ctx->pc = 0x1bf320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x1bf324: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF324u;
    {
        const bool branch_taken_0x1bf324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf324) {
            ctx->pc = 0x1BF328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF324u;
            // 0x1bf328: 0xae000310  sw          $zero, 0x310($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF34Cu;
            goto label_1bf34c;
        }
    }
    ctx->pc = 0x1BF32Cu;
label_1bf32c:
    // 0x1bf32c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1bf32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1bf330: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bf330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf338: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bf338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf33c: 0xc0704fc  jal         func_1C13F0
    ctx->pc = 0x1BF33Cu;
    SET_GPR_U32(ctx, 31, 0x1BF344u);
    ctx->pc = 0x1BF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF33Cu;
    // 0x1bf340: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C13F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C13F0u, 0x1BF33Cu, 0x1BF344u)) {
        return;
    }
    ctx->pc = 0x1BF344u;
label_1bf344:
    // 0x1bf344: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF344u;
    {
        const bool branch_taken_0x1bf344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF344u;
        // 0x1bf348: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf344) {
            ctx->pc = 0x1BF358u;
            goto label_1bf358;
        }
    }
    ctx->pc = 0x1BF34Cu;
label_1bf34c:
    // 0x1bf34c: 0xc06fd80  jal         func_1BF600
    ctx->pc = 0x1BF34Cu;
    SET_GPR_U32(ctx, 31, 0x1BF354u);
    ctx->pc = 0x1BF350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF34Cu;
    // 0x1bf350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BF600u, 0x1BF34Cu, 0x1BF354u)) {
        return;
    }
    ctx->pc = 0x1BF354u;
label_1bf354:
    // 0x1bf354: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bf354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bf358:
    // 0x1bf358: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bf358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf35c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf360: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF360u;
        // 0x1bf364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF368u;
}
