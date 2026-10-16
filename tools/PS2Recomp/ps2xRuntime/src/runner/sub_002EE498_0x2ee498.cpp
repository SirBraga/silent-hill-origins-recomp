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

// Function: sub_002EE498
// Address: 0x2ee498 - 0x2ee808
void sub_002EE498_0x2ee498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE498_0x2ee498");
#endif

    switch (ctx->pc) {
        case 0x2ee498u: goto label_2ee498;
        case 0x2ee49cu: goto label_2ee49c;
        case 0x2ee4a0u: goto label_2ee4a0;
        case 0x2ee4a4u: goto label_2ee4a4;
        case 0x2ee4a8u: goto label_2ee4a8;
        case 0x2ee4acu: goto label_2ee4ac;
        case 0x2ee4b0u: goto label_2ee4b0;
        case 0x2ee4b4u: goto label_2ee4b4;
        case 0x2ee4b8u: goto label_2ee4b8;
        case 0x2ee4bcu: goto label_2ee4bc;
        case 0x2ee4c0u: goto label_2ee4c0;
        case 0x2ee4c4u: goto label_2ee4c4;
        case 0x2ee4c8u: goto label_2ee4c8;
        case 0x2ee4ccu: goto label_2ee4cc;
        case 0x2ee4d0u: goto label_2ee4d0;
        case 0x2ee4d4u: goto label_2ee4d4;
        case 0x2ee4d8u: goto label_2ee4d8;
        case 0x2ee4dcu: goto label_2ee4dc;
        case 0x2ee4e0u: goto label_2ee4e0;
        case 0x2ee4e4u: goto label_2ee4e4;
        case 0x2ee4e8u: goto label_2ee4e8;
        case 0x2ee4ecu: goto label_2ee4ec;
        case 0x2ee4f0u: goto label_2ee4f0;
        case 0x2ee4f4u: goto label_2ee4f4;
        case 0x2ee4f8u: goto label_2ee4f8;
        case 0x2ee4fcu: goto label_2ee4fc;
        case 0x2ee500u: goto label_2ee500;
        case 0x2ee504u: goto label_2ee504;
        case 0x2ee508u: goto label_2ee508;
        case 0x2ee50cu: goto label_2ee50c;
        case 0x2ee510u: goto label_2ee510;
        case 0x2ee514u: goto label_2ee514;
        case 0x2ee518u: goto label_2ee518;
        case 0x2ee51cu: goto label_2ee51c;
        case 0x2ee520u: goto label_2ee520;
        case 0x2ee524u: goto label_2ee524;
        case 0x2ee528u: goto label_2ee528;
        case 0x2ee52cu: goto label_2ee52c;
        case 0x2ee530u: goto label_2ee530;
        case 0x2ee534u: goto label_2ee534;
        case 0x2ee538u: goto label_2ee538;
        case 0x2ee53cu: goto label_2ee53c;
        case 0x2ee540u: goto label_2ee540;
        case 0x2ee544u: goto label_2ee544;
        case 0x2ee548u: goto label_2ee548;
        case 0x2ee54cu: goto label_2ee54c;
        case 0x2ee550u: goto label_2ee550;
        case 0x2ee554u: goto label_2ee554;
        case 0x2ee558u: goto label_2ee558;
        case 0x2ee55cu: goto label_2ee55c;
        case 0x2ee560u: goto label_2ee560;
        case 0x2ee564u: goto label_2ee564;
        case 0x2ee568u: goto label_2ee568;
        case 0x2ee56cu: goto label_2ee56c;
        case 0x2ee570u: goto label_2ee570;
        case 0x2ee574u: goto label_2ee574;
        case 0x2ee578u: goto label_2ee578;
        case 0x2ee57cu: goto label_2ee57c;
        case 0x2ee580u: goto label_2ee580;
        case 0x2ee584u: goto label_2ee584;
        case 0x2ee588u: goto label_2ee588;
        case 0x2ee58cu: goto label_2ee58c;
        case 0x2ee590u: goto label_2ee590;
        case 0x2ee594u: goto label_2ee594;
        case 0x2ee598u: goto label_2ee598;
        case 0x2ee59cu: goto label_2ee59c;
        case 0x2ee5a0u: goto label_2ee5a0;
        case 0x2ee5a4u: goto label_2ee5a4;
        case 0x2ee5a8u: goto label_2ee5a8;
        case 0x2ee5acu: goto label_2ee5ac;
        case 0x2ee5b0u: goto label_2ee5b0;
        case 0x2ee5b4u: goto label_2ee5b4;
        case 0x2ee5b8u: goto label_2ee5b8;
        case 0x2ee5bcu: goto label_2ee5bc;
        case 0x2ee5c0u: goto label_2ee5c0;
        case 0x2ee5c4u: goto label_2ee5c4;
        case 0x2ee5c8u: goto label_2ee5c8;
        case 0x2ee5ccu: goto label_2ee5cc;
        case 0x2ee5d0u: goto label_2ee5d0;
        case 0x2ee5d4u: goto label_2ee5d4;
        case 0x2ee5d8u: goto label_2ee5d8;
        case 0x2ee5dcu: goto label_2ee5dc;
        case 0x2ee5e0u: goto label_2ee5e0;
        case 0x2ee5e4u: goto label_2ee5e4;
        case 0x2ee5e8u: goto label_2ee5e8;
        case 0x2ee5ecu: goto label_2ee5ec;
        case 0x2ee5f0u: goto label_2ee5f0;
        case 0x2ee5f4u: goto label_2ee5f4;
        case 0x2ee5f8u: goto label_2ee5f8;
        case 0x2ee5fcu: goto label_2ee5fc;
        case 0x2ee600u: goto label_2ee600;
        case 0x2ee604u: goto label_2ee604;
        case 0x2ee608u: goto label_2ee608;
        case 0x2ee60cu: goto label_2ee60c;
        case 0x2ee610u: goto label_2ee610;
        case 0x2ee614u: goto label_2ee614;
        case 0x2ee618u: goto label_2ee618;
        case 0x2ee61cu: goto label_2ee61c;
        case 0x2ee620u: goto label_2ee620;
        case 0x2ee624u: goto label_2ee624;
        case 0x2ee628u: goto label_2ee628;
        case 0x2ee62cu: goto label_2ee62c;
        case 0x2ee630u: goto label_2ee630;
        case 0x2ee634u: goto label_2ee634;
        case 0x2ee638u: goto label_2ee638;
        case 0x2ee63cu: goto label_2ee63c;
        case 0x2ee640u: goto label_2ee640;
        case 0x2ee644u: goto label_2ee644;
        case 0x2ee648u: goto label_2ee648;
        case 0x2ee64cu: goto label_2ee64c;
        case 0x2ee650u: goto label_2ee650;
        case 0x2ee654u: goto label_2ee654;
        case 0x2ee658u: goto label_2ee658;
        case 0x2ee65cu: goto label_2ee65c;
        case 0x2ee660u: goto label_2ee660;
        case 0x2ee664u: goto label_2ee664;
        case 0x2ee668u: goto label_2ee668;
        case 0x2ee66cu: goto label_2ee66c;
        case 0x2ee670u: goto label_2ee670;
        case 0x2ee674u: goto label_2ee674;
        case 0x2ee678u: goto label_2ee678;
        case 0x2ee67cu: goto label_2ee67c;
        case 0x2ee680u: goto label_2ee680;
        case 0x2ee684u: goto label_2ee684;
        case 0x2ee688u: goto label_2ee688;
        case 0x2ee68cu: goto label_2ee68c;
        case 0x2ee690u: goto label_2ee690;
        case 0x2ee694u: goto label_2ee694;
        case 0x2ee698u: goto label_2ee698;
        case 0x2ee69cu: goto label_2ee69c;
        case 0x2ee6a0u: goto label_2ee6a0;
        case 0x2ee6a4u: goto label_2ee6a4;
        case 0x2ee6a8u: goto label_2ee6a8;
        case 0x2ee6acu: goto label_2ee6ac;
        case 0x2ee6b0u: goto label_2ee6b0;
        case 0x2ee6b4u: goto label_2ee6b4;
        case 0x2ee6b8u: goto label_2ee6b8;
        case 0x2ee6bcu: goto label_2ee6bc;
        case 0x2ee6c0u: goto label_2ee6c0;
        case 0x2ee6c4u: goto label_2ee6c4;
        case 0x2ee6c8u: goto label_2ee6c8;
        case 0x2ee6ccu: goto label_2ee6cc;
        case 0x2ee6d0u: goto label_2ee6d0;
        case 0x2ee6d4u: goto label_2ee6d4;
        case 0x2ee6d8u: goto label_2ee6d8;
        case 0x2ee6dcu: goto label_2ee6dc;
        case 0x2ee6e0u: goto label_2ee6e0;
        case 0x2ee6e4u: goto label_2ee6e4;
        case 0x2ee6e8u: goto label_2ee6e8;
        case 0x2ee6ecu: goto label_2ee6ec;
        case 0x2ee6f0u: goto label_2ee6f0;
        case 0x2ee6f4u: goto label_2ee6f4;
        case 0x2ee6f8u: goto label_2ee6f8;
        case 0x2ee6fcu: goto label_2ee6fc;
        case 0x2ee700u: goto label_2ee700;
        case 0x2ee704u: goto label_2ee704;
        case 0x2ee708u: goto label_2ee708;
        case 0x2ee70cu: goto label_2ee70c;
        case 0x2ee710u: goto label_2ee710;
        case 0x2ee714u: goto label_2ee714;
        case 0x2ee718u: goto label_2ee718;
        case 0x2ee71cu: goto label_2ee71c;
        case 0x2ee720u: goto label_2ee720;
        case 0x2ee724u: goto label_2ee724;
        case 0x2ee728u: goto label_2ee728;
        case 0x2ee72cu: goto label_2ee72c;
        case 0x2ee730u: goto label_2ee730;
        case 0x2ee734u: goto label_2ee734;
        case 0x2ee738u: goto label_2ee738;
        case 0x2ee73cu: goto label_2ee73c;
        case 0x2ee740u: goto label_2ee740;
        case 0x2ee744u: goto label_2ee744;
        case 0x2ee748u: goto label_2ee748;
        case 0x2ee74cu: goto label_2ee74c;
        case 0x2ee750u: goto label_2ee750;
        case 0x2ee754u: goto label_2ee754;
        case 0x2ee758u: goto label_2ee758;
        case 0x2ee75cu: goto label_2ee75c;
        case 0x2ee760u: goto label_2ee760;
        case 0x2ee764u: goto label_2ee764;
        case 0x2ee768u: goto label_2ee768;
        case 0x2ee76cu: goto label_2ee76c;
        case 0x2ee770u: goto label_2ee770;
        case 0x2ee774u: goto label_2ee774;
        case 0x2ee778u: goto label_2ee778;
        case 0x2ee77cu: goto label_2ee77c;
        case 0x2ee780u: goto label_2ee780;
        case 0x2ee784u: goto label_2ee784;
        case 0x2ee788u: goto label_2ee788;
        case 0x2ee78cu: goto label_2ee78c;
        case 0x2ee790u: goto label_2ee790;
        case 0x2ee794u: goto label_2ee794;
        case 0x2ee798u: goto label_2ee798;
        case 0x2ee79cu: goto label_2ee79c;
        case 0x2ee7a0u: goto label_2ee7a0;
        case 0x2ee7a4u: goto label_2ee7a4;
        case 0x2ee7a8u: goto label_2ee7a8;
        case 0x2ee7acu: goto label_2ee7ac;
        case 0x2ee7b0u: goto label_2ee7b0;
        case 0x2ee7b4u: goto label_2ee7b4;
        case 0x2ee7b8u: goto label_2ee7b8;
        case 0x2ee7bcu: goto label_2ee7bc;
        case 0x2ee7c0u: goto label_2ee7c0;
        case 0x2ee7c4u: goto label_2ee7c4;
        case 0x2ee7c8u: goto label_2ee7c8;
        case 0x2ee7ccu: goto label_2ee7cc;
        case 0x2ee7d0u: goto label_2ee7d0;
        case 0x2ee7d4u: goto label_2ee7d4;
        case 0x2ee7d8u: goto label_2ee7d8;
        case 0x2ee7dcu: goto label_2ee7dc;
        case 0x2ee7e0u: goto label_2ee7e0;
        case 0x2ee7e4u: goto label_2ee7e4;
        case 0x2ee7e8u: goto label_2ee7e8;
        case 0x2ee7ecu: goto label_2ee7ec;
        case 0x2ee7f0u: goto label_2ee7f0;
        case 0x2ee7f4u: goto label_2ee7f4;
        case 0x2ee7f8u: goto label_2ee7f8;
        case 0x2ee7fcu: goto label_2ee7fc;
        case 0x2ee800u: goto label_2ee800;
        case 0x2ee804u: goto label_2ee804;
        default: break;
    }

    ctx->pc = 0x2ee498u;

