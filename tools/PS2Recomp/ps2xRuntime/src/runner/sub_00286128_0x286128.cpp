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

// Function: sub_00286128
// Address: 0x286128 - 0x286208
void sub_00286128_0x286128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286128_0x286128");
#endif

    switch (ctx->pc) {
        case 0x286128u: goto label_286128;
        case 0x28612cu: goto label_28612c;
        case 0x286130u: goto label_286130;
        case 0x286134u: goto label_286134;
        case 0x286138u: goto label_286138;
        case 0x28613cu: goto label_28613c;
        case 0x286140u: goto label_286140;
        case 0x286144u: goto label_286144;
        case 0x286148u: goto label_286148;
        case 0x28614cu: goto label_28614c;
        case 0x286150u: goto label_286150;
        case 0x286154u: goto label_286154;
        case 0x286158u: goto label_286158;
        case 0x28615cu: goto label_28615c;
        case 0x286160u: goto label_286160;
        case 0x286164u: goto label_286164;
        case 0x286168u: goto label_286168;
        case 0x28616cu: goto label_28616c;
        case 0x286170u: goto label_286170;
        case 0x286174u: goto label_286174;
        case 0x286178u: goto label_286178;
        case 0x28617cu: goto label_28617c;
        case 0x286180u: goto label_286180;
        case 0x286184u: goto label_286184;
        case 0x286188u: goto label_286188;
        case 0x28618cu: goto label_28618c;
        case 0x286190u: goto label_286190;
        case 0x286194u: goto label_286194;
        case 0x286198u: goto label_286198;
        case 0x28619cu: goto label_28619c;
        case 0x2861a0u: goto label_2861a0;
        case 0x2861a4u: goto label_2861a4;
        case 0x2861a8u: goto label_2861a8;
        case 0x2861acu: goto label_2861ac;
        case 0x2861b0u: goto label_2861b0;
        case 0x2861b4u: goto label_2861b4;
        case 0x2861b8u: goto label_2861b8;
        case 0x2861bcu: goto label_2861bc;
        case 0x2861c0u: goto label_2861c0;
        case 0x2861c4u: goto label_2861c4;
        case 0x2861c8u: goto label_2861c8;
        case 0x2861ccu: goto label_2861cc;
        case 0x2861d0u: goto label_2861d0;
        case 0x2861d4u: goto label_2861d4;
        case 0x2861d8u: goto label_2861d8;
        case 0x2861dcu: goto label_2861dc;
        case 0x2861e0u: goto label_2861e0;
        case 0x2861e4u: goto label_2861e4;
        case 0x2861e8u: goto label_2861e8;
        case 0x2861ecu: goto label_2861ec;
        case 0x2861f0u: goto label_2861f0;
        case 0x2861f4u: goto label_2861f4;
        case 0x2861f8u: goto label_2861f8;
        case 0x2861fcu: goto label_2861fc;
        case 0x286200u: goto label_286200;
        case 0x286204u: goto label_286204;
        default: break;
    }

    ctx->pc = 0x286128u;

label_286128:
    // 0x286128: 0x8f828fa4  lw          $v0, -0x705C($gp)
    ctx->pc = 0x286128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938532)));
label_28612c:
    // 0x28612c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28612cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_286130:
    // 0x286130: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x286130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_286134:
    // 0x286134: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x286134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_286138:
    // 0x286138: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x286138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_28613c:
    // 0x28613c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28613cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_286140:
    // 0x286140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x286140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_286144:
    // 0x286144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_286148:
    // 0x286148: 0xaf828fa4  sw          $v0, -0x705C($gp)
    ctx->pc = 0x286148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938532), GPR_U32(ctx, 2));
label_28614c:
    // 0x28614c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_286150:
    if (ctx->pc == 0x286150u) {
        ctx->pc = 0x286150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28614Cu;
        // 0x286150: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286154u;
        goto label_286154;
    }
    ctx->pc = 0x28614Cu;
    {
        const bool branch_taken_0x28614c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28614Cu;
        // 0x286150: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28614c) {
            ctx->pc = 0x2861E8u;
            goto label_2861e8;
        }
    }
    ctx->pc = 0x286154u;
label_286154:
    // 0x286154: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x286154u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
label_286158:
    // 0x286158: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x286158u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
label_28615c:
    // 0x28615c: 0x26316380  addiu       $s1, $s1, 0x6380
    ctx->pc = 0x28615cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25472));
label_286160:
    // 0x286160: 0x26520fc8  addiu       $s2, $s2, 0xFC8
    ctx->pc = 0x286160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_286164:
    // 0x286164: 0x26300028  addiu       $s0, $s1, 0x28
    ctx->pc = 0x286164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_286168:
    // 0x286168: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x286168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_28616c:
    // 0x28616c: 0x40f809  jalr        $v0
label_286170:
    if (ctx->pc == 0x286170u) {
        ctx->pc = 0x286170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28616Cu;
        // 0x286170: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286174u;
        goto label_286174;
    }
    ctx->pc = 0x28616Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286174u);
        ctx->pc = 0x286170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28616Cu;
        // 0x286170: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28616Cu, 0x286174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286174u;
label_286174:
    // 0x286174: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x286174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_286178:
    // 0x286178: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x286178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_28617c:
    // 0x28617c: 0x40f809  jalr        $v0
label_286180:
    if (ctx->pc == 0x286180u) {
        ctx->pc = 0x286180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28617Cu;
        // 0x286180: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286184u;
        goto label_286184;
    }
    ctx->pc = 0x28617Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286184u);
        ctx->pc = 0x286180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28617Cu;
        // 0x286180: 0x8e04fffc  lw          $a0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28617Cu, 0x286184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286184u;
