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

// Function: sub_0028E5B0
// Address: 0x28e5b0 - 0x28e858
void sub_0028E5B0_0x28e5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E5B0_0x28e5b0");
#endif

    switch (ctx->pc) {
        case 0x28e5b0u: goto label_28e5b0;
        case 0x28e5b4u: goto label_28e5b4;
        case 0x28e5b8u: goto label_28e5b8;
        case 0x28e5bcu: goto label_28e5bc;
        case 0x28e5c0u: goto label_28e5c0;
        case 0x28e5c4u: goto label_28e5c4;
        case 0x28e5c8u: goto label_28e5c8;
        case 0x28e5ccu: goto label_28e5cc;
        case 0x28e5d0u: goto label_28e5d0;
        case 0x28e5d4u: goto label_28e5d4;
        case 0x28e5d8u: goto label_28e5d8;
        case 0x28e5dcu: goto label_28e5dc;
        case 0x28e5e0u: goto label_28e5e0;
        case 0x28e5e4u: goto label_28e5e4;
        case 0x28e5e8u: goto label_28e5e8;
        case 0x28e5ecu: goto label_28e5ec;
        case 0x28e5f0u: goto label_28e5f0;
        case 0x28e5f4u: goto label_28e5f4;
        case 0x28e5f8u: goto label_28e5f8;
        case 0x28e5fcu: goto label_28e5fc;
        case 0x28e600u: goto label_28e600;
        case 0x28e604u: goto label_28e604;
        case 0x28e608u: goto label_28e608;
        case 0x28e60cu: goto label_28e60c;
        case 0x28e610u: goto label_28e610;
        case 0x28e614u: goto label_28e614;
        case 0x28e618u: goto label_28e618;
        case 0x28e61cu: goto label_28e61c;
        case 0x28e620u: goto label_28e620;
        case 0x28e624u: goto label_28e624;
        case 0x28e628u: goto label_28e628;
        case 0x28e62cu: goto label_28e62c;
        case 0x28e630u: goto label_28e630;
        case 0x28e634u: goto label_28e634;
        case 0x28e638u: goto label_28e638;
        case 0x28e63cu: goto label_28e63c;
        case 0x28e640u: goto label_28e640;
        case 0x28e644u: goto label_28e644;
        case 0x28e648u: goto label_28e648;
        case 0x28e64cu: goto label_28e64c;
        case 0x28e650u: goto label_28e650;
        case 0x28e654u: goto label_28e654;
        case 0x28e658u: goto label_28e658;
        case 0x28e65cu: goto label_28e65c;
        case 0x28e660u: goto label_28e660;
        case 0x28e664u: goto label_28e664;
        case 0x28e668u: goto label_28e668;
        case 0x28e66cu: goto label_28e66c;
        case 0x28e670u: goto label_28e670;
        case 0x28e674u: goto label_28e674;
        case 0x28e678u: goto label_28e678;
        case 0x28e67cu: goto label_28e67c;
        case 0x28e680u: goto label_28e680;
        case 0x28e684u: goto label_28e684;
        case 0x28e688u: goto label_28e688;
        case 0x28e68cu: goto label_28e68c;
        case 0x28e690u: goto label_28e690;
        case 0x28e694u: goto label_28e694;
        case 0x28e698u: goto label_28e698;
        case 0x28e69cu: goto label_28e69c;
        case 0x28e6a0u: goto label_28e6a0;
        case 0x28e6a4u: goto label_28e6a4;
        case 0x28e6a8u: goto label_28e6a8;
        case 0x28e6acu: goto label_28e6ac;
        case 0x28e6b0u: goto label_28e6b0;
        case 0x28e6b4u: goto label_28e6b4;
        case 0x28e6b8u: goto label_28e6b8;
        case 0x28e6bcu: goto label_28e6bc;
        case 0x28e6c0u: goto label_28e6c0;
        case 0x28e6c4u: goto label_28e6c4;
        case 0x28e6c8u: goto label_28e6c8;
        case 0x28e6ccu: goto label_28e6cc;
        case 0x28e6d0u: goto label_28e6d0;
        case 0x28e6d4u: goto label_28e6d4;
        case 0x28e6d8u: goto label_28e6d8;
        case 0x28e6dcu: goto label_28e6dc;
        case 0x28e6e0u: goto label_28e6e0;
        case 0x28e6e4u: goto label_28e6e4;
        case 0x28e6e8u: goto label_28e6e8;
        case 0x28e6ecu: goto label_28e6ec;
        case 0x28e6f0u: goto label_28e6f0;
        case 0x28e6f4u: goto label_28e6f4;
        case 0x28e6f8u: goto label_28e6f8;
        case 0x28e6fcu: goto label_28e6fc;
        case 0x28e700u: goto label_28e700;
        case 0x28e704u: goto label_28e704;
        case 0x28e708u: goto label_28e708;
        case 0x28e70cu: goto label_28e70c;
        case 0x28e710u: goto label_28e710;
        case 0x28e714u: goto label_28e714;
        case 0x28e718u: goto label_28e718;
        case 0x28e71cu: goto label_28e71c;
        case 0x28e720u: goto label_28e720;
        case 0x28e724u: goto label_28e724;
        case 0x28e728u: goto label_28e728;
        case 0x28e72cu: goto label_28e72c;
        case 0x28e730u: goto label_28e730;
        case 0x28e734u: goto label_28e734;
        case 0x28e738u: goto label_28e738;
        case 0x28e73cu: goto label_28e73c;
        case 0x28e740u: goto label_28e740;
        case 0x28e744u: goto label_28e744;
        case 0x28e748u: goto label_28e748;
        case 0x28e74cu: goto label_28e74c;
        case 0x28e750u: goto label_28e750;
        case 0x28e754u: goto label_28e754;
        case 0x28e758u: goto label_28e758;
        case 0x28e75cu: goto label_28e75c;
        case 0x28e760u: goto label_28e760;
        case 0x28e764u: goto label_28e764;
        case 0x28e768u: goto label_28e768;
        case 0x28e76cu: goto label_28e76c;
        case 0x28e770u: goto label_28e770;
        case 0x28e774u: goto label_28e774;
        case 0x28e778u: goto label_28e778;
        case 0x28e77cu: goto label_28e77c;
        case 0x28e780u: goto label_28e780;
        case 0x28e784u: goto label_28e784;
        case 0x28e788u: goto label_28e788;
        case 0x28e78cu: goto label_28e78c;
        case 0x28e790u: goto label_28e790;
        case 0x28e794u: goto label_28e794;
        case 0x28e798u: goto label_28e798;
        case 0x28e79cu: goto label_28e79c;
        case 0x28e7a0u: goto label_28e7a0;
        case 0x28e7a4u: goto label_28e7a4;
        case 0x28e7a8u: goto label_28e7a8;
        case 0x28e7acu: goto label_28e7ac;
        case 0x28e7b0u: goto label_28e7b0;
        case 0x28e7b4u: goto label_28e7b4;
        case 0x28e7b8u: goto label_28e7b8;
        case 0x28e7bcu: goto label_28e7bc;
        case 0x28e7c0u: goto label_28e7c0;
        case 0x28e7c4u: goto label_28e7c4;
        case 0x28e7c8u: goto label_28e7c8;
        case 0x28e7ccu: goto label_28e7cc;
        case 0x28e7d0u: goto label_28e7d0;
        case 0x28e7d4u: goto label_28e7d4;
        case 0x28e7d8u: goto label_28e7d8;
        case 0x28e7dcu: goto label_28e7dc;
        case 0x28e7e0u: goto label_28e7e0;
        case 0x28e7e4u: goto label_28e7e4;
        case 0x28e7e8u: goto label_28e7e8;
        case 0x28e7ecu: goto label_28e7ec;
        case 0x28e7f0u: goto label_28e7f0;
        case 0x28e7f4u: goto label_28e7f4;
        case 0x28e7f8u: goto label_28e7f8;
        case 0x28e7fcu: goto label_28e7fc;
        case 0x28e800u: goto label_28e800;
        case 0x28e804u: goto label_28e804;
        case 0x28e808u: goto label_28e808;
        case 0x28e80cu: goto label_28e80c;
        case 0x28e810u: goto label_28e810;
        case 0x28e814u: goto label_28e814;
        case 0x28e818u: goto label_28e818;
        case 0x28e81cu: goto label_28e81c;
        case 0x28e820u: goto label_28e820;
        case 0x28e824u: goto label_28e824;
        case 0x28e828u: goto label_28e828;
        case 0x28e82cu: goto label_28e82c;
        case 0x28e830u: goto label_28e830;
        case 0x28e834u: goto label_28e834;
        case 0x28e838u: goto label_28e838;
        case 0x28e83cu: goto label_28e83c;
        case 0x28e840u: goto label_28e840;
        case 0x28e844u: goto label_28e844;
        case 0x28e848u: goto label_28e848;
        case 0x28e84cu: goto label_28e84c;
        case 0x28e850u: goto label_28e850;
        case 0x28e854u: goto label_28e854;
        default: break;
    }

    ctx->pc = 0x28e5b0u;