label_2ee498:
    // 0x2ee498: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ee498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2ee49c:
    // 0x2ee49c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2ee49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2ee4a0:
    // 0x2ee4a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2ee4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ee4a4:
    // 0x2ee4a4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2ee4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2ee4a8:
    // 0x2ee4a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ee4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4ac:
    // 0x2ee4ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ee4acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4b0:
    // 0x2ee4b0: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x2ee4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_2ee4b4:
    // 0x2ee4b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ee4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ee4b8:
    // 0x2ee4b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ee4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4bc:
    // 0x2ee4bc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2ee4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_2ee4c0:
    // 0x2ee4c0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2ee4c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4c4:
    // 0x2ee4c4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2ee4c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4c8:
    // 0x2ee4c8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2ee4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2ee4cc:
    // 0x2ee4cc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2ee4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2ee4d0:
    // 0x2ee4d0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2ee4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2ee4d4:
    // 0x2ee4d4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2ee4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2ee4d8:
    // 0x2ee4d8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2ee4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_2ee4dc:
    // 0x2ee4dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ee4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2ee4e0:
    // 0x2ee4e0: 0xc09270a  jal         func_249C28
label_2ee4e4:
    if (ctx->pc == 0x2EE4E4u) {
        ctx->pc = 0x2EE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4E0u;
        // 0x2ee4e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE4E8u;
        goto label_2ee4e8;
    }
    ctx->pc = 0x2EE4E0u;
    SET_GPR_U32(ctx, 31, 0x2EE4E8u);
    ctx->pc = 0x2EE4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE4E0u;
    // 0x2ee4e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x2EE4E0u, 0x2EE4E8u)) {
        return;
    }
    ctx->pc = 0x2EE4E8u;