label_286184:
    // 0x286184: 0x8e04fff8  lw          $a0, -0x8($s0)
    ctx->pc = 0x286184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
label_286188:
    // 0x286188: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x286188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_28618c:
    // 0x28618c: 0x40f809  jalr        $v0
label_286190:
    if (ctx->pc == 0x286190u) {
        ctx->pc = 0x286190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28618Cu;
        // 0x286190: 0xae00fffc  sw          $zero, -0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286194u;
        goto label_286194;
    }
    ctx->pc = 0x28618Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286194u);
        ctx->pc = 0x286190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28618Cu;
        // 0x286190: 0xae00fffc  sw          $zero, -0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28618Cu, 0x286194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286194u;
label_286194:
    // 0x286194: 0x8e04fff4  lw          $a0, -0xC($s0)
    ctx->pc = 0x286194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
label_286198:
    // 0x286198: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x286198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_28619c:
    // 0x28619c: 0x40f809  jalr        $v0
label_2861a0:
    if (ctx->pc == 0x2861A0u) {
        ctx->pc = 0x2861A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28619Cu;
        // 0x2861a0: 0xae00fff8  sw          $zero, -0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2861A4u;
        goto label_2861a4;
    }
    ctx->pc = 0x28619Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2861A4u);
        ctx->pc = 0x2861A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28619Cu;
        // 0x2861a0: 0xae00fff8  sw          $zero, -0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28619Cu, 0x2861A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2861A4u;
label_2861a4:
    // 0x2861a4: 0x8e04fff0  lw          $a0, -0x10($s0)
    ctx->pc = 0x2861a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_2861a8:
    // 0x2861a8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2861a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2861ac:
    // 0x2861ac: 0x40f809  jalr        $v0
label_2861b0:
    if (ctx->pc == 0x2861B0u) {
        ctx->pc = 0x2861B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861ACu;
        // 0x2861b0: 0xae00fff4  sw          $zero, -0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2861B4u;
        goto label_2861b4;
    }
    ctx->pc = 0x2861ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2861B4u);
        ctx->pc = 0x2861B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861ACu;
        // 0x2861b0: 0xae00fff4  sw          $zero, -0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2861ACu, 0x2861B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2861B4u;
label_2861b4:
    // 0x2861b4: 0x8e04ffec  lw          $a0, -0x14($s0)
    ctx->pc = 0x2861b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967276)));
label_2861b8:
    // 0x2861b8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2861b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2861bc:
    // 0x2861bc: 0x40f809  jalr        $v0
label_2861c0:
    if (ctx->pc == 0x2861C0u) {
        ctx->pc = 0x2861C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861BCu;
        // 0x2861c0: 0xae00fff0  sw          $zero, -0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2861C4u;
        goto label_2861c4;
    }
    ctx->pc = 0x2861BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2861C4u);
        ctx->pc = 0x2861C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861BCu;
        // 0x2861c0: 0xae00fff0  sw          $zero, -0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2861BCu, 0x2861C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2861C4u;
label_2861c4:
    // 0x2861c4: 0xae00ffec  sw          $zero, -0x14($s0)
    ctx->pc = 0x2861c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 0));
label_2861c8:
    // 0x2861c8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2861c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2861cc:
    // 0x2861cc: 0x40f809  jalr        $v0
label_2861d0:
    if (ctx->pc == 0x2861D0u) {
        ctx->pc = 0x2861D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861CCu;
        // 0x2861d0: 0x8e04ffe8  lw          $a0, -0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2861D4u;
        goto label_2861d4;
    }
    ctx->pc = 0x2861CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2861D4u);
        ctx->pc = 0x2861D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861CCu;
        // 0x2861d0: 0x8e04ffe8  lw          $a0, -0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967272)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2861CCu, 0x2861D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2861D4u;
label_2861d4:
    // 0x2861d4: 0xae00ffe8  sw          $zero, -0x18($s0)
    ctx->pc = 0x2861d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967272), GPR_U32(ctx, 0));
label_2861d8:
    // 0x2861d8: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2861d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2861dc:
    // 0x2861dc: 0x40f809  jalr        $v0
label_2861e0:
    if (ctx->pc == 0x2861E0u) {
        ctx->pc = 0x2861E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861DCu;
        // 0x2861e0: 0x8f84885c  lw          $a0, -0x77A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936668)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2861E4u;
        goto label_2861e4;
    }
    ctx->pc = 0x2861DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2861E4u);
        ctx->pc = 0x2861E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861DCu;
        // 0x2861e0: 0x8f84885c  lw          $a0, -0x77A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936668)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2861DCu, 0x2861E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2861E4u;
label_2861e4:
    // 0x2861e4: 0xaf80885c  sw          $zero, -0x77A4($gp)
    ctx->pc = 0x2861e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936668), GPR_U32(ctx, 0));
label_2861e8:
    // 0x2861e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2861e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2861ec:
    // 0x2861ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2861ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2861f0:
    // 0x2861f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2861f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2861f4:
    // 0x2861f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2861f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2861f8:
    // 0x2861f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2861f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2861fc:
    // 0x2861fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2861fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286200:
    // 0x286200: 0x3e00008  jr          $ra
label_286204:
    if (ctx->pc == 0x286204u) {
        ctx->pc = 0x286204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286200u;
        // 0x286204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286208u;
        goto label_fallthrough_0x286200;
    }
    ctx->pc = 0x286200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286200u;
        // 0x286204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x286200:
    ctx->pc = 0x286208u;
}
