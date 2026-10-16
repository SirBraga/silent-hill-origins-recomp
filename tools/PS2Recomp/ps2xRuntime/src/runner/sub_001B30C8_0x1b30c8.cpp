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

// Function: sub_001B30C8
// Address: 0x1b30c8 - 0x1b3140
void sub_001B30C8_0x1b30c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B30C8_0x1b30c8");
#endif

    switch (ctx->pc) {
        case 0x1b30f0u: goto label_1b30f0;
        case 0x1b3114u: goto label_1b3114;
        case 0x1b312cu: goto label_1b312c;
        default: break;
    }

    ctx->pc = 0x1b30c8u;

    // 0x1b30c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b30c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b30cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b30ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b30d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b30d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b30d4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B30D4u;
    {
        const bool branch_taken_0x1b30d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30D4u;
        // 0x1b30d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30d4) {
            ctx->pc = 0x1B312Cu;
            goto label_1b312c;
        }
    }
    ctx->pc = 0x1B30DCu;
    // 0x1b30dc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B30DCu;
    {
        const bool branch_taken_0x1b30dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30DCu;
        // 0x1b30e0: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30dc) {
            ctx->pc = 0x1B311Cu;
            goto label_1b311c;
        }
    }
    ctx->pc = 0x1B30E4u;
    // 0x1b30e4: 0x2610c220  addiu       $s0, $s0, -0x3DE0
    ctx->pc = 0x1b30e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951456));
    // 0x1b30e8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1B30E8u;
    SET_GPR_U32(ctx, 31, 0x1B30F0u);
    ctx->pc = 0x1B30ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30E8u;
    // 0x1b30ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1B30E8u, 0x1B30F0u)) {
        return;
    }
    ctx->pc = 0x1B30F0u;
label_1b30f0:
    // 0x1b30f0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1b30f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1b30f4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1b30f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1b30f8: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b30f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1b30fc: 0xac628620  sw          $v0, -0x79E0($v1)
    ctx->pc = 0x1b30fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8620u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8620u, _value); } while (0);
    // 0x1b3100: 0x24848628  addiu       $a0, $a0, -0x79D8
    ctx->pc = 0x1b3100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936104));
    // 0x1b3104: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3108: 0x24c63140  addiu       $a2, $a2, 0x3140
    ctx->pc = 0x1b3108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12608));
    // 0x1b310c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1B310Cu;
    SET_GPR_U32(ctx, 31, 0x1B3114u);
    ctx->pc = 0x1B3110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B310Cu;
    // 0x1b3110: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1B310Cu, 0x1B3114u)) {
        return;
    }
    ctx->pc = 0x1B3114u;
label_1b3114:
    // 0x1b3114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3114u;
    {
        const bool branch_taken_0x1b3114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3114u;
        // 0x1b3118: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3114) {
            ctx->pc = 0x1B3130u;
            goto label_1b3130;
        }
    }
    ctx->pc = 0x1B311Cu;
label_1b311c:
    // 0x1b311c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1b311cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1b3120: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b3120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3124: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1B3124u;
    SET_GPR_U32(ctx, 31, 0x1B312Cu);
    ctx->pc = 0x1B3128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3124u;
    // 0x1b3128: 0x24848628  addiu       $a0, $a0, -0x79D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1B3124u, 0x1B312Cu)) {
        return;
    }
    ctx->pc = 0x1B312Cu;
label_1b312c:
    // 0x1b312c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b312cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b3130:
    // 0x1b3130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3134: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3134u;
        // 0x1b3138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B313Cu;
    // 0x1b313c: 0x0  nop
    ctx->pc = 0x1b313cu;
    // NOP
    ctx->pc = 0x1b3140u;
}
