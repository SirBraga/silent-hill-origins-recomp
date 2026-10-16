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

// Function: sub_00249108
// Address: 0x249108 - 0x249198
void sub_00249108_0x249108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249108_0x249108");
#endif

    switch (ctx->pc) {
        case 0x249108u: goto label_249108;
        case 0x24910cu: goto label_24910c;
        case 0x249110u: goto label_249110;
        case 0x249114u: goto label_249114;
        case 0x249118u: goto label_249118;
        case 0x24911cu: goto label_24911c;
        case 0x249120u: goto label_249120;
        case 0x249124u: goto label_249124;
        case 0x249128u: goto label_249128;
        case 0x24912cu: goto label_24912c;
        case 0x249130u: goto label_249130;
        case 0x249134u: goto label_249134;
        case 0x249138u: goto label_249138;
        case 0x24913cu: goto label_24913c;
        case 0x249140u: goto label_249140;
        case 0x249144u: goto label_249144;
        case 0x249148u: goto label_249148;
        case 0x24914cu: goto label_24914c;
        case 0x249150u: goto label_249150;
        case 0x249154u: goto label_249154;
        case 0x249158u: goto label_249158;
        case 0x24915cu: goto label_24915c;
        case 0x249160u: goto label_249160;
        case 0x249164u: goto label_249164;
        case 0x249168u: goto label_249168;
        case 0x24916cu: goto label_24916c;
        case 0x249170u: goto label_249170;
        case 0x249174u: goto label_249174;
        case 0x249178u: goto label_249178;
        case 0x24917cu: goto label_24917c;
        case 0x249180u: goto label_249180;
        case 0x249184u: goto label_249184;
        case 0x249188u: goto label_249188;
        case 0x24918cu: goto label_24918c;
        case 0x249190u: goto label_249190;
        case 0x249194u: goto label_249194;
        default: break;
    }

    ctx->pc = 0x249108u;

label_249108:
    // 0x249108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_24910c:
    // 0x24910c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24910cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_249110:
    // 0x249110: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x249110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
label_249114:
    // 0x249114: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x249114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_249118:
    // 0x249118: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x249118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_24911c:
    // 0x24911c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_249120:
    // 0x249120: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x249120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_249124:
    // 0x249124: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x249124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_249128:
    // 0x249128: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x249128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_24912c:
    // 0x24912c: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x24912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_249130:
    // 0x249130: 0x34a50409  ori         $a1, $a1, 0x409
    ctx->pc = 0x249130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
label_249134:
    // 0x249134: 0x40f809  jalr        $v0
label_249138:
    if (ctx->pc == 0x249138u) {
        ctx->pc = 0x249138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249134u;
        // 0x249138: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24913Cu;
        goto label_24913c;
    }
    ctx->pc = 0x249134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24913Cu);
        ctx->pc = 0x249138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249134u;
        // 0x249138: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249134u, 0x24913Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24913Cu;
label_24913c:
    // 0x24913c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24913cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249140:
    // 0x249140: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_249144:
    if (ctx->pc == 0x249144u) {
        ctx->pc = 0x249144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249140u;
        // 0x249144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249148u;
        goto label_249148;
    }
    ctx->pc = 0x249140u;
    {
        const bool branch_taken_0x249140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x249144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249140u;
        // 0x249144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249140) {
            ctx->pc = 0x249174u;
            goto label_249174;
        }
    }
    ctx->pc = 0x249148u;
label_249148:
    // 0x249148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24914c:
    // 0x24914c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24914cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_249150:
    // 0x249150: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x249150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_249154:
    // 0x249154: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x249154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_249158:
    // 0x249158: 0xc092848  jal         func_24A120
label_24915c:
    if (ctx->pc == 0x24915Cu) {
        ctx->pc = 0x24915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249158u;
        // 0x24915c: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249160u;
        goto label_249160;
    }
    ctx->pc = 0x249158u;
    SET_GPR_U32(ctx, 31, 0x249160u);
    ctx->pc = 0x24915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249158u;
    // 0x24915c: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x249158u, 0x249160u)) {
        return;
    }
    ctx->pc = 0x249160u;
label_249160:
    // 0x249160: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x249160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_249164:
    // 0x249164: 0xc09281a  jal         func_24A068
label_249168:
    if (ctx->pc == 0x249168u) {
        ctx->pc = 0x249168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249164u;
        // 0x249168: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24916Cu;
        goto label_24916c;
    }
    ctx->pc = 0x249164u;
    SET_GPR_U32(ctx, 31, 0x24916Cu);
    ctx->pc = 0x249168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249164u;
    // 0x249168: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x249164u, 0x24916Cu)) {
        return;
    }
    ctx->pc = 0x24916Cu;
label_24916c:
    // 0x24916c: 0x10000006  b           . + 4 + (0x6 << 2)
label_249170:
    if (ctx->pc == 0x249170u) {
        ctx->pc = 0x249170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24916Cu;
        // 0x249170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249174u;
        goto label_249174;
    }
    ctx->pc = 0x24916Cu;
    {
        const bool branch_taken_0x24916c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24916Cu;
        // 0x249170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24916c) {
            ctx->pc = 0x249188u;
            goto label_249188;
        }
    }
    ctx->pc = 0x249174u;
label_249174:
    // 0x249174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249178:
    // 0x249178: 0xc0c493d  jal         func_3124F4
label_24917c:
    if (ctx->pc == 0x24917Cu) {
        ctx->pc = 0x24917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249178u;
        // 0x24917c: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249180u;
        goto label_249180;
    }
    ctx->pc = 0x249178u;
    SET_GPR_U32(ctx, 31, 0x249180u);
    ctx->pc = 0x24917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249178u;
    // 0x24917c: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x249178u, 0x249180u)) {
        return;
    }
    ctx->pc = 0x249180u;
label_249180:
    // 0x249180: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x249180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_249184:
    // 0x249184: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x249184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249188:
    // 0x249188: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x249188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24918c:
    // 0x24918c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24918cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_249190:
    // 0x249190: 0x3e00008  jr          $ra
label_249194:
    if (ctx->pc == 0x249194u) {
        ctx->pc = 0x249194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249190u;
        // 0x249194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249198u;
        goto label_fallthrough_0x249190;
    }
    ctx->pc = 0x249190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249190u;
        // 0x249194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x249190:
    ctx->pc = 0x249198u;
}
