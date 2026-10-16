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

// Function: sub_00274118
// Address: 0x274118 - 0x2742f8
void sub_00274118_0x274118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274118_0x274118");
#endif

    switch (ctx->pc) {
        case 0x274118u: goto label_274118;
        case 0x27411cu: goto label_27411c;
        case 0x274120u: goto label_274120;
        case 0x274124u: goto label_274124;
        case 0x274128u: goto label_274128;
        case 0x27412cu: goto label_27412c;
        case 0x274130u: goto label_274130;
        case 0x274134u: goto label_274134;
        case 0x274138u: goto label_274138;
        case 0x27413cu: goto label_27413c;
        case 0x274140u: goto label_274140;
        case 0x274144u: goto label_274144;
        case 0x274148u: goto label_274148;
        case 0x27414cu: goto label_27414c;
        case 0x274150u: goto label_274150;
        case 0x274154u: goto label_274154;
        case 0x274158u: goto label_274158;
        case 0x27415cu: goto label_27415c;
        case 0x274160u: goto label_274160;
        case 0x274164u: goto label_274164;
        case 0x274168u: goto label_274168;
        case 0x27416cu: goto label_27416c;
        case 0x274170u: goto label_274170;
        case 0x274174u: goto label_274174;
        case 0x274178u: goto label_274178;
        case 0x27417cu: goto label_27417c;
        case 0x274180u: goto label_274180;
        case 0x274184u: goto label_274184;
        case 0x274188u: goto label_274188;
        case 0x27418cu: goto label_27418c;
        case 0x274190u: goto label_274190;
        case 0x274194u: goto label_274194;
        case 0x274198u: goto label_274198;
        case 0x27419cu: goto label_27419c;
        case 0x2741a0u: goto label_2741a0;
        case 0x2741a4u: goto label_2741a4;
        case 0x2741a8u: goto label_2741a8;
        case 0x2741acu: goto label_2741ac;
        case 0x2741b0u: goto label_2741b0;
        case 0x2741b4u: goto label_2741b4;
        case 0x2741b8u: goto label_2741b8;
        case 0x2741bcu: goto label_2741bc;
        case 0x2741c0u: goto label_2741c0;
        case 0x2741c4u: goto label_2741c4;
        case 0x2741c8u: goto label_2741c8;
        case 0x2741ccu: goto label_2741cc;
        case 0x2741d0u: goto label_2741d0;
        case 0x2741d4u: goto label_2741d4;
        case 0x2741d8u: goto label_2741d8;
        case 0x2741dcu: goto label_2741dc;
        case 0x2741e0u: goto label_2741e0;
        case 0x2741e4u: goto label_2741e4;
        case 0x2741e8u: goto label_2741e8;
        case 0x2741ecu: goto label_2741ec;
        case 0x2741f0u: goto label_2741f0;
        case 0x2741f4u: goto label_2741f4;
        case 0x2741f8u: goto label_2741f8;
        case 0x2741fcu: goto label_2741fc;
        case 0x274200u: goto label_274200;
        case 0x274204u: goto label_274204;
        case 0x274208u: goto label_274208;
        case 0x27420cu: goto label_27420c;
        case 0x274210u: goto label_274210;
        case 0x274214u: goto label_274214;
        case 0x274218u: goto label_274218;
        case 0x27421cu: goto label_27421c;
        case 0x274220u: goto label_274220;
        case 0x274224u: goto label_274224;
        case 0x274228u: goto label_274228;
        case 0x27422cu: goto label_27422c;
        case 0x274230u: goto label_274230;
        case 0x274234u: goto label_274234;
        case 0x274238u: goto label_274238;
        case 0x27423cu: goto label_27423c;
        case 0x274240u: goto label_274240;
        case 0x274244u: goto label_274244;
        case 0x274248u: goto label_274248;
        case 0x27424cu: goto label_27424c;
        case 0x274250u: goto label_274250;
        case 0x274254u: goto label_274254;
        case 0x274258u: goto label_274258;
        case 0x27425cu: goto label_27425c;
        case 0x274260u: goto label_274260;
        case 0x274264u: goto label_274264;
        case 0x274268u: goto label_274268;
        case 0x27426cu: goto label_27426c;
        case 0x274270u: goto label_274270;
        case 0x274274u: goto label_274274;
        case 0x274278u: goto label_274278;
        case 0x27427cu: goto label_27427c;
        case 0x274280u: goto label_274280;
        case 0x274284u: goto label_274284;
        case 0x274288u: goto label_274288;
        case 0x27428cu: goto label_27428c;
        case 0x274290u: goto label_274290;
        case 0x274294u: goto label_274294;
        case 0x274298u: goto label_274298;
        case 0x27429cu: goto label_27429c;
        case 0x2742a0u: goto label_2742a0;
        case 0x2742a4u: goto label_2742a4;
        case 0x2742a8u: goto label_2742a8;
        case 0x2742acu: goto label_2742ac;
        case 0x2742b0u: goto label_2742b0;
        case 0x2742b4u: goto label_2742b4;
        case 0x2742b8u: goto label_2742b8;
        case 0x2742bcu: goto label_2742bc;
        case 0x2742c0u: goto label_2742c0;
        case 0x2742c4u: goto label_2742c4;
        case 0x2742c8u: goto label_2742c8;
        case 0x2742ccu: goto label_2742cc;
        case 0x2742d0u: goto label_2742d0;
        case 0x2742d4u: goto label_2742d4;
        case 0x2742d8u: goto label_2742d8;
        case 0x2742dcu: goto label_2742dc;
        case 0x2742e0u: goto label_2742e0;
        case 0x2742e4u: goto label_2742e4;
        case 0x2742e8u: goto label_2742e8;
        case 0x2742ecu: goto label_2742ec;
        case 0x2742f0u: goto label_2742f0;
        case 0x2742f4u: goto label_2742f4;
        default: break;
    }

    ctx->pc = 0x274118u;