label_28e5b0:
    // 0x28e5b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28e5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_28e5b4:
    // 0x28e5b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28e5b8:
    // 0x28e5b8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_28e5bc:
    // 0x28e5bc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28e5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_28e5c0:
    // 0x28e5c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28e5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28e5c4:
    // 0x28e5c4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28e5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_28e5c8:
    // 0x28e5c8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x28e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_28e5cc:
    // 0x28e5cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28e5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28e5d0:
    // 0x28e5d0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x28e5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_28e5d4:
    // 0x28e5d4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x28e5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_28e5d8:
    // 0x28e5d8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x28e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_28e5dc:
    // 0x28e5dc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x28e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_28e5e0:
    // 0x28e5e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28e5e4:
    // 0x28e5e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28e5e8:
    // 0x28e5e8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_28e5ec:
    if (ctx->pc == 0x28E5ECu) {
        ctx->pc = 0x28E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5E8u;
        // 0x28e5ec: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E5F0u;
        goto label_28e5f0;
    }
    ctx->pc = 0x28E5E8u;
    {
        const bool branch_taken_0x28e5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28e5e8) {
            ctx->pc = 0x28E5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E5E8u;
            // 0x28e5ec: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E5FCu;
            goto label_28e5fc;
        }
    }
    ctx->pc = 0x28E5F0u;
