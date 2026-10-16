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

// Function: sub_00165188
// Address: 0x165188 - 0x165290
void sub_00165188_0x165188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165188_0x165188");
#endif

    switch (ctx->pc) {
        case 0x165188u: goto label_165188;
        case 0x16518cu: goto label_16518c;
        case 0x165190u: goto label_165190;
        case 0x165194u: goto label_165194;
        case 0x165198u: goto label_165198;
        case 0x16519cu: goto label_16519c;
        case 0x1651a0u: goto label_1651a0;
        case 0x1651a4u: goto label_1651a4;
        case 0x1651a8u: goto label_1651a8;
        case 0x1651acu: goto label_1651ac;
        case 0x1651b0u: goto label_1651b0;
        case 0x1651b4u: goto label_1651b4;
        case 0x1651b8u: goto label_1651b8;
        case 0x1651bcu: goto label_1651bc;
        case 0x1651c0u: goto label_1651c0;
        case 0x1651c4u: goto label_1651c4;
        case 0x1651c8u: goto label_1651c8;
        case 0x1651ccu: goto label_1651cc;
        case 0x1651d0u: goto label_1651d0;
        case 0x1651d4u: goto label_1651d4;
        case 0x1651d8u: goto label_1651d8;
        case 0x1651dcu: goto label_1651dc;
        case 0x1651e0u: goto label_1651e0;
        case 0x1651e4u: goto label_1651e4;
        case 0x1651e8u: goto label_1651e8;
        case 0x1651ecu: goto label_1651ec;
        case 0x1651f0u: goto label_1651f0;
        case 0x1651f4u: goto label_1651f4;
        case 0x1651f8u: goto label_1651f8;
        case 0x1651fcu: goto label_1651fc;
        case 0x165200u: goto label_165200;
        case 0x165204u: goto label_165204;
        case 0x165208u: goto label_165208;
        case 0x16520cu: goto label_16520c;
        case 0x165210u: goto label_165210;
        case 0x165214u: goto label_165214;
        case 0x165218u: goto label_165218;
        case 0x16521cu: goto label_16521c;
        case 0x165220u: goto label_165220;
        case 0x165224u: goto label_165224;
        case 0x165228u: goto label_165228;
        case 0x16522cu: goto label_16522c;
        case 0x165230u: goto label_165230;
        case 0x165234u: goto label_165234;
        case 0x165238u: goto label_165238;
        case 0x16523cu: goto label_16523c;
        case 0x165240u: goto label_165240;
        case 0x165244u: goto label_165244;
        case 0x165248u: goto label_165248;
        case 0x16524cu: goto label_16524c;
        case 0x165250u: goto label_165250;
        case 0x165254u: goto label_165254;
        case 0x165258u: goto label_165258;
        case 0x16525cu: goto label_16525c;
        case 0x165260u: goto label_165260;
        case 0x165264u: goto label_165264;
        case 0x165268u: goto label_165268;
        case 0x16526cu: goto label_16526c;
        case 0x165270u: goto label_165270;
        case 0x165274u: goto label_165274;
        case 0x165278u: goto label_165278;
        case 0x16527cu: goto label_16527c;
        case 0x165280u: goto label_165280;
        case 0x165284u: goto label_165284;
        case 0x165288u: goto label_165288;
        case 0x16528cu: goto label_16528c;
        default: break;
    }

    ctx->pc = 0x165188u;

label_165188:
    // 0x165188: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x165188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_16518c:
    // 0x16518c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16518cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_165190:
    // 0x165190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x165190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_165194:
    // 0x165194: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x165194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_165198:
    // 0x165198: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x165198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16519c:
    // 0x16519c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16519cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1651a0:
    // 0x1651a0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1651a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1651a4:
    // 0x1651a4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1651a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1651a8:
    // 0x1651a8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1651a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1651ac:
    // 0x1651ac: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1651acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1651b0:
    // 0x1651b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1651b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1651b4:
    // 0x1651b4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1651b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1651b8:
    // 0x1651b8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1651b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1651bc:
    // 0x1651bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1651bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1651c0:
    // 0x1651c0: 0xac438664  sw          $v1, -0x799C($v0)
    ctx->pc = 0x1651c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936164), GPR_U32(ctx, 3));
