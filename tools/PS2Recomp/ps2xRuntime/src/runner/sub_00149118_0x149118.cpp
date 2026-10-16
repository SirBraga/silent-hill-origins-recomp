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

// Function: sub_00149118
// Address: 0x149118 - 0x1491e0
void sub_00149118_0x149118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149118_0x149118");
#endif

    switch (ctx->pc) {
        case 0x149118u: goto label_149118;
        case 0x14911cu: goto label_14911c;
        case 0x149120u: goto label_149120;
        case 0x149124u: goto label_149124;
        case 0x149128u: goto label_149128;
        case 0x14912cu: goto label_14912c;
        case 0x149130u: goto label_149130;
        case 0x149134u: goto label_149134;
        case 0x149138u: goto label_149138;
        case 0x14913cu: goto label_14913c;
        case 0x149140u: goto label_149140;
        case 0x149144u: goto label_149144;
        case 0x149148u: goto label_149148;
        case 0x14914cu: goto label_14914c;
        case 0x149150u: goto label_149150;
        case 0x149154u: goto label_149154;
        case 0x149158u: goto label_149158;
        case 0x14915cu: goto label_14915c;
        case 0x149160u: goto label_149160;
        case 0x149164u: goto label_149164;
        case 0x149168u: goto label_149168;
        case 0x14916cu: goto label_14916c;
        case 0x149170u: goto label_149170;
        case 0x149174u: goto label_149174;
        case 0x149178u: goto label_149178;
        case 0x14917cu: goto label_14917c;
        case 0x149180u: goto label_149180;
        case 0x149184u: goto label_149184;
        case 0x149188u: goto label_149188;
        case 0x14918cu: goto label_14918c;
        case 0x149190u: goto label_149190;
        case 0x149194u: goto label_149194;
        case 0x149198u: goto label_149198;
        case 0x14919cu: goto label_14919c;
        case 0x1491a0u: goto label_1491a0;
        case 0x1491a4u: goto label_1491a4;
        case 0x1491a8u: goto label_1491a8;
        case 0x1491acu: goto label_1491ac;
        case 0x1491b0u: goto label_1491b0;
        case 0x1491b4u: goto label_1491b4;
        case 0x1491b8u: goto label_1491b8;
        case 0x1491bcu: goto label_1491bc;
        case 0x1491c0u: goto label_1491c0;
        case 0x1491c4u: goto label_1491c4;
        case 0x1491c8u: goto label_1491c8;
        case 0x1491ccu: goto label_1491cc;
        case 0x1491d0u: goto label_1491d0;
        case 0x1491d4u: goto label_1491d4;
        case 0x1491d8u: goto label_1491d8;
        case 0x1491dcu: goto label_1491dc;
        default: break;
    }

    ctx->pc = 0x149118u;

label_149118:
    // 0x149118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14911c:
    // 0x14911c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_149120:
    // 0x149120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_149124:
    // 0x149124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_149128:
    // 0x149128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14912c:
    // 0x14912c: 0xc051e84  jal         func_147A10
label_149130:
    if (ctx->pc == 0x149130u) {
        ctx->pc = 0x149130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14912Cu;
        // 0x149130: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149134u;
        goto label_149134;
    }
    ctx->pc = 0x14912Cu;
    SET_GPR_U32(ctx, 31, 0x149134u);
    ctx->pc = 0x149130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14912Cu;
    // 0x149130: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x147A10u, 0x14912Cu, 0x149134u)) {
        return;
    }
    ctx->pc = 0x149134u;
label_149134:
    // 0x149134: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x149134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_149138:
    // 0x149138: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x149138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_14913c:
    // 0x14913c: 0x5482000e  bnel        $a0, $v0, . + 4 + (0xE << 2)
label_149140:
    if (ctx->pc == 0x149140u) {
        ctx->pc = 0x149140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14913Cu;
        // 0x149140: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149144u;
        goto label_149144;
    }
    ctx->pc = 0x14913Cu;
    {
        const bool branch_taken_0x14913c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14913c) {
            ctx->pc = 0x149140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14913Cu;
            // 0x149140: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x149144u;
label_149144:
    // 0x149144: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x149144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_149148:
    // 0x149148: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_14914c:
    if (ctx->pc == 0x14914Cu) {
        ctx->pc = 0x14914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149148u;
        // 0x14914c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149150u;
        goto label_149150;
    }
    ctx->pc = 0x149148u;
    {
        const bool branch_taken_0x149148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149148u;
        // 0x14914c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149148) {
            ctx->pc = 0x149160u;
            goto label_149160;
        }
    }
    ctx->pc = 0x149150u;
label_149150:
    // 0x149150: 0xc052478  jal         func_1491E0
label_149154:
    if (ctx->pc == 0x149154u) {
        ctx->pc = 0x149154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149150u;
        // 0x149154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149158u;
        goto label_149158;
    }
    ctx->pc = 0x149150u;
    SET_GPR_U32(ctx, 31, 0x149158u);
    ctx->pc = 0x149154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149150u;
    // 0x149154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1491E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1491E0u, 0x149150u, 0x149158u)) {
        return;
    }
    ctx->pc = 0x149158u;
label_149158:
    // 0x149158: 0x1000001d  b           . + 4 + (0x1D << 2)
