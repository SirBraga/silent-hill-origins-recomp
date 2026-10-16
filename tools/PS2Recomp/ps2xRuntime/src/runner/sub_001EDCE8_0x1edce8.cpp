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

// Function: sub_001EDCE8
// Address: 0x1edce8 - 0x1eddd0
void sub_001EDCE8_0x1edce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDCE8_0x1edce8");
#endif

    switch (ctx->pc) {
        case 0x1edd00u: goto label_1edd00;
        case 0x1edd34u: goto label_1edd34;
        case 0x1edd64u: goto label_1edd64;
        case 0x1edd88u: goto label_1edd88;
        case 0x1eddb4u: goto label_1eddb4;
        default: break;
    }

    ctx->pc = 0x1edce8u;

    // 0x1edce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1edce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1edcec: 0x24040a07  addiu       $a0, $zero, 0xA07
    ctx->pc = 0x1edcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2567));
    // 0x1edcf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1edcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1edcf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1edcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edcf8: 0xc0957e4  jal         func_255F90
    ctx->pc = 0x1EDCF8u;
    SET_GPR_U32(ctx, 31, 0x1EDD00u);
    ctx->pc = 0x1EDCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDCF8u;
    // 0x1edcfc: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F90u, 0x1EDCF8u, 0x1EDD00u)) {
        return;
    }
    ctx->pc = 0x1EDD00u;
label_1edd00:
    // 0x1edd00: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDD00u;
    {
        const bool branch_taken_0x1edd00 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1EDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD00u;
        // 0x1edd04: 0xae02e7bc  sw          $v0, -0x1844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294961084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd00) {
            ctx->pc = 0x1EDD10u;
            goto label_1edd10;
        }
    }
    ctx->pc = 0x1EDD08u;
    // 0x1edd08: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1EDD08u;
    {
        const bool branch_taken_0x1edd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD08u;
        // 0x1edd0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd08) {
            ctx->pc = 0x1EDD70u;
            goto label_1edd70;
        }
    }
    ctx->pc = 0x1EDD10u;
label_1edd10:
    // 0x1edd10: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1edd10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1edd14: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x1edd14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x1edd18: 0x3c08001f  lui         $t0, 0x1F
    ctx->pc = 0x1edd18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)31 << 16));
    // 0x1edd1c: 0x24c6ddd0  addiu       $a2, $a2, -0x2230
    ctx->pc = 0x1edd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958544));
    // 0x1edd20: 0x24e7de08  addiu       $a3, $a3, -0x21F8
    ctx->pc = 0x1edd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958600));
    // 0x1edd24: 0x2508de50  addiu       $t0, $t0, -0x21B0
    ctx->pc = 0x1edd24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958672));
    // 0x1edd28: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1edd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1edd2c: 0xc09579e  jal         func_255E78
    ctx->pc = 0x1EDD2Cu;
    SET_GPR_U32(ctx, 31, 0x1EDD34u);
    ctx->pc = 0x1EDD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD2Cu;
    // 0x1edd30: 0x24050a07  addiu       $a1, $zero, 0xA07 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2567));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255E78u, 0x1EDD2Cu, 0x1EDD34u)) {
        return;
    }
    ctx->pc = 0x1EDD34u;
label_1edd34:
    // 0x1edd34: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDD34u;
    {
        const bool branch_taken_0x1edd34 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1EDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD34u;
        // 0x1edd38: 0xae02e7bc  sw          $v0, -0x1844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294961084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd34) {
            ctx->pc = 0x1EDD44u;
            goto label_1edd44;
        }
    }
    ctx->pc = 0x1EDD3Cu;
    // 0x1edd3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EDD3Cu;
    {
        const bool branch_taken_0x1edd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD3Cu;
        // 0x1edd40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd3c) {
            ctx->pc = 0x1EDD70u;
            goto label_1edd70;
        }
    }
    ctx->pc = 0x1EDD44u;