label_28e5f0:
    // 0x28e5f0: 0xc09292a  jal         func_24A4A8
label_28e5f4:
    if (ctx->pc == 0x28E5F4u) {
        ctx->pc = 0x28E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5F0u;
        // 0x28e5f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E5F8u;
        goto label_28e5f8;
    }
    ctx->pc = 0x28E5F0u;
    SET_GPR_U32(ctx, 31, 0x28E5F8u);
    ctx->pc = 0x28E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E5F0u;
    // 0x28e5f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28E5F0u, 0x28E5F8u)) {
        return;
    }
    ctx->pc = 0x28E5F8u;
label_28e5f8:
    // 0x28e5f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28e5f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e5fc:
    // 0x28e5fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x28e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28e600:
    // 0x28e600: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28e600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28e604:
    // 0x28e604: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_28e608:
    if (ctx->pc == 0x28E608u) {
        ctx->pc = 0x28E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E604u;
        // 0x28e608: 0x2495ffff  addiu       $s5, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E60Cu;
        goto label_28e60c;
    }
    ctx->pc = 0x28E604u;
    {
        const bool branch_taken_0x28e604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E604u;
        // 0x28e608: 0x2495ffff  addiu       $s5, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e604) {
            ctx->pc = 0x28E618u;
            goto label_28e618;
        }
    }
    ctx->pc = 0x28E60Cu;
label_28e60c:
    // 0x28e60c: 0xc09294c  jal         func_24A530