label_274118:
    // 0x274118: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x274118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_27411c:
    // 0x27411c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_274120:
    // 0x274120: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x274120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_274124:
    // 0x274124: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x274124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_274128:
    // 0x274128: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x274128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27412c:
    // 0x27412c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_274130:
    // 0x274130: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x274130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274134:
    // 0x274134: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x274134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_274138:
    // 0x274138: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x274138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_27413c:
    // 0x27413c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x27413cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_274140:
    // 0x274140: 0x10e2000f  beq         $a3, $v0, . + 4 + (0xF << 2)
label_274144:
    if (ctx->pc == 0x274144u) {
        ctx->pc = 0x274144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274140u;
        // 0x274144: 0x24730028  addiu       $s3, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274148u;
        goto label_274148;
    }
    ctx->pc = 0x274140u;
    {
        const bool branch_taken_0x274140 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x274144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274140u;
        // 0x274144: 0x24730028  addiu       $s3, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274140) {
            ctx->pc = 0x274180u;
            goto label_274180;
        }
    }
    ctx->pc = 0x274148u;
label_274148:
    // 0x274148: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x274148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_27414c:
    // 0x27414c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_274150:
    if (ctx->pc == 0x274150u) {
        ctx->pc = 0x274150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27414Cu;
        // 0x274150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274154u;
        goto label_274154;
    }
    ctx->pc = 0x27414Cu;
    {
        const bool branch_taken_0x27414c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27414Cu;
        // 0x274150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27414c) {
            ctx->pc = 0x274164u;
            goto label_274164;
        }
    }
    ctx->pc = 0x274154u;
label_274154:
    // 0x274154: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
label_274158:
    if (ctx->pc == 0x274158u) {
        ctx->pc = 0x274158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274154u;
        // 0x274158: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27415Cu;
        goto label_27415c;
    }
    ctx->pc = 0x274154u;
    {
        const bool branch_taken_0x274154 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x274158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274154u;
        // 0x274158: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274154) {
            ctx->pc = 0x274178u;
            goto label_274178;
        }
    }
    ctx->pc = 0x27415Cu;