label_2ee4e8:
    // 0x2ee4e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2ee4ec:
    if (ctx->pc == 0x2EE4ECu) {
        ctx->pc = 0x2EE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4E8u;
        // 0x2ee4ec: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE4F0u;
        goto label_2ee4f0;
    }
    ctx->pc = 0x2EE4E8u;
    {
        const bool branch_taken_0x2ee4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4E8u;
        // 0x2ee4ec: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4e8) {
            ctx->pc = 0x2EE528u;
            goto label_2ee528;
        }
    }
    ctx->pc = 0x2EE4F0u;
label_2ee4f0:
    // 0x2ee4f0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2ee4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2ee4f4:
    // 0x2ee4f4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2ee4f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ee4f8:
    // 0x2ee4f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ee4fc:
    if (ctx->pc == 0x2EE4FCu) {
        ctx->pc = 0x2EE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4F8u;
        // 0x2ee4fc: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE500u;
        goto label_2ee500;
    }
    ctx->pc = 0x2EE4F8u;
    {
        const bool branch_taken_0x2ee4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4F8u;
        // 0x2ee4fc: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4f8) {
            ctx->pc = 0x2EE514u;
            goto label_2ee514;
        }
    }
    ctx->pc = 0x2EE500u;
label_2ee500:
    // 0x2ee500: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2ee500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2ee504:
    // 0x2ee504: 0x40f809  jalr        $v0
label_2ee508:
    if (ctx->pc == 0x2EE508u) {
        ctx->pc = 0x2EE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE504u;
        // 0x2ee508: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE50Cu;
        goto label_2ee50c;
    }
    ctx->pc = 0x2EE504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE50Cu);
        ctx->pc = 0x2EE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE504u;
        // 0x2ee508: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE504u, 0x2EE50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE50Cu;
label_2ee50c:
    // 0x2ee50c: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_2ee510:
    if (ctx->pc == 0x2EE510u) {
        ctx->pc = 0x2EE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE50Cu;
        // 0x2ee510: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE514u;
        goto label_2ee514;
    }
    ctx->pc = 0x2EE50Cu;
    {
        const bool branch_taken_0x2ee50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE50Cu;
        // 0x2ee510: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee50c) {
            ctx->pc = 0x2EE7D0u;
            goto label_2ee7d0;
        }
    }
    ctx->pc = 0x2EE514u;
label_2ee514:
    // 0x2ee514: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ee514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ee518:
    // 0x2ee518: 0xc093546  jal         func_24D518
label_2ee51c:
    if (ctx->pc == 0x2EE51Cu) {
        ctx->pc = 0x2EE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE518u;
        // 0x2ee51c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE520u;
        goto label_2ee520;
    }
    ctx->pc = 0x2EE518u;
    SET_GPR_U32(ctx, 31, 0x2EE520u);
    ctx->pc = 0x2EE51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE518u;
    // 0x2ee51c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2EE518u, 0x2EE520u)) {
        return;
    }
    ctx->pc = 0x2EE520u;
label_2ee520:
    // 0x2ee520: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ee524:
    if (ctx->pc == 0x2EE524u) {
        ctx->pc = 0x2EE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE520u;
        // 0x2ee524: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE528u;
        goto label_2ee528;
    }
    ctx->pc = 0x2EE520u;
    {
        const bool branch_taken_0x2ee520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE520u;
        // 0x2ee524: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee520) {
            ctx->pc = 0x2EE530u;
            goto label_2ee530;
        }
    }
    ctx->pc = 0x2EE528u;
label_2ee528:
    // 0x2ee528: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_2ee52c:
    if (ctx->pc == 0x2EE52Cu) {
        ctx->pc = 0x2EE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE528u;
        // 0x2ee52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE530u;
        goto label_2ee530;
    }
    ctx->pc = 0x2EE528u;
    {
        const bool branch_taken_0x2ee528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE528u;
        // 0x2ee52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee528) {
            ctx->pc = 0x2EE7CCu;
            goto label_2ee7cc;
        }
    }
    ctx->pc = 0x2EE530u;
label_2ee530:
    // 0x2ee530: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2ee530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ee534:
    // 0x2ee534: 0x24520fc8  addiu       $s2, $v0, 0xFC8
    ctx->pc = 0x2ee534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2ee538:
    // 0x2ee538: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2ee538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2ee53c:
    // 0x2ee53c: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x2ee53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_2ee540:
    // 0x2ee540: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x2ee540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2ee544:
    // 0x2ee544: 0x40f809  jalr        $v0
label_2ee548:
    if (ctx->pc == 0x2EE548u) {
        ctx->pc = 0x2EE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE544u;
        // 0x2ee548: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE54Cu;
        goto label_2ee54c;
    }
    ctx->pc = 0x2EE544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE54Cu);
        ctx->pc = 0x2EE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE544u;
        // 0x2ee548: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE544u, 0x2EE54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE54Cu;