label_1651c4:
    // 0x1651c4: 0x8e426490  lw          $v0, 0x6490($s2)
    ctx->pc = 0x1651c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25744)));
label_1651c8:
    // 0x1651c8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1651cc:
    if (ctx->pc == 0x1651CCu) {
        ctx->pc = 0x1651CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651C8u;
        // 0x1651cc: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1651D0u;
        goto label_1651d0;
    }
    ctx->pc = 0x1651C8u;
    {
        const bool branch_taken_0x1651c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651C8u;
        // 0x1651cc: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651c8) {
            ctx->pc = 0x165258u;
            goto label_165258;
        }
    }
    ctx->pc = 0x1651D0u;
label_1651d0:
    // 0x1651d0: 0x26533c0c  addiu       $s3, $s2, 0x3C0C
    ctx->pc = 0x1651d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 15372));
label_1651d4:
    // 0x1651d4: 0x26503c68  addiu       $s0, $s2, 0x3C68
    ctx->pc = 0x1651d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 15464));
label_1651d8:
    // 0x1651d8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1651d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1651dc:
    // 0x1651dc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1651dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1651e0:
    // 0x1651e0: 0x2656648c  addiu       $s6, $s2, 0x648C
    ctx->pc = 0x1651e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 25740));
label_1651e4:
    // 0x1651e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1651e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1651e8:
    // 0x1651e8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_1651ec:
    if (ctx->pc == 0x1651ECu) {
        ctx->pc = 0x1651ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651E8u;
        // 0x1651ec: 0x2631006c  addiu       $s1, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1651F0u;
        goto label_1651f0;
    }
    ctx->pc = 0x1651E8u;
    {
        const bool branch_taken_0x1651e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651e8) {
            ctx->pc = 0x1651ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1651E8u;
            // 0x1651ec: 0x2631006c  addiu       $s1, $s1, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165238u;
            goto label_165238;
        }
    }
    ctx->pc = 0x1651F0u;
label_1651f0:
    // 0x1651f0: 0x52800007  beql        $s4, $zero, . + 4 + (0x7 << 2)
label_1651f4:
    if (ctx->pc == 0x1651F4u) {
        ctx->pc = 0x1651F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651F0u;
        // 0x1651f4: 0x8e02fff0  lw          $v0, -0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1651F8u;
        goto label_1651f8;
    }
    ctx->pc = 0x1651F0u;
    {
        const bool branch_taken_0x1651f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651f0) {
            ctx->pc = 0x1651F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1651F0u;
            // 0x1651f4: 0x8e02fff0  lw          $v0, -0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165210u;
            goto label_165210;
        }
    }
    ctx->pc = 0x1651F8u;
label_1651f8:
    // 0x1651f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1651f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1651fc:
    // 0x1651fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_165200:
    if (ctx->pc == 0x165200u) {
        ctx->pc = 0x165200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651FCu;
        // 0x165200: 0x8e02fff0  lw          $v0, -0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165204u;
        goto label_165204;
    }
    ctx->pc = 0x1651FCu;
    {
        const bool branch_taken_0x1651fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651fc) {
            ctx->pc = 0x165200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1651FCu;
            // 0x165200: 0x8e02fff0  lw          $v0, -0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165210u;
            goto label_165210;
        }
    }
    ctx->pc = 0x165204u;
label_165204:
    // 0x165204: 0x5454000c  bnel        $v0, $s4, . + 4 + (0xC << 2)
label_165208:
    if (ctx->pc == 0x165208u) {
        ctx->pc = 0x165208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165204u;
        // 0x165208: 0x2631006c  addiu       $s1, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16520Cu;
        goto label_16520c;
    }
    ctx->pc = 0x165204u;
    {
        const bool branch_taken_0x165204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x165204) {
            ctx->pc = 0x165208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165204u;
            // 0x165208: 0x2631006c  addiu       $s1, $s1, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165238u;
            goto label_165238;
        }
    }
    ctx->pc = 0x16520Cu;
label_16520c:
    // 0x16520c: 0x8e02fff0  lw          $v0, -0x10($s0)
    ctx->pc = 0x16520cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_165210:
    // 0x165210: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_165214:
    if (ctx->pc == 0x165214u) {
        ctx->pc = 0x165214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165210u;
        // 0x165214: 0x26a53c0c  addiu       $a1, $s5, 0x3C0C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 15372));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165218u;
        goto label_165218;
    }
    ctx->pc = 0x165210u;
    {
        const bool branch_taken_0x165210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165210) {
            ctx->pc = 0x165214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165210u;
            // 0x165214: 0x26a53c0c  addiu       $a1, $s5, 0x3C0C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 15372));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165228u;
            goto label_165228;
        }
    }
    ctx->pc = 0x165218u;