label_27415c:
    // 0x27415c: 0x10000010  b           . + 4 + (0x10 << 2)
label_274160:
    if (ctx->pc == 0x274160u) {
        ctx->pc = 0x274160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27415Cu;
        // 0x274160: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274164u;
        goto label_274164;
    }
    ctx->pc = 0x27415Cu;
    {
        const bool branch_taken_0x27415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27415Cu;
        // 0x274160: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27415c) {
            ctx->pc = 0x2741A0u;
            goto label_2741a0;
        }
    }
    ctx->pc = 0x274164u;
label_274164:
    // 0x274164: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x274164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_274168:
    // 0x274168: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
label_27416c:
    if (ctx->pc == 0x27416Cu) {
        ctx->pc = 0x27416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274168u;
        // 0x27416c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274170u;
        goto label_274170;
    }
    ctx->pc = 0x274168u;
    {
        const bool branch_taken_0x274168 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x27416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274168u;
        // 0x27416c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274168) {
            ctx->pc = 0x274190u;
            goto label_274190;
        }
    }
    ctx->pc = 0x274170u;
label_274170:
    // 0x274170: 0x1000000b  b           . + 4 + (0xB << 2)
label_274174:
    if (ctx->pc == 0x274174u) {
        ctx->pc = 0x274174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274170u;
        // 0x274174: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274178u;
        goto label_274178;
    }
    ctx->pc = 0x274170u;
    {
        const bool branch_taken_0x274170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274170u;
        // 0x274174: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274170) {
            ctx->pc = 0x2741A0u;
            goto label_2741a0;
        }
    }
    ctx->pc = 0x274178u;
label_274178:
    // 0x274178: 0x1000000b  b           . + 4 + (0xB << 2)
label_27417c:
    if (ctx->pc == 0x27417Cu) {
        ctx->pc = 0x27417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274178u;
        // 0x27417c: 0xffa60010  sd          $a2, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274180u;
        goto label_274180;
    }
    ctx->pc = 0x274178u;
    {
        const bool branch_taken_0x274178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274178u;
        // 0x27417c: 0xffa60010  sd          $a2, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274178) {
            ctx->pc = 0x2741A8u;
            goto label_2741a8;
        }
    }
    ctx->pc = 0x274180u;
label_274180:
    // 0x274180: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x274180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_274184:
    // 0x274184: 0xc2102d  daddu       $v0, $a2, $v0
    ctx->pc = 0x274184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_274188:
    // 0x274188: 0x10000007  b           . + 4 + (0x7 << 2)
label_27418c:
    if (ctx->pc == 0x27418Cu) {
        ctx->pc = 0x27418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274188u;
        // 0x27418c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274190u;
        goto label_274190;
    }
    ctx->pc = 0x274188u;
    {
        const bool branch_taken_0x274188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274188u;
        // 0x27418c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274188) {
            ctx->pc = 0x2741A8u;
            goto label_2741a8;
        }
    }
    ctx->pc = 0x274190u;
label_274190:
    // 0x274190: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x274190u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_274194:
    // 0x274194: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x274194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
label_274198:
    // 0x274198: 0x10000003  b           . + 4 + (0x3 << 2)
label_27419c:
    if (ctx->pc == 0x27419Cu) {
        ctx->pc = 0x27419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274198u;
        // 0x27419c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2741A0u;
        goto label_2741a0;
    }
    ctx->pc = 0x274198u;
    {
        const bool branch_taken_0x274198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274198u;
        // 0x27419c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274198) {
            ctx->pc = 0x2741A8u;
            goto label_2741a8;
        }
    }
    ctx->pc = 0x2741A0u;
