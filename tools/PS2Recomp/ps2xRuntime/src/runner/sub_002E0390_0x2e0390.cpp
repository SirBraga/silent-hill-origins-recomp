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

// Function: sub_002E0390
// Address: 0x2e0390 - 0x2e0460
void sub_002E0390_0x2e0390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0390_0x2e0390");
#endif

    switch (ctx->pc) {
        case 0x2e03a4u: goto label_2e03a4;
        case 0x2e03acu: goto label_2e03ac;
        default: break;
    }

    ctx->pc = 0x2e0390u;

    // 0x2e0390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0394: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e0394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e0398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e039c: 0xc0b8d5a  jal         func_2E3568
    ctx->pc = 0x2E039Cu;
    SET_GPR_U32(ctx, 31, 0x2E03A4u);
    ctx->pc = 0x2E3568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3568u, 0x2E039Cu, 0x2E03A4u)) {
        return;
    }
    ctx->pc = 0x2E03A4u;
label_2e03a4:
    // 0x2e03a4: 0xc0b8d5e  jal         func_2E3578
    ctx->pc = 0x2E03A4u;
    SET_GPR_U32(ctx, 31, 0x2E03ACu);
    ctx->pc = 0x2E03A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E03A4u;
    // 0x2e03a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3578u, 0x2E03A4u, 0x2E03ACu)) {
        return;
    }
    ctx->pc = 0x2E03ACu;
label_2e03ac:
    // 0x2e03ac: 0x8f838c28  lw          $v1, -0x73D8($gp)
    ctx->pc = 0x2e03acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937640)));
    // 0x2e03b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e03b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03b4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2e03b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e03b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E03B8u;
    {
        const bool branch_taken_0x2e03b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03B8u;
        // 0x2e03bc: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03b8) {
            ctx->pc = 0x2E03C8u;
            goto label_2e03c8;
        }
    }
    ctx->pc = 0x2E03C0u;
    // 0x2e03c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E03C0u;
    {
        const bool branch_taken_0x2e03c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03C0u;
        // 0x2e03c4: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03c0) {
            ctx->pc = 0x2E03CCu;
            goto label_2e03cc;
        }
    }
    ctx->pc = 0x2E03C8u;
label_2e03c8:
    // 0x2e03c8: 0x2032023  subu        $a0, $s0, $v1
    ctx->pc = 0x2e03c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2e03cc:
    // 0x2e03cc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E03CCu;
    {
        const bool branch_taken_0x2e03cc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2E03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03CCu;
        // 0x2e03d0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03cc) {
            ctx->pc = 0x2E03E4u;
            goto label_2e03e4;
        }
    }
    ctx->pc = 0x2E03D4u;
    // 0x2e03d4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2e03d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e03d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e03d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e03dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E03DCu;
    {
        const bool branch_taken_0x2e03dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e03dc) {
            ctx->pc = 0x2E03F8u;
            goto label_2e03f8;
        }
    }
    ctx->pc = 0x2E03E4u;
label_2e03e4:
    // 0x2e03e4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e03e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e03e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e03e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e03ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e03ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e03f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e03f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e03f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e03f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e03f8:
    // 0x2e03f8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E03F8u;
    {
        const bool branch_taken_0x2e03f8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2E03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03F8u;
        // 0x2e03fc: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03f8) {
            ctx->pc = 0x2E0410u;
            goto label_2e0410;
        }
    }
    ctx->pc = 0x2E0400u;
    // 0x2e0400: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e0400u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0404: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e0404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e0408: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0408u;
    {
        const bool branch_taken_0x2e0408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0408) {
            ctx->pc = 0x2E0424u;
            goto label_2e0424;
        }
    }
    ctx->pc = 0x2E0410u;
label_2e0410:
    // 0x2e0410: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2e0410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2e0414: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e0414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e0418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e0418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e041c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e041cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e0420: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e0420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e0424:
    // 0x2e0424: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e0424u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2e0428: 0x8f828c24  lw          $v0, -0x73DC($gp)
    ctx->pc = 0x2e0428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937636)));
    // 0x2e042c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2e042cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2e0430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0434: 0xaf908c28  sw          $s0, -0x73D8($gp)
    ctx->pc = 0x2e0434u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937640), GPR_U32(ctx, 16));
    // 0x2e0438: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e0438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e043c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e043cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0440: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e0440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e0444: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e0444u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e0448: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e0448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e044c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e0450: 0xaf828c24  sw          $v0, -0x73DC($gp)
    ctx->pc = 0x2e0450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937636), GPR_U32(ctx, 2));
    // 0x2e0454: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0454u;
        // 0x2e0458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E045Cu;
    // 0x2e045c: 0x0  nop
    ctx->pc = 0x2e045cu;
    // NOP
    ctx->pc = 0x2e0460u;
}
