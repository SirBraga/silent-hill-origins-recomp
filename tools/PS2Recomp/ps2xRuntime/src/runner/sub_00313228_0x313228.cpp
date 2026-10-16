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

// Function: sub_00313228
// Address: 0x313228 - 0x313338
void sub_00313228_0x313228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313228_0x313228");
#endif

    switch (ctx->pc) {
        case 0x313228u: goto label_313228;
        case 0x31322cu: goto label_31322c;
        case 0x313230u: goto label_313230;
        case 0x313234u: goto label_313234;
        case 0x313238u: goto label_313238;
        case 0x31323cu: goto label_31323c;
        case 0x313240u: goto label_313240;
        case 0x313244u: goto label_313244;
        case 0x313248u: goto label_313248;
        case 0x31324cu: goto label_31324c;
        case 0x313250u: goto label_313250;
        case 0x313254u: goto label_313254;
        case 0x313258u: goto label_313258;
        case 0x31325cu: goto label_31325c;
        case 0x313260u: goto label_313260;
        case 0x313264u: goto label_313264;
        case 0x313268u: goto label_313268;
        case 0x31326cu: goto label_31326c;
        case 0x313270u: goto label_313270;
        case 0x313274u: goto label_313274;
        case 0x313278u: goto label_313278;
        case 0x31327cu: goto label_31327c;
        case 0x313280u: goto label_313280;
        case 0x313284u: goto label_313284;
        case 0x313288u: goto label_313288;
        case 0x31328cu: goto label_31328c;
        case 0x313290u: goto label_313290;
        case 0x313294u: goto label_313294;
        case 0x313298u: goto label_313298;
        case 0x31329cu: goto label_31329c;
        case 0x3132a0u: goto label_3132a0;
        case 0x3132a4u: goto label_3132a4;
        case 0x3132a8u: goto label_3132a8;
        case 0x3132acu: goto label_3132ac;
        case 0x3132b0u: goto label_3132b0;
        case 0x3132b4u: goto label_3132b4;
        case 0x3132b8u: goto label_3132b8;
        case 0x3132bcu: goto label_3132bc;
        case 0x3132c0u: goto label_3132c0;
        case 0x3132c4u: goto label_3132c4;
        case 0x3132c8u: goto label_3132c8;
        case 0x3132ccu: goto label_3132cc;
        case 0x3132d0u: goto label_3132d0;
        case 0x3132d4u: goto label_3132d4;
        case 0x3132d8u: goto label_3132d8;
        case 0x3132dcu: goto label_3132dc;
        case 0x3132e0u: goto label_3132e0;
        case 0x3132e4u: goto label_3132e4;
        case 0x3132e8u: goto label_3132e8;
        case 0x3132ecu: goto label_3132ec;
        case 0x3132f0u: goto label_3132f0;
        case 0x3132f4u: goto label_3132f4;
        case 0x3132f8u: goto label_3132f8;
        case 0x3132fcu: goto label_3132fc;
        case 0x313300u: goto label_313300;
        case 0x313304u: goto label_313304;
        case 0x313308u: goto label_313308;
        case 0x31330cu: goto label_31330c;
        case 0x313310u: goto label_313310;
        case 0x313314u: goto label_313314;
        case 0x313318u: goto label_313318;
        case 0x31331cu: goto label_31331c;
        case 0x313320u: goto label_313320;
        case 0x313324u: goto label_313324;
        case 0x313328u: goto label_313328;
        case 0x31332cu: goto label_31332c;
        case 0x313330u: goto label_313330;
        case 0x313334u: goto label_313334;
        default: break;
    }

    ctx->pc = 0x313228u;

label_313228:
    // 0x313228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x313228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_31322c:
    // 0x31322c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31322cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_313230:
    // 0x313230: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x313230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_313234:
    // 0x313234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x313234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313238:
    // 0x313238: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x313238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_31323c:
    // 0x31323c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_313240:
    if (ctx->pc == 0x313240u) {
        ctx->pc = 0x313240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31323Cu;
        // 0x313240: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313244u;
        goto label_313244;
    }
    ctx->pc = 0x31323Cu;
    {
        const bool branch_taken_0x31323c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x313240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31323Cu;
        // 0x313240: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31323c) {
            ctx->pc = 0x313260u;
            goto label_313260;
        }
    }
    ctx->pc = 0x313244u;
label_313244:
    // 0x313244: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x313244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_313248:
    // 0x313248: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x313248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
label_31324c:
    // 0x31324c: 0x8c446ccc  lw          $a0, 0x6CCC($v0)
    ctx->pc = 0x31324cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27852)));
label_313250:
    // 0x313250: 0xc0c4e8e  jal         func_313A38
