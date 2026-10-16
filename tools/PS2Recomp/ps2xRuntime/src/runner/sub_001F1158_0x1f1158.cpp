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

// Function: sub_001F1158
// Address: 0x1f1158 - 0x1f11d8
void sub_001F1158_0x1f1158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1158_0x1f1158");
#endif

    switch (ctx->pc) {
        case 0x1f1178u: goto label_1f1178;
        case 0x1f118cu: goto label_1f118c;
        case 0x1f119cu: goto label_1f119c;
        case 0x1f11a4u: goto label_1f11a4;
        case 0x1f11b4u: goto label_1f11b4;
        case 0x1f11c0u: goto label_1f11c0;
        default: break;
    }

    ctx->pc = 0x1f1158u;

    // 0x1f1158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f115c: 0x24070104  addiu       $a3, $zero, 0x104
    ctx->pc = 0x1f115cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1f1160: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f1160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f1164: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f1164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f1168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f116c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1f116cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f1170: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x1F1170u;
    SET_GPR_U32(ctx, 31, 0x1F1178u);
    ctx->pc = 0x1F1174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1170u;
    // 0x1f1174: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x1F1170u, 0x1F1178u)) {
        return;
    }
    ctx->pc = 0x1F1178u;
label_1f1178:
    // 0x1f1178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f1178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f117c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f117cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1184: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1F1184u;
    SET_GPR_U32(ctx, 31, 0x1F118Cu);
    ctx->pc = 0x1F1188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1184u;
    // 0x1f1188: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x1F1184u, 0x1F118Cu)) {
        return;
    }
    ctx->pc = 0x1F118Cu;
label_1f118c:
    // 0x1f118c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f118cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1190: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f1190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f1194: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1F1194u;
    SET_GPR_U32(ctx, 31, 0x1F119Cu);
    ctx->pc = 0x1F1198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1194u;
    // 0x1f1198: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1F1194u, 0x1F119Cu)) {
        return;
    }
    ctx->pc = 0x1F119Cu;
label_1f119c:
    // 0x1f119c: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x1F119Cu;
    SET_GPR_U32(ctx, 31, 0x1F11A4u);
    ctx->pc = 0x1F11A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F119Cu;
    // 0x1f11a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x1F119Cu, 0x1F11A4u)) {
        return;
    }
    ctx->pc = 0x1F11A4u;
label_1f11a4:
    // 0x1f11a4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F11A4u;
    {
        const bool branch_taken_0x1f11a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11A4u;
        // 0x1f11a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11a4) {
            ctx->pc = 0x1F11C8u;
            goto label_1f11c8;
        }
    }
    ctx->pc = 0x1F11ACu;
    // 0x1f11ac: 0xc080858  jal         func_202160
    ctx->pc = 0x1F11ACu;
    SET_GPR_U32(ctx, 31, 0x1F11B4u);
    ctx->pc = 0x1F11B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11ACu;
    // 0x1f11b0: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1F11ACu, 0x1F11B4u)) {
        return;
    }
    ctx->pc = 0x1F11B4u;
label_1f11b4:
    // 0x1f11b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f11b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11b8: 0xc07c334  jal         func_1F0CD0
    ctx->pc = 0x1F11B8u;
    SET_GPR_U32(ctx, 31, 0x1F11C0u);
    ctx->pc = 0x1F11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11B8u;
    // 0x1f11bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F0CD0u, 0x1F11B8u, 0x1F11C0u)) {
        return;
    }
    ctx->pc = 0x1F11C0u;
label_1f11c0:
    // 0x1f11c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F11C0u;
    {
        const bool branch_taken_0x1f11c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11C0u;
        // 0x1f11c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11c0) {
            ctx->pc = 0x1F11CCu;
            goto label_1f11cc;
        }
    }
    ctx->pc = 0x1F11C8u;
label_1f11c8:
    // 0x1f11c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f11c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f11cc:
    // 0x1f11cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f11ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f11d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F11D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F11D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11D0u;
        // 0x1f11d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F11D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F11D8u;
}