label_2ee54c:
    // 0x2ee54c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee550:
    // 0x2ee550: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_2ee554:
    if (ctx->pc == 0x2EE554u) {
        ctx->pc = 0x2EE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE550u;
        // 0x2ee554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE558u;
        goto label_2ee558;
    }
    ctx->pc = 0x2EE550u;
    {
        const bool branch_taken_0x2ee550 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE550u;
        // 0x2ee554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee550) {
            ctx->pc = 0x2EE588u;
            goto label_2ee588;
        }
    }
    ctx->pc = 0x2EE558u;
label_2ee558:
    // 0x2ee558: 0x240201bf  addiu       $v0, $zero, 0x1BF
    ctx->pc = 0x2ee558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 447));
label_2ee55c:
    // 0x2ee55c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2ee55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2ee560:
    // 0x2ee560: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2ee560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2ee564:
    // 0x2ee564: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ee564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ee568:
    // 0x2ee568: 0xc092848  jal         func_24A120
label_2ee56c:
    if (ctx->pc == 0x2EE56Cu) {
        ctx->pc = 0x2EE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE568u;
        // 0x2ee56c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE570u;
        goto label_2ee570;
    }
    ctx->pc = 0x2EE568u;
    SET_GPR_U32(ctx, 31, 0x2EE570u);
    ctx->pc = 0x2EE56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE568u;
    // 0x2ee56c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2EE568u, 0x2EE570u)) {
        return;
    }
    ctx->pc = 0x2EE570u;
label_2ee570:
    // 0x2ee570: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ee570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ee574:
    // 0x2ee574: 0xc09281a  jal         func_24A068
label_2ee578:
    if (ctx->pc == 0x2EE578u) {
        ctx->pc = 0x2EE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE574u;
        // 0x2ee578: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE57Cu;
        goto label_2ee57c;
    }
    ctx->pc = 0x2EE574u;
    SET_GPR_U32(ctx, 31, 0x2EE57Cu);
    ctx->pc = 0x2EE578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE574u;
    // 0x2ee578: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2EE574u, 0x2EE57Cu)) {
        return;
    }
    ctx->pc = 0x2EE57Cu;
label_2ee57c:
    // 0x2ee57c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ee580:
    if (ctx->pc == 0x2EE580u) {
        ctx->pc = 0x2EE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE57Cu;
        // 0x2ee580: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE584u;
        goto label_2ee584;
    }
    ctx->pc = 0x2EE57Cu;
    {
        const bool branch_taken_0x2ee57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE57Cu;
        // 0x2ee580: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee57c) {
            ctx->pc = 0x2EE5A8u;
            goto label_2ee5a8;
        }
    }
    ctx->pc = 0x2EE584u;
label_2ee584:
    // 0x2ee584: 0x0  nop
    ctx->pc = 0x2ee584u;
    // NOP
label_2ee588:
    // 0x2ee588: 0xc0bbaf2  jal         func_2EEBC8
label_2ee58c:
    if (ctx->pc == 0x2EE58Cu) {
        ctx->pc = 0x2EE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE588u;
        // 0x2ee58c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE590u;
        goto label_2ee590;
    }
    ctx->pc = 0x2EE588u;
    SET_GPR_U32(ctx, 31, 0x2EE590u);
    ctx->pc = 0x2EE58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE588u;
    // 0x2ee58c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEBC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EEBC8u, 0x2EE588u, 0x2EE590u)) {
        return;
    }
    ctx->pc = 0x2EE590u;
label_2ee590:
    // 0x2ee590: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2ee594:
    if (ctx->pc == 0x2EE594u) {
        ctx->pc = 0x2EE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE590u;
        // 0x2ee594: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE598u;
        goto label_2ee598;
    }
    ctx->pc = 0x2EE590u;
    {
        const bool branch_taken_0x2ee590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee590) {
            ctx->pc = 0x2EE594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE590u;
            // 0x2ee594: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE5A8u;
            goto label_2ee5a8;
        }
    }
    ctx->pc = 0x2EE598u;
label_2ee598:
    // 0x2ee598: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2ee598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2ee59c:
    // 0x2ee59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee5a0:
    // 0x2ee5a0: 0x40f809  jalr        $v0
label_2ee5a4:
    if (ctx->pc == 0x2EE5A4u) {
        ctx->pc = 0x2EE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5A0u;
        // 0x2ee5a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE5A8u;
        goto label_2ee5a8;
    }
    ctx->pc = 0x2EE5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE5A8u);
        ctx->pc = 0x2EE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5A0u;
        // 0x2ee5a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE5A0u, 0x2EE5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE5A8u;
label_2ee5a8:
    // 0x2ee5a8: 0x1240ffdf  beqz        $s2, . + 4 + (-0x21 << 2)
label_2ee5ac:
    if (ctx->pc == 0x2EE5ACu) {
        ctx->pc = 0x2EE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5A8u;
        // 0x2ee5ac: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE5B0u;
        goto label_2ee5b0;
    }
    ctx->pc = 0x2EE5A8u;
    {
        const bool branch_taken_0x2ee5a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5A8u;
        // 0x2ee5ac: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5a8) {
            ctx->pc = 0x2EE528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee528;
        }
    }
    ctx->pc = 0x2EE5B0u;
label_2ee5b0:
    // 0x2ee5b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ee5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2ee5b4:
    // 0x2ee5b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ee5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2ee5b8:
    // 0x2ee5b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ee5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ee5bc:
    // 0x2ee5bc: 0x10430082  beq         $v0, $v1, . + 4 + (0x82 << 2)
label_2ee5c0:
    if (ctx->pc == 0x2EE5C0u) {
        ctx->pc = 0x2EE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5BCu;
        // 0x2ee5c0: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE5C4u;
        goto label_2ee5c4;
    }
    ctx->pc = 0x2EE5BCu;
    {
        const bool branch_taken_0x2ee5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5BCu;
        // 0x2ee5c0: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5bc) {
            ctx->pc = 0x2EE7C8u;
            goto label_2ee7c8;
        }
    }
    ctx->pc = 0x2EE5C4u;
label_2ee5c4:
    // 0x2ee5c4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2ee5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2ee5c8:
    // 0x2ee5c8: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x2ee5c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_2ee5cc:
    // 0x2ee5cc: 0x245e0fc8  addiu       $fp, $v0, 0xFC8
    ctx->pc = 0x2ee5ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2ee5d0:
    // 0x2ee5d0: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x2ee5d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