label_313254:
    if (ctx->pc == 0x313254u) {
        ctx->pc = 0x313254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313250u;
        // 0x313254: 0x24a53228  addiu       $a1, $a1, 0x3228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313258u;
        goto label_313258;
    }
    ctx->pc = 0x313250u;
    SET_GPR_U32(ctx, 31, 0x313258u);
    ctx->pc = 0x313254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313250u;
    // 0x313254: 0x24a53228  addiu       $a1, $a1, 0x3228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313A38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313A38u, 0x313250u, 0x313258u)) {
        return;
    }
    ctx->pc = 0x313258u;
label_313258:
    // 0x313258: 0x10000031  b           . + 4 + (0x31 << 2)
label_31325c:
    if (ctx->pc == 0x31325Cu) {
        ctx->pc = 0x31325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313258u;
        // 0x31325c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313260u;
        goto label_313260;
    }
    ctx->pc = 0x313258u;
    {
        const bool branch_taken_0x313258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313258u;
        // 0x31325c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313258) {
            ctx->pc = 0x313320u;
            goto label_313320;
        }
    }
    ctx->pc = 0x313260u;
label_313260:
    // 0x313260: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x313260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_313264:
    // 0x313264: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_313268:
    if (ctx->pc == 0x313268u) {
        ctx->pc = 0x313268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313264u;
        // 0x313268: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31326Cu;
        goto label_31326c;
    }
    ctx->pc = 0x313264u;
    {
        const bool branch_taken_0x313264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313264) {
            ctx->pc = 0x313268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313264u;
            // 0x313268: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313280u;
            goto label_313280;
        }
    }
    ctx->pc = 0x31326Cu;
label_31326c:
    // 0x31326c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_313270:
    // 0x313270: 0x8c436ccc  lw          $v1, 0x6CCC($v0)
    ctx->pc = 0x313270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27852)));
label_313274:
    // 0x313274: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x313274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_313278:
    // 0x313278: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x313278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_31327c:
    // 0x31327c: 0x0  nop
    ctx->pc = 0x31327cu;
    // NOP
label_313280:
    // 0x313280: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x313280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_313284:
    // 0x313284: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_313288:
    if (ctx->pc == 0x313288u) {
        ctx->pc = 0x313288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313284u;
        // 0x313288: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31328Cu;
        goto label_31328c;
    }
    ctx->pc = 0x313284u;
    {
        const bool branch_taken_0x313284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313284) {
            ctx->pc = 0x313288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313284u;
            // 0x313288: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313298u;
            goto label_313298;
        }
    }
    ctx->pc = 0x31328Cu;
label_31328c:
    // 0x31328c: 0xc0c4cfe  jal         func_3133F8
label_313290:
    if (ctx->pc == 0x313290u) {
        ctx->pc = 0x313294u;
        goto label_313294;
    }
    ctx->pc = 0x31328Cu;
    SET_GPR_U32(ctx, 31, 0x313294u);
    ctx->pc = 0x3133F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3133F8u, 0x31328Cu, 0x313294u)) {
        return;
    }
    ctx->pc = 0x313294u;
label_313294:
    // 0x313294: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x313294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_313298:
    // 0x313298: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x313298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_31329c:
    // 0x31329c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3132a0:
    if (ctx->pc == 0x3132A0u) {
        ctx->pc = 0x3132A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31329Cu;
        // 0x3132a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3132A4u;
        goto label_3132a4;
    }
    ctx->pc = 0x31329Cu;
    {
        const bool branch_taken_0x31329c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31329Cu;
        // 0x3132a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31329c) {
            ctx->pc = 0x31331Cu;
            goto label_31331c;
        }
    }
    ctx->pc = 0x3132A4u;
label_3132a4:
    // 0x3132a4: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x3132a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3132a8:
    // 0x3132a8: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
label_3132ac:
    if (ctx->pc == 0x3132ACu) {
        ctx->pc = 0x3132ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132A8u;
        // 0x3132ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3132B0u;
        goto label_3132b0;
    }
    ctx->pc = 0x3132A8u;
    {
        const bool branch_taken_0x3132a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3132a8) {
            ctx->pc = 0x3132ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3132A8u;
            // 0x3132ac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3132CCu;
            goto label_3132cc;
        }
    }
    ctx->pc = 0x3132B0u;
label_3132b0:
    // 0x3132b0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3132b4:
    if (ctx->pc == 0x3132B4u) {
        ctx->pc = 0x3132B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132B0u;
        // 0x3132b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3132B8u;
        goto label_3132b8;
    }
    ctx->pc = 0x3132B0u;
    {
        const bool branch_taken_0x3132b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132B0u;
        // 0x3132b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132b0) {
            ctx->pc = 0x313320u;
            goto label_313320;
        }
    }
    ctx->pc = 0x3132B8u;
