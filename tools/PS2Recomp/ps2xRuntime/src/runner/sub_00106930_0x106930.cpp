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

// Function: sub_00106930
// Address: 0x106930 - 0x1069b8
void sub_00106930_0x106930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106930_0x106930");
#endif

    switch (ctx->pc) {
        case 0x106980u: goto label_106980;
        case 0x106988u: goto label_106988;
        case 0x10699cu: goto label_10699c;
        default: break;
    }

    ctx->pc = 0x106930u;

    // 0x106930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106934: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x106934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x106938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10693c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10693cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x106940: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x106940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x106944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10694c: 0x8e2304bc  lw          $v1, 0x4BC($s1)
    ctx->pc = 0x10694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1212)));
    // 0x106950: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x106950u;
    {
        const bool branch_taken_0x106950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x106954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106950u;
        // 0x106954: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106950) {
            ctx->pc = 0x1069A8u;
            goto label_1069a8;
        }
    }
    ctx->pc = 0x106958u;
    // 0x106958: 0x8e2204b8  lw          $v0, 0x4B8($s1)
    ctx->pc = 0x106958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
    // 0x10695c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x10695Cu;
    {
        const bool branch_taken_0x10695c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10695c) {
            ctx->pc = 0x106960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10695Cu;
            // 0x106960: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1069ACu;
            goto label_1069ac;
        }
    }
    ctx->pc = 0x106964u;
    // 0x106964: 0x24100078  addiu       $s0, $zero, 0x78
    ctx->pc = 0x106964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x106968: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x106968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x10696c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10696cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x106970: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x106970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x106974: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x106974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x106978: 0xc09fafc  jal         func_27EBF0
    ctx->pc = 0x106978u;
    SET_GPR_U32(ctx, 31, 0x106980u);
    ctx->pc = 0x10697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106978u;
    // 0x10697c: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EBF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27EBF0u, 0x106978u, 0x106980u)) {
        return;
    }
    ctx->pc = 0x106980u;
label_106980:
    // 0x106980: 0xc09fc2a  jal         func_27F0A8
    ctx->pc = 0x106980u;
    SET_GPR_U32(ctx, 31, 0x106988u);
    ctx->pc = 0x106984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106980u;
    // 0x106984: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F0A8u, 0x106980u, 0x106988u)) {
        return;
    }
    ctx->pc = 0x106988u;
label_106988:
    // 0x106988: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x106988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x10698c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x10698cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x106990: 0x24a562f0  addiu       $a1, $a1, 0x62F0
    ctx->pc = 0x106990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25328));
    // 0x106994: 0xc09fc70  jal         func_27F1C0
    ctx->pc = 0x106994u;
    SET_GPR_U32(ctx, 31, 0x10699Cu);
    ctx->pc = 0x106998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106994u;
    // 0x106998: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F1C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27F1C0u, 0x106994u, 0x10699Cu)) {
        return;
    }
    ctx->pc = 0x10699Cu;
label_10699c:
    // 0x10699c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10699cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1069a0: 0xae2304b8  sw          $v1, 0x4B8($s1)
    ctx->pc = 0x1069a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1208), GPR_U32(ctx, 3));
    // 0x1069a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1069a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1069a8:
    // 0x1069a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1069a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1069ac:
    // 0x1069ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1069acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1069b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1069B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1069B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069B0u;
        // 0x1069b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1069B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1069B8u;
}