label_2ee5d4:
    // 0x2ee5d4: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2ee5d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_2ee5d8:
    // 0x2ee5d8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2ee5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ee5dc:
    // 0x2ee5dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ee5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ee5e0:
    // 0x2ee5e0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2ee5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ee5e4:
    // 0x2ee5e4: 0xc09270a  jal         func_249C28
label_2ee5e8:
    if (ctx->pc == 0x2EE5E8u) {
        ctx->pc = 0x2EE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5E4u;
        // 0x2ee5e8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE5ECu;
        goto label_2ee5ec;
    }
    ctx->pc = 0x2EE5E4u;
    SET_GPR_U32(ctx, 31, 0x2EE5ECu);
    ctx->pc = 0x2EE5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE5E4u;
    // 0x2ee5e8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x2EE5E4u, 0x2EE5ECu)) {
        return;
    }
    ctx->pc = 0x2EE5ECu;
label_2ee5ec:
    // 0x2ee5ec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2ee5f0:
    if (ctx->pc == 0x2EE5F0u) {
        ctx->pc = 0x2EE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5ECu;
        // 0x2ee5f0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE5F4u;
        goto label_2ee5f4;
    }
    ctx->pc = 0x2EE5ECu;
    {
        const bool branch_taken_0x2ee5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee5ec) {
            ctx->pc = 0x2EE5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE5ECu;
            // 0x2ee5f0: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE610u;
            goto label_2ee610;
        }
    }
    ctx->pc = 0x2EE5F4u;
label_2ee5f4:
    // 0x2ee5f4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2ee5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2ee5f8:
    // 0x2ee5f8: 0x40f809  jalr        $v0
label_2ee5fc:
    if (ctx->pc == 0x2EE5FCu) {
        ctx->pc = 0x2EE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5F8u;
        // 0x2ee5fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE600u;
        goto label_2ee600;
    }
    ctx->pc = 0x2EE5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE600u);
        ctx->pc = 0x2EE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5F8u;
        // 0x2ee5fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE5F8u, 0x2EE600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE600u;
label_2ee600:
    // 0x2ee600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee604:
    // 0x2ee604: 0x56000060  bnel        $s0, $zero, . + 4 + (0x60 << 2)
label_2ee608:
    if (ctx->pc == 0x2EE608u) {
        ctx->pc = 0x2EE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE604u;
        // 0x2ee608: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE60Cu;
        goto label_2ee60c;
    }
    ctx->pc = 0x2EE604u;
    {
        const bool branch_taken_0x2ee604 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee604) {
            ctx->pc = 0x2EE608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE604u;
            // 0x2ee608: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE788u;
            goto label_2ee788;
        }
    }
    ctx->pc = 0x2EE60Cu;
label_2ee60c:
    // 0x2ee60c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ee60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee610:
    // 0x2ee610: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ee610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2ee614:
    // 0x2ee614: 0x52420001  beql        $s2, $v0, . + 4 + (0x1 << 2)
label_2ee618:
    if (ctx->pc == 0x2EE618u) {
        ctx->pc = 0x2EE618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE614u;
        // 0x2ee618: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE61Cu;
        goto label_2ee61c;
    }
    ctx->pc = 0x2EE614u;
    {
        const bool branch_taken_0x2ee614 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee614) {
            ctx->pc = 0x2EE618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE614u;
            // 0x2ee618: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE61Cu;
            goto label_2ee61c;
        }
    }
    ctx->pc = 0x2EE61Cu;
label_2ee61c:
    // 0x2ee61c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2ee61cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee620:
    // 0x2ee620: 0xc092974  jal         func_24A5D0
label_2ee624:
    if (ctx->pc == 0x2EE624u) {
        ctx->pc = 0x2EE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE620u;
        // 0x2ee624: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE628u;
        goto label_2ee628;
    }
    ctx->pc = 0x2EE620u;
    SET_GPR_U32(ctx, 31, 0x2EE628u);
    ctx->pc = 0x2EE624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE620u;
    // 0x2ee624: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D0u, 0x2EE620u, 0x2EE628u)) {
        return;
    }
    ctx->pc = 0x2EE628u;
label_2ee628:
    // 0x2ee628: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2ee628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ee62c:
    // 0x2ee62c: 0xc092976  jal         func_24A5D8
label_2ee630:
    if (ctx->pc == 0x2EE630u) {
        ctx->pc = 0x2EE630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE62Cu;
        // 0x2ee630: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE634u;
        goto label_2ee634;
    }
    ctx->pc = 0x2EE62Cu;
    SET_GPR_U32(ctx, 31, 0x2EE634u);
    ctx->pc = 0x2EE630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE62Cu;
    // 0x2ee630: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D8u, 0x2EE62Cu, 0x2EE634u)) {
        return;
    }
    ctx->pc = 0x2EE634u;
label_2ee634:
    // 0x2ee634: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ee634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee638:
    // 0x2ee638: 0x1205002c  beq         $s0, $a1, . + 4 + (0x2C << 2)
label_2ee63c:
    if (ctx->pc == 0x2EE63Cu) {
        ctx->pc = 0x2EE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE638u;
        // 0x2ee63c: 0xb01023  subu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE640u;
        goto label_2ee640;
    }
    ctx->pc = 0x2EE638u;
    {
        const bool branch_taken_0x2ee638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE638u;
        // 0x2ee63c: 0xb01023  subu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee638) {
            ctx->pc = 0x2EE6ECu;
            goto label_2ee6ec;
        }
    }
    ctx->pc = 0x2EE640u;
label_2ee640:
    // 0x2ee640: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2ee640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2ee644:
    // 0x2ee644: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_2ee648:
    if (ctx->pc == 0x2EE648u) {
        ctx->pc = 0x2EE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE644u;
        // 0x2ee648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE64Cu;
        goto label_2ee64c;
    }
    ctx->pc = 0x2EE644u;
    {
        const bool branch_taken_0x2ee644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE644u;
        // 0x2ee648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee644) {
            ctx->pc = 0x2EE6ACu;
            goto label_2ee6ac;
        }
    }
    ctx->pc = 0x2EE64Cu;
label_2ee64c:
    // 0x2ee64c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x2ee64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_2ee650:
    // 0x2ee650: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2ee654:
    if (ctx->pc == 0x2EE654u) {
        ctx->pc = 0x2EE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE650u;
        // 0x2ee654: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE658u;
        goto label_2ee658;
    }
    ctx->pc = 0x2EE650u;
    {
        const bool branch_taken_0x2ee650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee650) {
            ctx->pc = 0x2EE654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE650u;
            // 0x2ee654: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE698u;
            goto label_2ee698;
        }
    }
    ctx->pc = 0x2EE658u;
