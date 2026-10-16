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

// Function: sub_00257B58
// Address: 0x257b58 - 0x257be8
void sub_00257B58_0x257b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257B58_0x257b58");
#endif

    switch (ctx->pc) {
        case 0x257b98u: goto label_257b98;
        default: break;
    }

    ctx->pc = 0x257b58u;

    // 0x257b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257b5c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x257b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x257b60: 0xac253fc8  sw          $a1, 0x3FC8($at)
    ctx->pc = 0x257b60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B3FC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FC8u, _value); } while (0);
    // 0x257b64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x257b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x257b68: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x257b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x257b6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x257b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b70: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x257b70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x257b74: 0x8c441240  lw          $a0, 0x1240($v0)
    ctx->pc = 0x257b74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C1240u));
    // 0x257b78: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x257b78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x257b7c: 0x8f8585dc  lw          $a1, -0x7A24($gp)
    ctx->pc = 0x257b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936028)));
    // 0x257b80: 0x25084310  addiu       $t0, $t0, 0x4310
    ctx->pc = 0x257b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17168));
    // 0x257b84: 0x8f8785e0  lw          $a3, -0x7A20($gp)
    ctx->pc = 0x257b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936032)));
    // 0x257b88: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x257b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x257b8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257b90: 0xc0930ce  jal         func_24C338
    ctx->pc = 0x257B90u;
    SET_GPR_U32(ctx, 31, 0x257B98u);
    ctx->pc = 0x257B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B90u;
    // 0x257b94: 0x35290007  ori         $t1, $t1, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x257B90u, 0x257B98u)) {
        return;
    }
    ctx->pc = 0x257B98u;
label_257b98:
    // 0x257b98: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x257b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x257b9c: 0x8c843fc8  lw          $a0, 0x3FC8($a0)
    ctx->pc = 0x257b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3FC8u));
    // 0x257ba0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x257ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x257ba4: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x257ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x257ba8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x257ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x257bac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x257BACu;
    {
        const bool branch_taken_0x257bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BACu;
        // 0x257bb0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bac) {
            ctx->pc = 0x257BD0u;
            goto label_257bd0;
        }
    }
    ctx->pc = 0x257BB4u;
    // 0x257bb4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x257bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x257bb8: 0x8c633fcc  lw          $v1, 0x3FCC($v1)
    ctx->pc = 0x257bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3FCCu));
    // 0x257bbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257bc0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x257bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x257bc4: 0xac233fcc  sw          $v1, 0x3FCC($at)
    ctx->pc = 0x257bc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B3FCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3FCCu, _value); } while (0);
    // 0x257bc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257BC8u;
    {
        const bool branch_taken_0x257bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BC8u;
        // 0x257bcc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257bc8) {
            ctx->pc = 0x257BD4u;
            goto label_257bd4;
        }
    }
    ctx->pc = 0x257BD0u;
label_257bd0:
    // 0x257bd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257bd4:
    // 0x257bd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x257bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x257BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257BDCu;
        // 0x257be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257BE4u;
    // 0x257be4: 0x0  nop
    ctx->pc = 0x257be4u;
    // NOP
    ctx->pc = 0x257be8u;
}
