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

// Function: sub_00320CC8
// Address: 0x320cc8 - 0x320d90
void sub_00320CC8_0x320cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320CC8_0x320cc8");
#endif

    switch (ctx->pc) {
        case 0x320cecu: goto label_320cec;
        case 0x320cfcu: goto label_320cfc;
        case 0x320d70u: goto label_320d70;
        default: break;
    }

    ctx->pc = 0x320cc8u;

    // 0x320cc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x320cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x320ccc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x320cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x320cd0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x320cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x320cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x320cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320cd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x320cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320cdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x320cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x320ce0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x320ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x320ce4: 0xc0c826c  jal         func_3209B0
    ctx->pc = 0x320CE4u;
    SET_GPR_U32(ctx, 31, 0x320CECu);
    ctx->pc = 0x320CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320CE4u;
    // 0x320ce8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3209B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3209B0u, 0x320CE4u, 0x320CECu)) {
        return;
    }
    ctx->pc = 0x320CECu;
label_320cec:
    // 0x320cec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x320cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320cf0: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x320cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x320cf4: 0xc0c826c  jal         func_3209B0
    ctx->pc = 0x320CF4u;
    SET_GPR_U32(ctx, 31, 0x320CFCu);
    ctx->pc = 0x320CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320CF4u;
    // 0x320cf8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3209B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3209B0u, 0x320CF4u, 0x320CFCu)) {
        return;
    }
    ctx->pc = 0x320CFCu;
label_320cfc:
    // 0x320cfc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x320cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x320d00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x320d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320d04: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x320d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x320d08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x320d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320d0c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x320d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x320d10: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x320d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320d14: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x320d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x320d18: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x320d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x320d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x320d20: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x320D20u;
    {
        const bool branch_taken_0x320d20 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x320D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D20u;
        // 0x320d24: 0x21500  sll         $v0, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d20) {
            ctx->pc = 0x320D48u;
            goto label_320d48;
        }
    }
    ctx->pc = 0x320D28u;
    // 0x320d28: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x320d28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x320d2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x320d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x320d30: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x320d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320d34: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x320d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x320d38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x320d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x320d3c: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x320d3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x320d40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x320D40u;
    {
        const bool branch_taken_0x320d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D40u;
        // 0x320d44: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d40) {
            ctx->pc = 0x320D64u;
            goto label_320d64;
        }
    }
    ctx->pc = 0x320D48u;
label_320d48:
    // 0x320d48: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x320d48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x320d4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x320d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x320d50: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x320d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320d54: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x320d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x320d58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x320d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x320d5c: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x320d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x320d60: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x320d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_320d64:
    // 0x320d64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x320d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320d68: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x320D68u;
    SET_GPR_U32(ctx, 31, 0x320D70u);
    ctx->pc = 0x320D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D68u;
    // 0x320d6c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x320D68u, 0x320D70u)) {
        return;
    }
    ctx->pc = 0x320D70u;
label_320d70:
    // 0x320d70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x320d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320d74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x320d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320d78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320d7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x320d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320d80: 0x3e00008  jr          $ra
    ctx->pc = 0x320D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D80u;
        // 0x320d84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320D88u;
    // 0x320d88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x320d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x320d8c: 0x0  nop
    ctx->pc = 0x320d8cu;
    // NOP
    ctx->pc = 0x320d90u;
}