label_2ee658:
    // 0x2ee658: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2ee658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_2ee65c:
    // 0x2ee65c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2ee660:
    if (ctx->pc == 0x2EE660u) {
        ctx->pc = 0x2EE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE65Cu;
        // 0x2ee660: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE664u;
        goto label_2ee664;
    }
    ctx->pc = 0x2EE65Cu;
    {
        const bool branch_taken_0x2ee65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee65c) {
            ctx->pc = 0x2EE660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE65Cu;
            // 0x2ee660: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE688u;
            goto label_2ee688;
        }
    }
    ctx->pc = 0x2EE664u;
label_2ee664:
    // 0x2ee664: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x2ee664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_2ee668:
    // 0x2ee668: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_2ee66c:
    if (ctx->pc == 0x2EE66Cu) {
        ctx->pc = 0x2EE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE668u;
        // 0x2ee66c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE670u;
        goto label_2ee670;
    }
    ctx->pc = 0x2EE668u;
    {
        const bool branch_taken_0x2ee668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee668) {
            ctx->pc = 0x2EE66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE668u;
            // 0x2ee66c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE6B0u;
            goto label_2ee6b0;
        }
    }
    ctx->pc = 0x2EE670u;
label_2ee670:
    // 0x2ee670: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ee670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ee674:
    // 0x2ee674: 0x12420038  beq         $s2, $v0, . + 4 + (0x38 << 2)
label_2ee678:
    if (ctx->pc == 0x2EE678u) {
        ctx->pc = 0x2EE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE674u;
        // 0x2ee678: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE67Cu;
        goto label_2ee67c;
    }
    ctx->pc = 0x2EE674u;
    {
        const bool branch_taken_0x2ee674 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE674u;
        // 0x2ee678: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee674) {
            ctx->pc = 0x2EE758u;
            goto label_2ee758;
        }
    }
    ctx->pc = 0x2EE67Cu;
label_2ee67c:
    // 0x2ee67c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ee67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee680:
    // 0x2ee680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ee680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ee684:
    // 0x2ee684: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ee684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ee688:
    // 0x2ee688: 0x12420033  beq         $s2, $v0, . + 4 + (0x33 << 2)
label_2ee68c:
    if (ctx->pc == 0x2EE68Cu) {
        ctx->pc = 0x2EE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE688u;
        // 0x2ee68c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE690u;
        goto label_2ee690;
    }
    ctx->pc = 0x2EE688u;
    {
        const bool branch_taken_0x2ee688 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE688u;
        // 0x2ee68c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee688) {
            ctx->pc = 0x2EE758u;
            goto label_2ee758;
        }
    }
    ctx->pc = 0x2EE690u;
label_2ee690:
    // 0x2ee690: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ee690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2ee694:
    // 0x2ee694: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ee694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ee698:
    // 0x2ee698: 0x1242002f  beq         $s2, $v0, . + 4 + (0x2F << 2)
label_2ee69c:
    if (ctx->pc == 0x2EE69Cu) {
        ctx->pc = 0x2EE6A0u;
        goto label_2ee6a0;
    }
    ctx->pc = 0x2EE698u;
    {
        const bool branch_taken_0x2ee698 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee698) {
            ctx->pc = 0x2EE758u;
            goto label_2ee758;
        }
    }
    ctx->pc = 0x2EE6A0u;
label_2ee6a0:
    // 0x2ee6a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ee6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2ee6a4:
    // 0x2ee6a4: 0x12050011  beq         $s0, $a1, . + 4 + (0x11 << 2)
label_2ee6a8:
    if (ctx->pc == 0x2EE6A8u) {
        ctx->pc = 0x2EE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6A4u;
        // 0x2ee6a8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE6ACu;
        goto label_2ee6ac;
    }
    ctx->pc = 0x2EE6A4u;
    {
        const bool branch_taken_0x2ee6a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EE6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6A4u;
        // 0x2ee6a8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6a4) {
            ctx->pc = 0x2EE6ECu;
            goto label_2ee6ec;
        }
    }
    ctx->pc = 0x2EE6ACu;
label_2ee6ac:
    // 0x2ee6ac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2ee6acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ee6b0:
    // 0x2ee6b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ee6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ee6b4:
    // 0x2ee6b4: 0x12420028  beq         $s2, $v0, . + 4 + (0x28 << 2)
label_2ee6b8:
    if (ctx->pc == 0x2EE6B8u) {
        ctx->pc = 0x2EE6BCu;
        goto label_2ee6bc;
    }
    ctx->pc = 0x2EE6B4u;
    {
        const bool branch_taken_0x2ee6b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee6b4) {
            ctx->pc = 0x2EE758u;
            goto label_2ee758;
        }
    }
    ctx->pc = 0x2EE6BCu;
label_2ee6bc:
    // 0x2ee6bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ee6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2ee6c0:
    // 0x2ee6c0: 0x12420025  beq         $s2, $v0, . + 4 + (0x25 << 2)
label_2ee6c4:
    if (ctx->pc == 0x2EE6C4u) {
        ctx->pc = 0x2EE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6C0u;
        // 0x2ee6c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE6C8u;
        goto label_2ee6c8;
    }
    ctx->pc = 0x2EE6C0u;
    {
        const bool branch_taken_0x2ee6c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6C0u;
        // 0x2ee6c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6c0) {
            ctx->pc = 0x2EE758u;
            goto label_2ee758;
        }
    }
    ctx->pc = 0x2EE6C8u;
label_2ee6c8:
    // 0x2ee6c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2ee6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2ee6cc:
    // 0x2ee6cc: 0x12420022  beq         $s2, $v0, . + 4 + (0x22 << 2)
label_2ee6d0:
    if (ctx->pc == 0x2EE6D0u) {
        ctx->pc = 0x2EE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6CCu;
        // 0x2ee6d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE6D4u;
        goto label_2ee6d4;
    }
    ctx->pc = 0x2EE6CCu;
    {
        const bool branch_taken_0x2ee6cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6CCu;
        // 0x2ee6d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6cc) {
            ctx->pc = 0x2EE758u;
            goto label_2ee758;
        }
    }
    ctx->pc = 0x2EE6D4u;
label_2ee6d4:
    // 0x2ee6d4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ee6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ee6d8:
    // 0x2ee6d8: 0x1242001f  beq         $s2, $v0, . + 4 + (0x1F << 2)