label_2741a0:
    // 0x2741a0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2741a4:
    if (ctx->pc == 0x2741A4u) {
        ctx->pc = 0x2741A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741A0u;
        // 0x2741a4: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2741A8u;
        goto label_2741a8;
    }
    ctx->pc = 0x2741A0u;
    {
        const bool branch_taken_0x2741a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741A0u;
        // 0x2741a4: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741a0) {
            ctx->pc = 0x2742D0u;
            goto label_2742d0;
        }
    }
    ctx->pc = 0x2741A8u;
label_2741a8:
    // 0x2741a8: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2741a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2741ac:
    // 0x2741ac: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x2741acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_2741b0:
    // 0x2741b0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2741b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2741b4:
    // 0x2741b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2741b8:
    if (ctx->pc == 0x2741B8u) {
        ctx->pc = 0x2741BCu;
        goto label_2741bc;
    }
    ctx->pc = 0x2741B4u;
    {
        const bool branch_taken_0x2741b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2741b4) {
            ctx->pc = 0x2741C4u;
            goto label_2741c4;
        }
    }
    ctx->pc = 0x2741BCu;
label_2741bc:
    // 0x2741bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2741c0:
    if (ctx->pc == 0x2741C0u) {
        ctx->pc = 0x2741C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741BCu;
        // 0x2741c0: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2741C4u;
        goto label_2741c4;
    }
    ctx->pc = 0x2741BCu;
    {
        const bool branch_taken_0x2741bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741BCu;
        // 0x2741c0: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741bc) {
            ctx->pc = 0x2741CCu;
            goto label_2741cc;
        }
    }
    ctx->pc = 0x2741C4u;
label_2741c4:
    // 0x2741c4: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_2741c8:
    if (ctx->pc == 0x2741C8u) {
        ctx->pc = 0x2741C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741C4u;
        // 0x2741c8: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2741CCu;
        goto label_2741cc;
    }
    ctx->pc = 0x2741C4u;
    {
        const bool branch_taken_0x2741c4 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x2741c4) {
            ctx->pc = 0x2741C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2741C4u;
            // 0x2741c8: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2741CCu;
            goto label_2741cc;
        }
    }
    ctx->pc = 0x2741CCu;
label_2741cc:
    // 0x2741cc: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2741ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2741d0:
    // 0x2741d0: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x2741d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_2741d4:
    // 0x2741d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2741d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2741d8:
    // 0x2741d8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2741d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2741dc:
    // 0x2741dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2741e0:
    if (ctx->pc == 0x2741E0u) {
        ctx->pc = 0x2741E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741DCu;
        // 0x2741e0: 0xe31023  subu        $v0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2741E4u;
        goto label_2741e4;
    }
    ctx->pc = 0x2741DCu;
    {
        const bool branch_taken_0x2741dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741DCu;
        // 0x2741e0: 0xe31023  subu        $v0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741dc) {
            ctx->pc = 0x274230u;
            goto label_274230;
        }
    }
    ctx->pc = 0x2741E4u;
label_2741e4:
    // 0x2741e4: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x2741e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_2741e8:
    // 0x2741e8: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x2741e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2741ec:
    // 0x2741ec: 0x82302d  daddu       $a2, $a0, $v0
    ctx->pc = 0x2741ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_2741f0:
    // 0x2741f0: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x2741f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
label_2741f4:
    // 0x2741f4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2741f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2741f8:
    // 0x2741f8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_2741fc:
    if (ctx->pc == 0x2741FCu) {
        ctx->pc = 0x2741FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741F8u;
        // 0x2741fc: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274200u;
        goto label_274200;
    }
    ctx->pc = 0x2741F8u;
    {
        const bool branch_taken_0x2741f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2741f8) {
            ctx->pc = 0x2741FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2741F8u;
            // 0x2741fc: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274234u;
            goto label_274234;
        }
    }
    ctx->pc = 0x274200u;
