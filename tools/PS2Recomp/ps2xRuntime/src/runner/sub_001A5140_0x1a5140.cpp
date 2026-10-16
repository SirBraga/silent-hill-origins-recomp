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

// Function: sub_001A5140
// Address: 0x1a5140 - 0x1a51b8
void sub_001A5140_0x1a5140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5140_0x1a5140");
#endif

    switch (ctx->pc) {
        case 0x1a5168u: goto label_1a5168;
        case 0x1a518cu: goto label_1a518c;
        case 0x1a51a4u: goto label_1a51a4;
        default: break;
    }

    ctx->pc = 0x1a5140u;

    // 0x1a5140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5144: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a5144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a5148: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a5148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a514c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A514Cu;
    {
        const bool branch_taken_0x1a514c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A514Cu;
        // 0x1a5150: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a514c) {
            ctx->pc = 0x1A51A4u;
            goto label_1a51a4;
        }
    }
    ctx->pc = 0x1A5154u;
    // 0x1a5154: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A5154u;
    {
        const bool branch_taken_0x1a5154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5154u;
        // 0x1a5158: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5154) {
            ctx->pc = 0x1A5194u;
            goto label_1a5194;
        }
    }
    ctx->pc = 0x1A515Cu;
    // 0x1a515c: 0x2610b290  addiu       $s0, $s0, -0x4D70
    ctx->pc = 0x1a515cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947472));
    // 0x1a5160: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1A5160u;
    SET_GPR_U32(ctx, 31, 0x1A5168u);
    ctx->pc = 0x1A5164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5160u;
    // 0x1a5164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1A5160u, 0x1A5168u)) {
        return;
    }
    ctx->pc = 0x1A5168u;
label_1a5168:
    // 0x1a5168: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1a5168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1a516c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1a516cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1a5170: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a5170u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a5174: 0xac628198  sw          $v0, -0x7E68($v1)
    ctx->pc = 0x1a5174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8198u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8198u, _value); } while (0);
    // 0x1a5178: 0x248481a0  addiu       $a0, $a0, -0x7E60
    ctx->pc = 0x1a5178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934944));
    // 0x1a517c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a517cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5180: 0x24c651b8  addiu       $a2, $a2, 0x51B8
    ctx->pc = 0x1a5180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20920));
    // 0x1a5184: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1A5184u;
    SET_GPR_U32(ctx, 31, 0x1A518Cu);
    ctx->pc = 0x1A5188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5184u;
    // 0x1a5188: 0x2407005c  addiu       $a3, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1A5184u, 0x1A518Cu)) {
        return;
    }
    ctx->pc = 0x1A518Cu;
label_1a518c:
    // 0x1a518c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A518Cu;
    {
        const bool branch_taken_0x1a518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A518Cu;
        // 0x1a5190: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a518c) {
            ctx->pc = 0x1A51A8u;
            goto label_1a51a8;
        }
    }
    ctx->pc = 0x1A5194u;
label_1a5194:
    // 0x1a5194: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1a5194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1a5198: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a5198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a519c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1A519Cu;
    SET_GPR_U32(ctx, 31, 0x1A51A4u);
    ctx->pc = 0x1A51A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A519Cu;
    // 0x1a51a0: 0x248481a0  addiu       $a0, $a0, -0x7E60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1A519Cu, 0x1A51A4u)) {
        return;
    }
    ctx->pc = 0x1A51A4u;
label_1a51a4:
    // 0x1a51a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a51a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a51a8:
    // 0x1a51a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a51a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a51ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A51ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51ACu;
        // 0x1a51b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A51ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A51B4u;
    // 0x1a51b4: 0x0  nop
    ctx->pc = 0x1a51b4u;
    // NOP
    ctx->pc = 0x1a51b8u;
}