label_2ee6dc:
    if (ctx->pc == 0x2EE6DCu) {
        ctx->pc = 0x2EE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6D8u;
        // 0x2ee6dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE6E0u;
        goto label_2ee6e0;
    }
    ctx->pc = 0x2EE6D8u;
    {
        const bool branch_taken_0x2ee6d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6D8u;
        // 0x2ee6dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6d8) {
            ctx->pc = 0x2EE758u;
            goto label_2ee758;
        }
    }
    ctx->pc = 0x2EE6E0u;
label_2ee6e0:
    // 0x2ee6e0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ee6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2ee6e4:
    // 0x2ee6e4: 0x1605fff2  bne         $s0, $a1, . + 4 + (-0xE << 2)
label_2ee6e8:
    if (ctx->pc == 0x2EE6E8u) {
        ctx->pc = 0x2EE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6E4u;
        // 0x2ee6e8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE6ECu;
        goto label_2ee6ec;
    }
    ctx->pc = 0x2EE6E4u;
    {
        const bool branch_taken_0x2ee6e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x2EE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6E4u;
        // 0x2ee6e8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6e4) {
            ctx->pc = 0x2EE6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee6b0;
        }
    }
    ctx->pc = 0x2EE6ECu;
label_2ee6ec:
    // 0x2ee6ec: 0xc092976  jal         func_24A5D8
label_2ee6f0:
    if (ctx->pc == 0x2EE6F0u) {
        ctx->pc = 0x2EE6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6ECu;
        // 0x2ee6f0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE6F4u;
        goto label_2ee6f4;
    }
    ctx->pc = 0x2EE6ECu;
    SET_GPR_U32(ctx, 31, 0x2EE6F4u);
    ctx->pc = 0x2EE6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE6ECu;
    // 0x2ee6f0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D8u, 0x2EE6ECu, 0x2EE6F4u)) {
        return;
    }
    ctx->pc = 0x2EE6F4u;
label_2ee6f4:
    // 0x2ee6f4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2ee6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ee6f8:
    // 0x2ee6f8: 0xc092974  jal         func_24A5D0
label_2ee6fc:
    if (ctx->pc == 0x2EE6FCu) {
        ctx->pc = 0x2EE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6F8u;
        // 0x2ee6fc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE700u;
        goto label_2ee700;
    }
    ctx->pc = 0x2EE6F8u;
    SET_GPR_U32(ctx, 31, 0x2EE700u);
    ctx->pc = 0x2EE6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE6F8u;
    // 0x2ee6fc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D0u, 0x2EE6F8u, 0x2EE700u)) {
        return;
    }
    ctx->pc = 0x2EE700u;
label_2ee700:
    // 0x2ee700: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2ee700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2ee704:
    // 0x2ee704: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2ee704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ee708:
    // 0x2ee708: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_2ee70c:
    if (ctx->pc == 0x2EE70Cu) {
        ctx->pc = 0x2EE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE708u;
        // 0x2ee70c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE710u;
        goto label_2ee710;
    }
    ctx->pc = 0x2EE708u;
    {
        const bool branch_taken_0x2ee708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE708u;
        // 0x2ee70c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee708) {
            ctx->pc = 0x2EE73Cu;
            goto label_2ee73c;
        }
    }
    ctx->pc = 0x2EE710u;
label_2ee710:
    // 0x2ee710: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ee710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee714:
    // 0x2ee714: 0x0  nop
    ctx->pc = 0x2ee714u;
    // NOP
label_2ee718:
    // 0x2ee718: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ee718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ee71c:
    // 0x2ee71c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2ee71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2ee720:
    // 0x2ee720: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x2ee720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2ee724:
    // 0x2ee724: 0x40f809  jalr        $v0
label_2ee728:
    if (ctx->pc == 0x2EE728u) {
        ctx->pc = 0x2EE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE724u;
        // 0x2ee728: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE72Cu;
        goto label_2ee72c;
    }
    ctx->pc = 0x2EE724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE72Cu);
        ctx->pc = 0x2EE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE724u;
        // 0x2ee728: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE724u, 0x2EE72Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE72Cu;
label_2ee72c:
    // 0x2ee72c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ee72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2ee730:
    // 0x2ee730: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2ee730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2ee734:
    // 0x2ee734: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
label_2ee738:
    if (ctx->pc == 0x2EE738u) {
        ctx->pc = 0x2EE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE734u;
        // 0x2ee738: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE73Cu;
        goto label_2ee73c;
    }
    ctx->pc = 0x2EE734u;
    {
        const bool branch_taken_0x2ee734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee734) {
            ctx->pc = 0x2EE738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE734u;
            // 0x2ee738: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee718;
        }
    }
    ctx->pc = 0x2EE73Cu;
label_2ee73c:
    // 0x2ee73c: 0xc092932  jal         func_24A4C8
label_2ee740:
    if (ctx->pc == 0x2EE740u) {
        ctx->pc = 0x2EE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE73Cu;
        // 0x2ee740: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE744u;
        goto label_2ee744;
    }
    ctx->pc = 0x2EE73Cu;
    SET_GPR_U32(ctx, 31, 0x2EE744u);
    ctx->pc = 0x2EE740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE73Cu;
    // 0x2ee740: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x2EE73Cu, 0x2EE744u)) {
        return;
    }
    ctx->pc = 0x2EE744u;
label_2ee744:
    // 0x2ee744: 0x8fc3010c  lw          $v1, 0x10C($fp)
    ctx->pc = 0x2ee744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_2ee748:
    // 0x2ee748: 0x60f809  jalr        $v1
label_2ee74c:
    if (ctx->pc == 0x2EE74Cu) {
        ctx->pc = 0x2EE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE748u;
        // 0x2ee74c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE750u;
        goto label_2ee750;
    }
    ctx->pc = 0x2EE748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EE750u);
        ctx->pc = 0x2EE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE748u;
        // 0x2ee74c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE748u, 0x2EE750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE750u;
label_2ee750:
    // 0x2ee750: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2ee754:
    if (ctx->pc == 0x2EE754u) {
        ctx->pc = 0x2EE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE750u;
        // 0x2ee754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE758u;
        goto label_2ee758;
    }
    ctx->pc = 0x2EE750u;
    {
        const bool branch_taken_0x2ee750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE750u;
        // 0x2ee754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee750) {
            ctx->pc = 0x2EE7CCu;
            goto label_2ee7cc;
        }
    }
    ctx->pc = 0x2EE758u;
label_2ee758:
    // 0x2ee758: 0xc09294c  jal         func_24A530