label_274200:
    // 0x274200: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x274200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_274204:
    // 0x274204: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_274208:
    if (ctx->pc == 0x274208u) {
        ctx->pc = 0x274208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274204u;
        // 0x274208: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27420Cu;
        goto label_27420c;
    }
    ctx->pc = 0x274204u;
    {
        const bool branch_taken_0x274204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274204) {
            ctx->pc = 0x274208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274204u;
            // 0x274208: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274234u;
            goto label_274234;
        }
    }
    ctx->pc = 0x27420Cu;
label_27420c:
    // 0x27420c: 0xa4102f  dsubu       $v0, $a1, $a0
    ctx->pc = 0x27420cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) - GPR_U64(ctx, 4));
label_274210:
    // 0x274210: 0xfe250010  sd          $a1, 0x10($s1)
    ctx->pc = 0x274210u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 5));
label_274214:
    // 0x274214: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x274214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_274218:
    // 0x274218: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x274218u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_27421c:
    // 0x27421c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_274220:
    // 0x274220: 0xc09d456  jal         func_275158
label_274224:
    if (ctx->pc == 0x274224u) {
        ctx->pc = 0x274224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274220u;
        // 0x274224: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274228u;
        goto label_274228;
    }
    ctx->pc = 0x274220u;
    SET_GPR_U32(ctx, 31, 0x274228u);
    ctx->pc = 0x274224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274220u;
    // 0x274224: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275158u, 0x274220u, 0x274228u)) {
        return;
    }
    ctx->pc = 0x274228u;
label_274228:
    // 0x274228: 0x10000029  b           . + 4 + (0x29 << 2)
label_27422c:
    if (ctx->pc == 0x27422Cu) {
        ctx->pc = 0x27422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274228u;
        // 0x27422c: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274230u;
        goto label_274230;
    }
    ctx->pc = 0x274228u;
    {
        const bool branch_taken_0x274228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274228u;
        // 0x27422c: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274228) {
            ctx->pc = 0x2742D0u;
            goto label_2742d0;
        }
    }
    ctx->pc = 0x274230u;
label_274230:
    // 0x274230: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x274230u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_274234:
    // 0x274234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x274234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_274238:
    // 0x274238: 0x8e260064  lw          $a2, 0x64($s1)
    ctx->pc = 0x274238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_27423c:
    // 0x27423c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x27423cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_274240:
    // 0x274240: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x274240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_274244:
    // 0x274244: 0x648307ff  daddiu      $v1, $a0, 0x7FF
    ctx->pc = 0x274244u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)2047);
label_274248:
    // 0x274248: 0xae27006c  sw          $a3, 0x6C($s1)
    ctx->pc = 0x274248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 7));
label_27424c:
    // 0x27424c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x27424cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
label_274250:
    // 0x274250: 0xfe240010  sd          $a0, 0x10($s1)
    ctx->pc = 0x274250u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 4));
label_274254:
    // 0x274254: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x274254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
label_274258:
    // 0x274258: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x274258u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_27425c:
    // 0x27425c: 0x24b05480  addiu       $s0, $a1, 0x5480
    ctx->pc = 0x27425cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 21632));
label_274260:
    // 0x274260: 0x8f848f8c  lw          $a0, -0x7074($gp)
    ctx->pc = 0x274260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
label_274264:
    // 0x274264: 0xaca65480  sw          $a2, 0x5480($a1)
    ctx->pc = 0x274264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 21632), GPR_U32(ctx, 6));
label_274268:
    // 0x274268: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x274268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27426c:
    // 0x27426c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x27426cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_274270:
    // 0x274270: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x274270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_274274:
    // 0x274274: 0xc0c84d8  jal         func_321360
label_274278:
    if (ctx->pc == 0x274278u) {
        ctx->pc = 0x274278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274274u;
        // 0x274278: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27427Cu;
        goto label_27427c;
    }
    ctx->pc = 0x274274u;
    SET_GPR_U32(ctx, 31, 0x27427Cu);
    ctx->pc = 0x274278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274274u;
    // 0x274278: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x274274u, 0x27427Cu)) {
        return;
    }
    ctx->pc = 0x27427Cu;