label_165218:
    // 0x165218: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x165218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16521c:
    // 0x16521c: 0x40f809  jalr        $v0
label_165220:
    if (ctx->pc == 0x165220u) {
        ctx->pc = 0x165220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16521Cu;
        // 0x165220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165224u;
        goto label_165224;
    }
    ctx->pc = 0x16521Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x165224u);
        ctx->pc = 0x165220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16521Cu;
        // 0x165220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16521Cu, 0x165224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x165224u;
label_165224:
    // 0x165224: 0x26a53c0c  addiu       $a1, $s5, 0x3C0C
    ctx->pc = 0x165224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 15372));
label_165228:
    // 0x165228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16522c:
    // 0x16522c: 0xc059092  jal         func_164248
label_165230:
    if (ctx->pc == 0x165230u) {
        ctx->pc = 0x165230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16522Cu;
        // 0x165230: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165234u;
        goto label_165234;
    }
    ctx->pc = 0x16522Cu;
    SET_GPR_U32(ctx, 31, 0x165234u);
    ctx->pc = 0x165230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16522Cu;
    // 0x165230: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x16522Cu, 0x165234u)) {
        return;
    }
    ctx->pc = 0x165234u;
label_165234:
    // 0x165234: 0x2631006c  addiu       $s1, $s1, 0x6C
    ctx->pc = 0x165234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_165238:
    // 0x165238: 0x2610006c  addiu       $s0, $s0, 0x6C
    ctx->pc = 0x165238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_16523c:
    // 0x16523c: 0x2673006c  addiu       $s3, $s3, 0x6C
    ctx->pc = 0x16523cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_165240:
    // 0x165240: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x165240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_165244:
    // 0x165244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_165248:
    if (ctx->pc == 0x165248u) {
        ctx->pc = 0x165248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165244u;
        // 0x165248: 0x26b5006c  addiu       $s5, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16524Cu;
        goto label_16524c;
    }
    ctx->pc = 0x165244u;
    {
        const bool branch_taken_0x165244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165244u;
        // 0x165248: 0x26b5006c  addiu       $s5, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165244) {
            ctx->pc = 0x165258u;
            goto label_165258;
        }
    }
    ctx->pc = 0x16524Cu;
label_16524c:
    // 0x16524c: 0x8e426490  lw          $v0, 0x6490($s2)
    ctx->pc = 0x16524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25744)));
label_165250:
    // 0x165250: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
label_165254:
    if (ctx->pc == 0x165254u) {
        ctx->pc = 0x165254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165250u;
        // 0x165254: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165258u;
        goto label_165258;
    }
    ctx->pc = 0x165250u;
    {
        const bool branch_taken_0x165250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165250) {
            ctx->pc = 0x165254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165250u;
            // 0x165254: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1651E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1651e8;
        }
    }
    ctx->pc = 0x165258u;
label_165258:
    // 0x165258: 0xaee08664  sw          $zero, -0x799C($s7)
    ctx->pc = 0x165258u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294936164), GPR_U32(ctx, 0));
label_16525c:
    // 0x16525c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x16525cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_165260:
    // 0x165260: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x165260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_165264:
    // 0x165264: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x165264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_165268:
    // 0x165268: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x165268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16526c:
    // 0x16526c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16526cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_165270:
    // 0x165270: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x165270u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_165274:
    // 0x165274: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x165274u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_165278:
    // 0x165278: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x165278u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16527c:
    // 0x16527c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165280:
    // 0x165280: 0x3e00008  jr          $ra
label_165284:
    if (ctx->pc == 0x165284u) {
        ctx->pc = 0x165284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165280u;
        // 0x165284: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165288u;
        goto label_165288;
    }
    ctx->pc = 0x165280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165280u;
        // 0x165284: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165288u;
label_165288:
    // 0x165288: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x165288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_16528c:
    // 0x16528c: 0x0  nop
    ctx->pc = 0x16528cu;
    // NOP
    ctx->pc = 0x165290u;
}