label_28e610:
    if (ctx->pc == 0x28E610u) {
        ctx->pc = 0x28E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E60Cu;
        // 0x28e610: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E614u;
        goto label_28e614;
    }
    ctx->pc = 0x28E60Cu;
    SET_GPR_U32(ctx, 31, 0x28E614u);
    ctx->pc = 0x28E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E60Cu;
    // 0x28e610: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28E60Cu, 0x28E614u)) {
        return;
    }
    ctx->pc = 0x28E614u;
label_28e614:
    // 0x28e614: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x28e614u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28e618:
    // 0x28e618: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28e618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_28e61c:
    // 0x28e61c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x28e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_28e620:
    // 0x28e620: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x28e620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_28e624:
    // 0x28e624: 0x247463b0  addiu       $s4, $v1, 0x63B0
    ctx->pc = 0x28e624u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 25520));
label_28e628:
    // 0x28e628: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x28e628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_28e62c:
    // 0x28e62c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28e62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28e630:
    // 0x28e630: 0x8e840538  lw          $a0, 0x538($s4)
    ctx->pc = 0x28e630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1336)));
label_28e634:
    // 0x28e634: 0x40f809  jalr        $v0
label_28e638:
    if (ctx->pc == 0x28E638u) {
        ctx->pc = 0x28E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E634u;
        // 0x28e638: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E63Cu;
        goto label_28e63c;
    }
    ctx->pc = 0x28E634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E63Cu);
        ctx->pc = 0x28E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E634u;
        // 0x28e638: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E634u, 0x28E63Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E63Cu;
label_28e63c:
    // 0x28e63c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28e63cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e640:
    // 0x28e640: 0x12600073  beqz        $s3, . + 4 + (0x73 << 2)
label_28e644:
    if (ctx->pc == 0x28E644u) {
        ctx->pc = 0x28E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E640u;
        // 0x28e644: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E648u;
        goto label_28e648;
    }
    ctx->pc = 0x28E640u;
    {
        const bool branch_taken_0x28e640 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E640u;
        // 0x28e644: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e640) {
            ctx->pc = 0x28E810u;
            goto label_28e810;
        }
    }
    ctx->pc = 0x28E648u;
label_28e648:
    // 0x28e648: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x28e648u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_28e64c:
    // 0x28e64c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x28e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_28e650:
    // 0x28e650: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x28e650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_28e654:
    // 0x28e654: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x28e654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_28e658:
    // 0x28e658: 0x1260006d  beqz        $s3, . + 4 + (0x6D << 2)
label_28e65c:
    if (ctx->pc == 0x28E65Cu) {
        ctx->pc = 0x28E660u;
        goto label_28e660;
    }
    ctx->pc = 0x28E658u;
    {
        const bool branch_taken_0x28e658 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e658) {
            ctx->pc = 0x28E810u;
            goto label_28e810;
        }
    }
    ctx->pc = 0x28E660u;
label_28e660:
    // 0x28e660: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x28e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_28e664:
    // 0x28e664: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x28e664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_28e668:
    // 0x28e668: 0x40f809  jalr        $v0
label_28e66c:
    if (ctx->pc == 0x28E66Cu) {
        ctx->pc = 0x28E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E668u;
        // 0x28e66c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E670u;
        goto label_28e670;
    }
    ctx->pc = 0x28E668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E670u);
        ctx->pc = 0x28E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E668u;
        // 0x28e66c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E668u, 0x28E670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E670u;
label_28e670:
    // 0x28e670: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_28e674:
    if (ctx->pc == 0x28E674u) {
        ctx->pc = 0x28E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E670u;
        // 0x28e674: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E678u;
        goto label_28e678;
    }
    ctx->pc = 0x28E670u;
    {
        const bool branch_taken_0x28e670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E670u;
        // 0x28e674: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e670) {
            ctx->pc = 0x28E810u;
            goto label_28e810;
        }
    }
    ctx->pc = 0x28E678u;