label_3132b8:
    // 0x3132b8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3132b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3132bc:
    // 0x3132bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3132bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3132c0:
    // 0x3132c0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3132c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3132c4:
    // 0x3132c4: 0x10000015  b           . + 4 + (0x15 << 2)
label_3132c8:
    if (ctx->pc == 0x3132C8u) {
        ctx->pc = 0x3132C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132C4u;
        // 0x3132c8: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3132CCu;
        goto label_3132cc;
    }
    ctx->pc = 0x3132C4u;
    {
        const bool branch_taken_0x3132c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132C4u;
        // 0x3132c8: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132c4) {
            ctx->pc = 0x31331Cu;
            goto label_31331c;
        }
    }
    ctx->pc = 0x3132CCu;
label_3132cc:
    // 0x3132cc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3132ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_3132d0:
    // 0x3132d0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x3132d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_3132d4:
    // 0x3132d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3132d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3132d8:
    // 0x3132d8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_3132dc:
    if (ctx->pc == 0x3132DCu) {
        ctx->pc = 0x3132DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132D8u;
        // 0x3132dc: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3132E0u;
        goto label_3132e0;
    }
    ctx->pc = 0x3132D8u;
    {
        const bool branch_taken_0x3132d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3132DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132D8u;
        // 0x3132dc: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132d8) {
            ctx->pc = 0x3132E4u;
            goto label_3132e4;
        }
    }
    ctx->pc = 0x3132E0u;
label_3132e0:
    // 0x3132e0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3132e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3132e4:
    // 0x3132e4: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
label_3132e8:
    if (ctx->pc == 0x3132E8u) {
        ctx->pc = 0x3132E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132E4u;
        // 0x3132e8: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3132ECu;
        goto label_3132ec;
    }
    ctx->pc = 0x3132E4u;
    {
        const bool branch_taken_0x3132e4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3132E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132E4u;
        // 0x3132e8: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132e4) {
            ctx->pc = 0x313318u;
            goto label_313318;
        }
    }
    ctx->pc = 0x3132ECu;
label_3132ec:
    // 0x3132ec: 0x0  nop
    ctx->pc = 0x3132ecu;
    // NOP
label_3132f0:
    // 0x3132f0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3132f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3132f4:
    // 0x3132f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3132f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3132f8:
    // 0x3132f8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3132f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3132fc:
    // 0x3132fc: 0x40f809  jalr        $v0
label_313300:
    if (ctx->pc == 0x313300u) {
        ctx->pc = 0x313300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132FCu;
        // 0x313300: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313304u;
        goto label_313304;
    }
    ctx->pc = 0x3132FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x313304u);
        ctx->pc = 0x313300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132FCu;
        // 0x313300: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3132FCu, 0x313304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x313304u;
label_313304:
    // 0x313304: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x313304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313308:
    // 0x313308: 0x1860ffeb  blez        $v1, . + 4 + (-0x15 << 2)
label_31330c:
    if (ctx->pc == 0x31330Cu) {
        ctx->pc = 0x31330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313308u;
        // 0x31330c: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313310u;
        goto label_313310;
    }
    ctx->pc = 0x313308u;
    {
        const bool branch_taken_0x313308 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x31330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313308u;
        // 0x31330c: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313308) {
            ctx->pc = 0x3132B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3132b8;
        }
    }
    ctx->pc = 0x313310u;
label_313310:
    // 0x313310: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_313314:
    if (ctx->pc == 0x313314u) {
        ctx->pc = 0x313314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313310u;
        // 0x313314: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313318u;
        goto label_313318;
    }
    ctx->pc = 0x313310u;
    {
        const bool branch_taken_0x313310 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x313314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313310u;
        // 0x313314: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313310) {
            ctx->pc = 0x3132F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3132f0;
        }
    }
    ctx->pc = 0x313318u;
label_313318:
    // 0x313318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31331c:
    // 0x31331c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31331cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_313320:
    // 0x313320: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x313320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_313324:
    // 0x313324: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x313324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313328:
    // 0x313328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31332c:
    // 0x31332c: 0x3e00008  jr          $ra
label_313330:
    if (ctx->pc == 0x313330u) {
        ctx->pc = 0x313330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31332Cu;
        // 0x313330: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313334u;
        goto label_313334;
    }
    ctx->pc = 0x31332Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31332Cu;
        // 0x313330: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31332Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313334u;
label_313334:
    // 0x313334: 0x0  nop
    ctx->pc = 0x313334u;
    // NOP
    ctx->pc = 0x313338u;
}