label_27427c:
    // 0x27427c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x27427cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_274280:
    // 0x274280: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x274280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274284:
    // 0x274284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274288:
    // 0x274288: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x274288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_27428c:
    // 0x27428c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27428cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274290:
    // 0x274290: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x274290u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274294:
    // 0x274294: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x274294u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274298:
    // 0x274298: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x274298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_27429c:
    // 0x27429c: 0x24845448  addiu       $a0, $a0, 0x5448
    ctx->pc = 0x27429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21576));
label_2742a0:
    // 0x2742a0: 0xc0c92ee  jal         func_324BB8
label_2742a4:
    if (ctx->pc == 0x2742A4u) {
        ctx->pc = 0x2742A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742A0u;
        // 0x2742a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2742A8u;
        goto label_2742a8;
    }
    ctx->pc = 0x2742A0u;
    SET_GPR_U32(ctx, 31, 0x2742A8u);
    ctx->pc = 0x2742A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2742A0u;
    // 0x2742a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x2742A0u, 0x2742A8u)) {
        return;
    }
    ctx->pc = 0x2742A8u;
label_2742a8:
    // 0x2742a8: 0xc0c84d0  jal         func_321340
label_2742ac:
    if (ctx->pc == 0x2742ACu) {
        ctx->pc = 0x2742ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742A8u;
        // 0x2742ac: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2742B0u;
        goto label_2742b0;
    }
    ctx->pc = 0x2742A8u;
    SET_GPR_U32(ctx, 31, 0x2742B0u);
    ctx->pc = 0x2742ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2742A8u;
    // 0x2742ac: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2742A8u, 0x2742B0u)) {
        return;
    }
    ctx->pc = 0x2742B0u;
label_2742b0:
    // 0x2742b0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2742b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2742b4:
    // 0x2742b4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_2742b8:
    if (ctx->pc == 0x2742B8u) {
        ctx->pc = 0x2742B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742B4u;
        // 0x2742b8: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2742BCu;
        goto label_2742bc;
    }
    ctx->pc = 0x2742B4u;
    {
        const bool branch_taken_0x2742b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2742b4) {
            ctx->pc = 0x2742B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2742B4u;
            // 0x2742b8: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2742D0u;
            goto label_2742d0;
        }
    }
    ctx->pc = 0x2742BCu;
label_2742bc:
    // 0x2742bc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2742bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2742c0:
    // 0x2742c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2742c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2742c4:
    // 0x2742c4: 0x40f809  jalr        $v0
label_2742c8:
    if (ctx->pc == 0x2742C8u) {
        ctx->pc = 0x2742C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742C4u;
        // 0x2742c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2742CCu;
        goto label_2742cc;
    }
    ctx->pc = 0x2742C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2742CCu);
        ctx->pc = 0x2742C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742C4u;
        // 0x2742c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2742C4u, 0x2742CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2742CCu;
label_2742cc:
    // 0x2742cc: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x2742ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2742d0:
    // 0x2742d0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x2742d0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_2742d4:
    // 0x2742d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2742d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2742d8:
    // 0x2742d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2742d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2742dc:
    // 0x2742dc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2742dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2742e0:
    // 0x2742e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2742e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2742e4:
    // 0x2742e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2742e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2742e8:
    // 0x2742e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2742e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2742ec:
    // 0x2742ec: 0x3e00008  jr          $ra
label_2742f0:
    if (ctx->pc == 0x2742F0u) {
        ctx->pc = 0x2742F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742ECu;
        // 0x2742f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2742F4u;
        goto label_2742f4;
    }
    ctx->pc = 0x2742ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2742F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2742ECu;
        // 0x2742f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2742ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2742F4u;
label_2742f4:
    // 0x2742f4: 0x0  nop
    ctx->pc = 0x2742f4u;
    // NOP
    ctx->pc = 0x2742f8u;
}