label_28e678:
    // 0x28e678: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28e678u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e67c:
    // 0x28e67c: 0x1aa00062  blez        $s5, . + 4 + (0x62 << 2)
label_28e680:
    if (ctx->pc == 0x28E680u) {
        ctx->pc = 0x28E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E67Cu;
        // 0x28e680: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E684u;
        goto label_28e684;
    }
    ctx->pc = 0x28E67Cu;
    {
        const bool branch_taken_0x28e67c = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x28E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E67Cu;
        // 0x28e680: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e67c) {
            ctx->pc = 0x28E808u;
            goto label_28e808;
        }
    }
    ctx->pc = 0x28E684u;
label_28e684:
    // 0x28e684: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x28e684u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28e688:
    // 0x28e688: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28e688u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e68c:
    // 0x28e68c: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x28e68cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_28e690:
    // 0x28e690: 0x1aa00003  blez        $s5, . + 4 + (0x3 << 2)
label_28e694:
    if (ctx->pc == 0x28E694u) {
        ctx->pc = 0x28E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E690u;
        // 0x28e694: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E698u;
        goto label_28e698;
    }
    ctx->pc = 0x28E690u;
    {
        const bool branch_taken_0x28e690 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x28E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E690u;
        // 0x28e694: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e690) {
            ctx->pc = 0x28E6A0u;
            goto label_28e6a0;
        }
    }
    ctx->pc = 0x28E698u;
label_28e698:
    // 0x28e698: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_28e69c:
    if (ctx->pc == 0x28E69Cu) {
        ctx->pc = 0x28E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E698u;
        // 0x28e69c: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6A0u;
        goto label_28e6a0;
    }
    ctx->pc = 0x28E698u;
    {
        const bool branch_taken_0x28e698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E698u;
        // 0x28e69c: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e698) {
            ctx->pc = 0x28E710u;
            goto label_28e710;
        }
    }
    ctx->pc = 0x28E6A0u;
label_28e6a0:
    // 0x28e6a0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_28e6a4:
    // 0x28e6a4: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x28e6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_28e6a8:
    // 0x28e6a8: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x28e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_28e6ac:
    // 0x28e6ac: 0x24c663b0  addiu       $a2, $a2, 0x63B0
    ctx->pc = 0x28e6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25520));
label_28e6b0:
    // 0x28e6b0: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x28e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_28e6b4:
    // 0x28e6b4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28e6b8:
    // 0x28e6b8: 0x8cc40534  lw          $a0, 0x534($a2)
    ctx->pc = 0x28e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1332)));
label_28e6bc:
    // 0x28e6bc: 0x40f809  jalr        $v0
label_28e6c0:
    if (ctx->pc == 0x28E6C0u) {
        ctx->pc = 0x28E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6BCu;
        // 0x28e6c0: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6C4u;
        goto label_28e6c4;
    }
    ctx->pc = 0x28E6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E6C4u);
        ctx->pc = 0x28E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6BCu;
        // 0x28e6c0: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E6BCu, 0x28E6C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E6C4u;
label_28e6c4:
    // 0x28e6c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28e6c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e6c8:
    // 0x28e6c8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_28e6cc:
    if (ctx->pc == 0x28E6CCu) {
        ctx->pc = 0x28E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6C8u;
        // 0x28e6cc: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E6D0u;
        goto label_28e6d0;
    }
    ctx->pc = 0x28E6C8u;
    {
        const bool branch_taken_0x28e6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e6c8) {
            ctx->pc = 0x28E6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E6C8u;
            // 0x28e6cc: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E6DCu;
            goto label_28e6dc;
        }
    }
    ctx->pc = 0x28E6D0u;
label_28e6d0:
    // 0x28e6d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28e6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_28e6d4:
    // 0x28e6d4: 0xac7e0004  sw          $fp, 0x4($v1)
    ctx->pc = 0x28e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 30));