label_2ee75c:
    if (ctx->pc == 0x2EE75Cu) {
        ctx->pc = 0x2EE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE758u;
        // 0x2ee75c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE760u;
        goto label_2ee760;
    }
    ctx->pc = 0x2EE758u;
    SET_GPR_U32(ctx, 31, 0x2EE760u);
    ctx->pc = 0x2EE75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE758u;
    // 0x2ee75c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x2EE758u, 0x2EE760u)) {
        return;
    }
    ctx->pc = 0x2EE760u;
label_2ee760:
    // 0x2ee760: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2ee760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ee764:
    // 0x2ee764: 0xc09296e  jal         func_24A5B8
label_2ee768:
    if (ctx->pc == 0x2EE768u) {
        ctx->pc = 0x2EE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE764u;
        // 0x2ee768: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE76Cu;
        goto label_2ee76c;
    }
    ctx->pc = 0x2EE764u;
    SET_GPR_U32(ctx, 31, 0x2EE76Cu);
    ctx->pc = 0x2EE768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE764u;
    // 0x2ee768: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5B8u, 0x2EE764u, 0x2EE76Cu)) {
        return;
    }
    ctx->pc = 0x2EE76Cu;
label_2ee76c:
    // 0x2ee76c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ee76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ee770:
    // 0x2ee770: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ee770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee774:
    // 0x2ee774: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2ee774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ee778:
    // 0x2ee778: 0xc092926  jal         func_24A498
label_2ee77c:
    if (ctx->pc == 0x2EE77Cu) {
        ctx->pc = 0x2EE77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE778u;
        // 0x2ee77c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE780u;
        goto label_2ee780;
    }
    ctx->pc = 0x2EE778u;
    SET_GPR_U32(ctx, 31, 0x2EE780u);
    ctx->pc = 0x2EE77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE778u;
    // 0x2ee77c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A498u, 0x2EE778u, 0x2EE780u)) {
        return;
    }
    ctx->pc = 0x2EE780u;
label_2ee780:
    // 0x2ee780: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_2ee784:
    if (ctx->pc == 0x2EE784u) {
        ctx->pc = 0x2EE788u;
        goto label_2ee788;
    }
    ctx->pc = 0x2EE780u;
    {
        const bool branch_taken_0x2ee780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee780) {
            ctx->pc = 0x2EE6ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee6ec;
        }
    }
    ctx->pc = 0x2EE788u;
label_2ee788:
    // 0x2ee788: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2ee788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ee78c:
    // 0x2ee78c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2ee78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ee790:
    // 0x2ee790: 0xc09289c  jal         func_24A270
label_2ee794:
    if (ctx->pc == 0x2EE794u) {
        ctx->pc = 0x2EE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE790u;
        // 0x2ee794: 0xb52825  or          $a1, $a1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE798u;
        goto label_2ee798;
    }
    ctx->pc = 0x2EE790u;
    SET_GPR_U32(ctx, 31, 0x2EE798u);
    ctx->pc = 0x2EE794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE790u;
    // 0x2ee794: 0xb52825  or          $a1, $a1, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x2EE790u, 0x2EE798u)) {
        return;
    }
    ctx->pc = 0x2EE798u;
label_2ee798:
    // 0x2ee798: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ee798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ee79c:
    // 0x2ee79c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2ee79cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2ee7a0:
    // 0x2ee7a0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2ee7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2ee7a4:
    // 0x2ee7a4: 0x40f809  jalr        $v0
label_2ee7a8:
    if (ctx->pc == 0x2EE7A8u) {
        ctx->pc = 0x2EE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7A4u;
        // 0x2ee7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE7ACu;
        goto label_2ee7ac;
    }
    ctx->pc = 0x2EE7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE7ACu);
        ctx->pc = 0x2EE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7A4u;
        // 0x2ee7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE7A4u, 0x2EE7ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE7ACu;
label_2ee7ac:
    // 0x2ee7ac: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2ee7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2ee7b0:
    // 0x2ee7b0: 0x40f809  jalr        $v0
label_2ee7b4:
    if (ctx->pc == 0x2EE7B4u) {
        ctx->pc = 0x2EE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7B0u;
        // 0x2ee7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE7B8u;
        goto label_2ee7b8;
    }
    ctx->pc = 0x2EE7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EE7B8u);
        ctx->pc = 0x2EE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7B0u;
        // 0x2ee7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE7B0u, 0x2EE7B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EE7B8u;
label_2ee7b8:
    // 0x2ee7b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2ee7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2ee7bc:
    // 0x2ee7bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ee7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2ee7c0:
    // 0x2ee7c0: 0x1473ff85  bne         $v1, $s3, . + 4 + (-0x7B << 2)
label_2ee7c4:
    if (ctx->pc == 0x2EE7C4u) {
        ctx->pc = 0x2EE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7C0u;
        // 0x2ee7c4: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE7C8u;
        goto label_2ee7c8;
    }
    ctx->pc = 0x2EE7C0u;
    {
        const bool branch_taken_0x2ee7c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x2EE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7C0u;
        // 0x2ee7c4: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7c0) {
            ctx->pc = 0x2EE5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee5d8;
        }
    }
    ctx->pc = 0x2EE7C8u;
label_2ee7c8:
    // 0x2ee7c8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ee7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ee7cc:
    // 0x2ee7cc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2ee7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ee7d0:
    // 0x2ee7d0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2ee7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ee7d4:
    // 0x2ee7d4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2ee7d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ee7d8:
    // 0x2ee7d8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2ee7d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ee7dc:
    // 0x2ee7dc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2ee7dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ee7e0:
    // 0x2ee7e0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2ee7e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ee7e4:
    // 0x2ee7e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ee7e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ee7e8:
    // 0x2ee7e8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2ee7e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ee7ec:
    // 0x2ee7ec: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2ee7ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ee7f0:
    // 0x2ee7f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ee7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ee7f4:
    // 0x2ee7f4: 0x3e00008  jr          $ra
label_2ee7f8:
    if (ctx->pc == 0x2EE7F8u) {
        ctx->pc = 0x2EE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7F4u;
        // 0x2ee7f8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EE7FCu;
        goto label_2ee7fc;
    }
    ctx->pc = 0x2EE7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7F4u;
        // 0x2ee7f8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE7FCu;
label_2ee7fc:
    // 0x2ee7fc: 0x0  nop
    ctx->pc = 0x2ee7fcu;
    // NOP
label_2ee800:
    // 0x2ee800: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2ee800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2ee804:
    // 0x2ee804: 0x0  nop
    ctx->pc = 0x2ee804u;
    // NOP
    ctx->pc = 0x2ee808u;
}