label_1edd44:
    // 0x1edd44: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1edd44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1edd48: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1edd48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1edd4c: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x1edd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x1edd50: 0x24a5de80  addiu       $a1, $a1, -0x2180
    ctx->pc = 0x1edd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958720));
    // 0x1edd54: 0x24c6dee8  addiu       $a2, $a2, -0x2118
    ctx->pc = 0x1edd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958824));
    // 0x1edd58: 0x24e7df28  addiu       $a3, $a3, -0x20D8
    ctx->pc = 0x1edd58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958888));
    // 0x1edd5c: 0xc0957c2  jal         func_255F08
    ctx->pc = 0x1EDD5Cu;
    SET_GPR_U32(ctx, 31, 0x1EDD64u);
    ctx->pc = 0x1EDD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD5Cu;
    // 0x1edd60: 0x24040a07  addiu       $a0, $zero, 0xA07 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2567));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F08u, 0x1EDD5Cu, 0x1EDD64u)) {
        return;
    }
    ctx->pc = 0x1EDD64u;
label_1edd64:
    // 0x1edd64: 0x8e03e7bc  lw          $v1, -0x1844($s0)
    ctx->pc = 0x1edd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961084)));
    // 0x1edd68: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1edd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1edd6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1edd6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1edd70:
    // 0x1edd70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDD70u;
    {
        const bool branch_taken_0x1edd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD70u;
        // 0x1edd74: 0x24040a0a  addiu       $a0, $zero, 0xA0A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd70) {
            ctx->pc = 0x1EDD80u;
            goto label_1edd80;
        }
    }
    ctx->pc = 0x1EDD78u;
    // 0x1edd78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EDD78u;
    {
        const bool branch_taken_0x1edd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD78u;
        // 0x1edd7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd78) {
            ctx->pc = 0x1EDDC0u;
            goto label_1eddc0;
        }
    }
    ctx->pc = 0x1EDD80u;
label_1edd80:
    // 0x1edd80: 0xc0895f6  jal         func_2257D8
    ctx->pc = 0x1EDD80u;
    SET_GPR_U32(ctx, 31, 0x1EDD88u);
    ctx->pc = 0x1EDD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD80u;
    // 0x1edd84: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2257D8u, 0x1EDD80u, 0x1EDD88u)) {
        return;
    }
    ctx->pc = 0x1EDD88u;
label_1edd88:
    // 0x1edd88: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDD88u;
    {
        const bool branch_taken_0x1edd88 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1EDD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD88u;
        // 0x1edd8c: 0xae02e7c0  sw          $v0, -0x1840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294961088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd88) {
            ctx->pc = 0x1EDD98u;
            goto label_1edd98;
        }
    }
    ctx->pc = 0x1EDD90u;
    // 0x1edd90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EDD90u;
    {
        const bool branch_taken_0x1edd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD90u;
        // 0x1edd94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd90) {
            ctx->pc = 0x1EDDC0u;
            goto label_1eddc0;
        }
    }
    ctx->pc = 0x1EDD98u;
label_1edd98:
    // 0x1edd98: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1edd98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1edd9c: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x1edd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x1edda0: 0x24c6e030  addiu       $a2, $a2, -0x1FD0
    ctx->pc = 0x1edda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959152));
    // 0x1edda4: 0x24e7e0a0  addiu       $a3, $a3, -0x1F60
    ctx->pc = 0x1edda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959264));
    // 0x1edda8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1edda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eddac: 0xc0895e6  jal         func_225798
    ctx->pc = 0x1EDDACu;
    SET_GPR_U32(ctx, 31, 0x1EDDB4u);
    ctx->pc = 0x1EDDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDDACu;
    // 0x1eddb0: 0x24050a0a  addiu       $a1, $zero, 0xA0A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x1EDDACu, 0x1EDDB4u)) {
        return;
    }
    ctx->pc = 0x1EDDB4u;
label_1eddb4:
    // 0x1eddb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1eddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eddb8: 0xae02e7c0  sw          $v0, -0x1840($s0)
    ctx->pc = 0x1eddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294961088), GPR_U32(ctx, 2));
    // 0x1eddbc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1eddbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eddc0:
    // 0x1eddc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1eddc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eddc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eddc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eddc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDC8u;
        // 0x1eddcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDDD0u;
}