label_28e6d8:
    // 0x28e6d8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x28e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_28e6dc:
    // 0x28e6dc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28e6dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_28e6e0:
    // 0x28e6e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x28e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_28e6e4:
    // 0x28e6e4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x28e6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28e6e8:
    // 0x28e6e8: 0x6a47000b  ldl         $a3, 0xB($s2)
    ctx->pc = 0x28e6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_28e6ec:
    // 0x28e6ec: 0x6e470004  ldr         $a3, 0x4($s2)
    ctx->pc = 0x28e6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_28e6f0:
    // 0x28e6f0: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x28e6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28e6f4:
    // 0x28e6f4: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x28e6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28e6f8:
    // 0x28e6f8: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x28e6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_28e6fc:
    // 0x28e6fc: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x28e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
label_28e700:
    // 0x28e700: 0x2d5102a  slt         $v0, $s6, $s5
    ctx->pc = 0x28e700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_28e704:
    // 0x28e704: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_28e708:
    if (ctx->pc == 0x28E708u) {
        ctx->pc = 0x28E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E704u;
        // 0x28e708: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E70Cu;
        goto label_28e70c;
    }
    ctx->pc = 0x28E704u;
    {
        const bool branch_taken_0x28e704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E704u;
        // 0x28e708: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e704) {
            ctx->pc = 0x28E808u;
            goto label_28e808;
        }
    }
    ctx->pc = 0x28E70Cu;
label_28e70c:
    // 0x28e70c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x28e70cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e710:
    // 0x28e710: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x28e710u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
label_28e714:
    // 0x28e714: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x28e714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_28e718:
    // 0x28e718: 0x246363b0  addiu       $v1, $v1, 0x63B0
    ctx->pc = 0x28e718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25520));
label_28e71c:
    // 0x28e71c: 0x24e70fc8  addiu       $a3, $a3, 0xFC8
    ctx->pc = 0x28e71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4040));
label_28e720:
    // 0x28e720: 0x8c640534  lw          $a0, 0x534($v1)
    ctx->pc = 0x28e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1332)));
label_28e724:
    // 0x28e724: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28e724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28e728:
    // 0x28e728: 0x8ce20118  lw          $v0, 0x118($a3)
    ctx->pc = 0x28e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 280)));
label_28e72c:
    // 0x28e72c: 0x40f809  jalr        $v0
label_28e730:
    if (ctx->pc == 0x28E730u) {
        ctx->pc = 0x28E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E72Cu;
        // 0x28e730: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E734u;
        goto label_28e734;
    }
    ctx->pc = 0x28E72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E734u);
        ctx->pc = 0x28E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E72Cu;
        // 0x28e730: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E72Cu, 0x28E734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E734u;
label_28e734:
    // 0x28e734: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28e734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e738:
    // 0x28e738: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_28e73c:
    if (ctx->pc == 0x28E73Cu) {
        ctx->pc = 0x28E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E738u;
        // 0x28e73c: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E740u;
        goto label_28e740;
    }
    ctx->pc = 0x28E738u;
    {
        const bool branch_taken_0x28e738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e738) {
            ctx->pc = 0x28E73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E738u;
            // 0x28e73c: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E74Cu;
            goto label_28e74c;
        }
    }
    ctx->pc = 0x28E740u;
label_28e740:
    // 0x28e740: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28e740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_28e744:
    // 0x28e744: 0xac7e0004  sw          $fp, 0x4($v1)
    ctx->pc = 0x28e744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 30));
label_28e748:
    // 0x28e748: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x28e748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_28e74c:
    // 0x28e74c: 0xac760004  sw          $s6, 0x4($v1)
    ctx->pc = 0x28e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 22));