label_14915c:
    if (ctx->pc == 0x14915Cu) {
        ctx->pc = 0x14915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149158u;
        // 0x14915c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149160u;
        goto label_149160;
    }
    ctx->pc = 0x149158u;
    {
        const bool branch_taken_0x149158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149158u;
        // 0x14915c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149158) {
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x149160u;
label_149160:
    // 0x149160: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
label_149164:
    if (ctx->pc == 0x149164u) {
        ctx->pc = 0x149164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149160u;
        // 0x149164: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149168u;
        goto label_149168;
    }
    ctx->pc = 0x149160u;
    {
        const bool branch_taken_0x149160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x149160) {
            ctx->pc = 0x149164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149160u;
            // 0x149164: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x149168u;
label_149168:
    // 0x149168: 0xc0524da  jal         func_149368
label_14916c:
    if (ctx->pc == 0x14916Cu) {
        ctx->pc = 0x14916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149168u;
        // 0x14916c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149170u;
        goto label_149170;
    }
    ctx->pc = 0x149168u;
    SET_GPR_U32(ctx, 31, 0x149170u);
    ctx->pc = 0x14916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149168u;
    // 0x14916c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149368u, 0x149168u, 0x149170u)) {
        return;
    }
    ctx->pc = 0x149170u;
label_149170:
    // 0x149170: 0x10000017  b           . + 4 + (0x17 << 2)
label_149174:
    if (ctx->pc == 0x149174u) {
        ctx->pc = 0x149174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149170u;
        // 0x149174: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149178u;
        goto label_149178;
    }
    ctx->pc = 0x149170u;
    {
        const bool branch_taken_0x149170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149170u;
        // 0x149174: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149170) {
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x149178u;
label_149178:
    // 0x149178: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x149178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_14917c:
    // 0x14917c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x14917cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_149180:
    // 0x149180: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_149184:
    if (ctx->pc == 0x149184u) {
        ctx->pc = 0x149184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149180u;
        // 0x149184: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149188u;
        goto label_149188;
    }
    ctx->pc = 0x149180u;
    {
        const bool branch_taken_0x149180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149180) {
            ctx->pc = 0x149184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149180u;
            // 0x149184: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x149188u;
label_149188:
    // 0x149188: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x149188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_14918c:
    // 0x14918c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_149190:
    if (ctx->pc == 0x149190u) {
        ctx->pc = 0x149190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14918Cu;
        // 0x149190: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149194u;
        goto label_149194;
    }
    ctx->pc = 0x14918Cu;
    {
        const bool branch_taken_0x14918c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x149190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14918Cu;
        // 0x149190: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14918c) {
            ctx->pc = 0x1491A4u;
            goto label_1491a4;
        }
    }
    ctx->pc = 0x149194u;
label_149194:
    // 0x149194: 0xc0524cc  jal         func_149330
label_149198:
    if (ctx->pc == 0x149198u) {
        ctx->pc = 0x149198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149194u;
        // 0x149198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14919Cu;
        goto label_14919c;
    }
    ctx->pc = 0x149194u;
    SET_GPR_U32(ctx, 31, 0x14919Cu);
    ctx->pc = 0x149198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149194u;
    // 0x149198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x149330u, 0x149194u, 0x14919Cu)) {
        return;
    }
    ctx->pc = 0x14919Cu;
label_14919c:
    // 0x14919c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1491a0:
    if (ctx->pc == 0x1491A0u) {
        ctx->pc = 0x1491A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14919Cu;
        // 0x1491a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1491A4u;
        goto label_1491a4;
    }
    ctx->pc = 0x14919Cu;
    {
        const bool branch_taken_0x14919c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1491A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14919Cu;
        // 0x1491a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14919c) {
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x1491A4u;
label_1491a4:
    // 0x1491a4: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x1491a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
label_1491a8:
    // 0x1491a8: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
label_1491ac:
    if (ctx->pc == 0x1491ACu) {
        ctx->pc = 0x1491ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491A8u;
        // 0x1491ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1491B0u;
        goto label_1491b0;
    }
    ctx->pc = 0x1491A8u;
    {
        const bool branch_taken_0x1491a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1491a8) {
            ctx->pc = 0x1491ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1491A8u;
            // 0x1491ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x1491B0u;
label_1491b0:
    // 0x1491b0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1491b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1491b4:
    // 0x1491b4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1491b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1491b8:
    // 0x1491b8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1491b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_1491bc:
    // 0x1491bc: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x1491bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_1491c0:
    // 0x1491c0: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x1491c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1491c4:
    // 0x1491c4: 0xa0f809  jalr        $a1
label_1491c8:
    if (ctx->pc == 0x1491C8u) {
        ctx->pc = 0x1491C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491C4u;
        // 0x1491c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1491CCu;
        goto label_1491cc;
    }
    ctx->pc = 0x1491C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1491CCu);
        ctx->pc = 0x1491C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491C4u;
        // 0x1491c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1491C4u, 0x1491CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1491CCu;
label_1491cc:
    // 0x1491cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1491ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1491d0:
    // 0x1491d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1491d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1491d4:
    // 0x1491d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1491d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1491d8:
    // 0x1491d8: 0x3e00008  jr          $ra
label_1491dc:
    if (ctx->pc == 0x1491DCu) {
        ctx->pc = 0x1491DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491D8u;
        // 0x1491dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1491E0u;
        goto label_fallthrough_0x1491d8;
    }
    ctx->pc = 0x1491D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1491DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491D8u;
        // 0x1491dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1491D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1491d8:
    ctx->pc = 0x1491E0u;
}
