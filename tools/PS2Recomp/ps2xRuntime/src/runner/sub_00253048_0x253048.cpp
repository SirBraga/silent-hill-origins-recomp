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

// Function: sub_00253048
// Address: 0x253048 - 0x253150
void sub_00253048_0x253048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253048_0x253048");
#endif

    switch (ctx->pc) {
        case 0x253080u: goto label_253080;
        case 0x2530a8u: goto label_2530a8;
        case 0x2530ccu: goto label_2530cc;
        case 0x2530f4u: goto label_2530f4;
        default: break;
    }

    ctx->pc = 0x253048u;

    // 0x253048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25304c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25304cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x253050: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x253050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x253054: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x253054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x253058: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x253058u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x25305c: 0x24505618  addiu       $s0, $v0, 0x5618
    ctx->pc = 0x25305cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 22040));
    // 0x253060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253064: 0x24c62bd0  addiu       $a2, $a2, 0x2BD0
    ctx->pc = 0x253064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11216));
    // 0x253068: 0xac405618  sw          $zero, 0x5618($v0)
    ctx->pc = 0x253068u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x735618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735618u, _value); } while (0);
    // 0x25306c: 0x24e72c48  addiu       $a3, $a3, 0x2C48
    ctx->pc = 0x25306cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11336));
    // 0x253070: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x253070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x253074: 0x2405012a  addiu       $a1, $zero, 0x12A
    ctx->pc = 0x253074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x253078: 0xc09731a  jal         func_25CC68
    ctx->pc = 0x253078u;
    SET_GPR_U32(ctx, 31, 0x253080u);
    ctx->pc = 0x25307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253078u;
    // 0x25307c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CC68u, 0x253078u, 0x253080u)) {
        return;
    }
    ctx->pc = 0x253080u;
label_253080:
    // 0x253080: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x253080u;
    {
        const bool branch_taken_0x253080 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x253084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253080u;
        // 0x253084: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253080) {
            ctx->pc = 0x253100u;
            goto label_253100;
        }
    }
    ctx->pc = 0x253088u;
    // 0x253088: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x253088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x25308c: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x25308cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x253090: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x253090u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x253094: 0x24a52fc0  addiu       $a1, $a1, 0x2FC0
    ctx->pc = 0x253094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12224));
    // 0x253098: 0x24c62f60  addiu       $a2, $a2, 0x2F60
    ctx->pc = 0x253098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12128));
    // 0x25309c: 0x24e72f40  addiu       $a3, $a3, 0x2F40
    ctx->pc = 0x25309cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12096));
    // 0x2530a0: 0xc09732c  jal         func_25CCB0
    ctx->pc = 0x2530A0u;
    SET_GPR_U32(ctx, 31, 0x2530A8u);
    ctx->pc = 0x2530A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2530A0u;
    // 0x2530a4: 0x2404012a  addiu       $a0, $zero, 0x12A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CCB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CCB0u, 0x2530A0u, 0x2530A8u)) {
        return;
    }
    ctx->pc = 0x2530A8u;
label_2530a8:
    // 0x2530a8: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2530A8u;
    {
        const bool branch_taken_0x2530a8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2530ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530A8u;
        // 0x2530ac: 0x3c060025  lui         $a2, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530a8) {
            ctx->pc = 0x253100u;
            goto label_253100;
        }
    }
    ctx->pc = 0x2530B0u;
    // 0x2530b0: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x2530b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x2530b4: 0x24c62c80  addiu       $a2, $a2, 0x2C80
    ctx->pc = 0x2530b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11392));
    // 0x2530b8: 0x24e72cb8  addiu       $a3, $a3, 0x2CB8
    ctx->pc = 0x2530b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11448));
    // 0x2530bc: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x2530bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2530c0: 0x2405012a  addiu       $a1, $zero, 0x12A
    ctx->pc = 0x2530c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x2530c4: 0xc096dea  jal         func_25B7A8
    ctx->pc = 0x2530C4u;
    SET_GPR_U32(ctx, 31, 0x2530CCu);
    ctx->pc = 0x2530C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2530C4u;
    // 0x2530c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7A8u, 0x2530C4u, 0x2530CCu)) {
        return;
    }
    ctx->pc = 0x2530CCu;
label_2530cc:
    // 0x2530cc: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2530CCu;
    {
        const bool branch_taken_0x2530cc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2530D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530CCu;
        // 0x2530d0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530cc) {
            ctx->pc = 0x253100u;
            goto label_253100;
        }
    }
    ctx->pc = 0x2530D4u;
    // 0x2530d4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x2530d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x2530d8: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x2530d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x2530dc: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x2530dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x2530e0: 0x24a52ea8  addiu       $a1, $a1, 0x2EA8
    ctx->pc = 0x2530e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11944));
    // 0x2530e4: 0x24c62e28  addiu       $a2, $a2, 0x2E28
    ctx->pc = 0x2530e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11816));
    // 0x2530e8: 0x24e72df8  addiu       $a3, $a3, 0x2DF8
    ctx->pc = 0x2530e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11768));
    // 0x2530ec: 0xc096dfc  jal         func_25B7F0
    ctx->pc = 0x2530ECu;
    SET_GPR_U32(ctx, 31, 0x2530F4u);
    ctx->pc = 0x2530F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2530ECu;
    // 0x2530f0: 0x2404012a  addiu       $a0, $zero, 0x12A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B7F0u, 0x2530ECu, 0x2530F4u)) {
        return;
    }
    ctx->pc = 0x2530F4u;
label_2530f4:
    // 0x2530f4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x2530f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2530f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2530F8u;
    {
        const bool branch_taken_0x2530f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530F8u;
        // 0x2530fc: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530f8) {
            ctx->pc = 0x253104u;
            goto label_253104;
        }
    }
    ctx->pc = 0x253100u;
label_253100:
    // 0x253100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x253100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253104:
    // 0x253104: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x253104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25310c: 0x3e00008  jr          $ra
    ctx->pc = 0x25310Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25310Cu;
        // 0x253110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25310Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253114u;
    // 0x253114: 0x0  nop
    ctx->pc = 0x253114u;
    // NOP
    // 0x253118: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x253118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25311c: 0x0  nop
    ctx->pc = 0x25311cu;
    // NOP
    // 0x253120: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x253120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x253124: 0x0  nop
    ctx->pc = 0x253124u;
    // NOP
    // 0x253128: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x253128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x25312c: 0x0  nop
    ctx->pc = 0x25312cu;
    // NOP
    // 0x253130: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x253130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x253134: 0x0  nop
    ctx->pc = 0x253134u;
    // NOP
    // 0x253138: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x253138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x25313c: 0x0  nop
    ctx->pc = 0x25313cu;
    // NOP
    // 0x253140: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x253140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x253144: 0x0  nop
    ctx->pc = 0x253144u;
    // NOP
    // 0x253148: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x253148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25314c: 0x0  nop
    ctx->pc = 0x25314cu;
    // NOP
    ctx->pc = 0x253150u;
}