label_28e750:
    // 0x28e750: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x28e750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_28e754:
    // 0x28e754: 0x6a840007  ldl         $a0, 0x7($s4)
    ctx->pc = 0x28e754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_28e758:
    // 0x28e758: 0x6e840000  ldr         $a0, 0x0($s4)
    ctx->pc = 0x28e758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_28e75c:
    // 0x28e75c: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x28e75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28e760:
    // 0x28e760: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_28e764:
    if (ctx->pc == 0x28E764u) {
        ctx->pc = 0x28E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E760u;
        // 0x28e764: 0xb4440000  sdr         $a0, 0x0($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E768u;
        goto label_28e768;
    }
    ctx->pc = 0x28E760u;
    {
        const bool branch_taken_0x28e760 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E760u;
        // 0x28e764: 0xb4440000  sdr         $a0, 0x0($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e760) {
            ctx->pc = 0x28E770u;
            goto label_28e770;
        }
    }
    ctx->pc = 0x28E768u;
label_28e768:
    // 0x28e768: 0x10000004  b           . + 4 + (0x4 << 2)
label_28e76c:
    if (ctx->pc == 0x28E76Cu) {
        ctx->pc = 0x28E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E768u;
        // 0x28e76c: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E770u;
        goto label_28e770;
    }
    ctx->pc = 0x28E768u;
    {
        const bool branch_taken_0x28e768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E768u;
        // 0x28e76c: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e768) {
            ctx->pc = 0x28E77Cu;
            goto label_28e77c;
        }
    }
    ctx->pc = 0x28E770u;
label_28e770:
    // 0x28e770: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28e774:
    // 0x28e774: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28e774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_28e778:
    // 0x28e778: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28e778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_28e77c:
    // 0x28e77c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x28e77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_28e780:
    // 0x28e780: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x28e780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
label_28e784:
    // 0x28e784: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x28e784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_28e788:
    // 0x28e788: 0x24c663b0  addiu       $a2, $a2, 0x63B0
    ctx->pc = 0x28e788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25520));
label_28e78c:
    // 0x28e78c: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x28e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_28e790:
    // 0x28e790: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28e790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28e794:
    // 0x28e794: 0x8cc40534  lw          $a0, 0x534($a2)
    ctx->pc = 0x28e794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1332)));
label_28e798:
    // 0x28e798: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x28e798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28e79c:
    // 0x28e79c: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x28e79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
label_28e7a0:
    // 0x28e7a0: 0x40f809  jalr        $v0
label_28e7a4:
    if (ctx->pc == 0x28E7A4u) {
        ctx->pc = 0x28E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7A0u;
        // 0x28e7a4: 0x26f20008  addiu       $s2, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E7A8u;
        goto label_28e7a8;
    }
    ctx->pc = 0x28E7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E7A8u);
        ctx->pc = 0x28E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7A0u;
        // 0x28e7a4: 0x26f20008  addiu       $s2, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E7A0u, 0x28E7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E7A8u;
label_28e7a8:
    // 0x28e7a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28e7a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e7ac:
    // 0x28e7ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_28e7b0:
    if (ctx->pc == 0x28E7B0u) {
        ctx->pc = 0x28E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7ACu;
        // 0x28e7b0: 0x26d10001  addiu       $s1, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E7B4u;
        goto label_28e7b4;
    }
    ctx->pc = 0x28E7ACu;
    {
        const bool branch_taken_0x28e7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7ACu;
        // 0x28e7b0: 0x26d10001  addiu       $s1, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7ac) {
            ctx->pc = 0x28E7BCu;
            goto label_28e7bc;
        }
    }
    ctx->pc = 0x28E7B4u;
label_28e7b4:
    // 0x28e7b4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_28e7b8:
    // 0x28e7b8: 0xac7e0004  sw          $fp, 0x4($v1)
    ctx->pc = 0x28e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 30));
label_28e7bc:
    // 0x28e7bc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x28e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_28e7c0:
    // 0x28e7c0: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x28e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
label_28e7c4:
    // 0x28e7c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x28e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_28e7c8:
    // 0x28e7c8: 0x6a87001f  ldl         $a3, 0x1F($s4)
    ctx->pc = 0x28e7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_28e7cc:
    // 0x28e7cc: 0x6e870018  ldr         $a3, 0x18($s4)
    ctx->pc = 0x28e7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_28e7d0:
    // 0x28e7d0: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x28e7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28e7d4:
    // 0x28e7d4: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x28e7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28e7d8:
    // 0x28e7d8: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_28e7dc:
    if (ctx->pc == 0x28E7DCu) {
        ctx->pc = 0x28E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7D8u;
        // 0x28e7dc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E7E0u;
        goto label_28e7e0;
    }
    ctx->pc = 0x28E7D8u;
    {
        const bool branch_taken_0x28e7d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e7d8) {
            ctx->pc = 0x28E7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E7D8u;
            // 0x28e7dc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E7E8u;
            goto label_28e7e8;
        }
    }
    ctx->pc = 0x28E7E0u;
label_28e7e0:
    // 0x28e7e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e7e4:
    if (ctx->pc == 0x28E7E4u) {
        ctx->pc = 0x28E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7E0u;
        // 0x28e7e4: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E7E8u;
        goto label_28e7e8;
    }
    ctx->pc = 0x28E7E0u;
    {
        const bool branch_taken_0x28e7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7E0u;
        // 0x28e7e4: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7e0) {
            ctx->pc = 0x28E7F0u;
            goto label_28e7f0;
        }
    }
    ctx->pc = 0x28E7E8u;
label_28e7e8:
    // 0x28e7e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_28e7ec:
    // 0x28e7ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28e7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_28e7f0:
    // 0x28e7f0: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x28e7f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_28e7f4:
    // 0x28e7f4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x28e7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28e7f8:
    // 0x28e7f8: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x28e7f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_28e7fc:
    // 0x28e7fc: 0x2d5102a  slt         $v0, $s6, $s5
    ctx->pc = 0x28e7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_28e800:
    // 0x28e800: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_28e804:
    if (ctx->pc == 0x28E804u) {
        ctx->pc = 0x28E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E800u;
        // 0x28e804: 0x26f70010  addiu       $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E808u;
        goto label_28e808;
    }
    ctx->pc = 0x28E800u;
    {
        const bool branch_taken_0x28e800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E800u;
        // 0x28e804: 0x26f70010  addiu       $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e800) {
            ctx->pc = 0x28E710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e710;
        }
    }
    ctx->pc = 0x28E808u;
label_28e808:
    // 0x28e808: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x28e808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_28e80c:
    // 0x28e80c: 0xae75000c  sw          $s5, 0xC($s3)
    ctx->pc = 0x28e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 21));
label_28e810:
    // 0x28e810: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28e810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e814:
    // 0x28e814: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28e814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28e818:
    // 0x28e818: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28e818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28e81c:
    // 0x28e81c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x28e81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28e820:
    // 0x28e820: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x28e820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28e824:
    // 0x28e824: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28e824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28e828:
    // 0x28e828: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x28e828u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28e82c:
    // 0x28e82c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x28e82cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28e830:
    // 0x28e830: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x28e830u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28e834:
    // 0x28e834: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x28e834u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28e838:
    // 0x28e838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e83c:
    // 0x28e83c: 0x3e00008  jr          $ra
label_28e840:
    if (ctx->pc == 0x28E840u) {
        ctx->pc = 0x28E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E83Cu;
        // 0x28e840: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E844u;
        goto label_28e844;
    }
    ctx->pc = 0x28E83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E83Cu;
        // 0x28e840: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E844u;
label_28e844:
    // 0x28e844: 0x0  nop
    ctx->pc = 0x28e844u;
    // NOP
label_28e848:
    // 0x28e848: 0xaf85c014  sw          $a1, -0x3FEC($gp)
    ctx->pc = 0x28e848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950932), GPR_U32(ctx, 5));
label_28e84c:
    // 0x28e84c: 0x0  nop
    ctx->pc = 0x28e84cu;
    // NOP
label_28e850:
    // 0x28e850: 0xaf85c00c  sw          $a1, -0x3FF4($gp)
    ctx->pc = 0x28e850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950924), GPR_U32(ctx, 5));
label_28e854:
    // 0x28e854: 0x0  nop
    ctx->pc = 0x28e854u;
    // NOP
    ctx->pc = 0x28e858u;
}
