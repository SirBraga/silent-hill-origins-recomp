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

// Function: sub_0025F538
// Address: 0x25f538 - 0x25f7a8
void sub_0025F538_0x25f538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F538_0x25f538");
#endif

    switch (ctx->pc) {
        case 0x25f538u: goto label_25f538;
        case 0x25f53cu: goto label_25f53c;
        case 0x25f540u: goto label_25f540;
        case 0x25f544u: goto label_25f544;
        case 0x25f548u: goto label_25f548;
        case 0x25f54cu: goto label_25f54c;
        case 0x25f550u: goto label_25f550;
        case 0x25f554u: goto label_25f554;
        case 0x25f558u: goto label_25f558;
        case 0x25f55cu: goto label_25f55c;
        case 0x25f560u: goto label_25f560;
        case 0x25f564u: goto label_25f564;
        case 0x25f568u: goto label_25f568;
        case 0x25f56cu: goto label_25f56c;
        case 0x25f570u: goto label_25f570;
        case 0x25f574u: goto label_25f574;
        case 0x25f578u: goto label_25f578;
        case 0x25f57cu: goto label_25f57c;
        case 0x25f580u: goto label_25f580;
        case 0x25f584u: goto label_25f584;
        case 0x25f588u: goto label_25f588;
        case 0x25f58cu: goto label_25f58c;
        case 0x25f590u: goto label_25f590;
        case 0x25f594u: goto label_25f594;
        case 0x25f598u: goto label_25f598;
        case 0x25f59cu: goto label_25f59c;
        case 0x25f5a0u: goto label_25f5a0;
        case 0x25f5a4u: goto label_25f5a4;
        case 0x25f5a8u: goto label_25f5a8;
        case 0x25f5acu: goto label_25f5ac;
        case 0x25f5b0u: goto label_25f5b0;
        case 0x25f5b4u: goto label_25f5b4;
        case 0x25f5b8u: goto label_25f5b8;
        case 0x25f5bcu: goto label_25f5bc;
        case 0x25f5c0u: goto label_25f5c0;
        case 0x25f5c4u: goto label_25f5c4;
        case 0x25f5c8u: goto label_25f5c8;
        case 0x25f5ccu: goto label_25f5cc;
        case 0x25f5d0u: goto label_25f5d0;
        case 0x25f5d4u: goto label_25f5d4;
        case 0x25f5d8u: goto label_25f5d8;
        case 0x25f5dcu: goto label_25f5dc;
        case 0x25f5e0u: goto label_25f5e0;
        case 0x25f5e4u: goto label_25f5e4;
        case 0x25f5e8u: goto label_25f5e8;
        case 0x25f5ecu: goto label_25f5ec;
        case 0x25f5f0u: goto label_25f5f0;
        case 0x25f5f4u: goto label_25f5f4;
        case 0x25f5f8u: goto label_25f5f8;
        case 0x25f5fcu: goto label_25f5fc;
        case 0x25f600u: goto label_25f600;
        case 0x25f604u: goto label_25f604;
        case 0x25f608u: goto label_25f608;
        case 0x25f60cu: goto label_25f60c;
        case 0x25f610u: goto label_25f610;
        case 0x25f614u: goto label_25f614;
        case 0x25f618u: goto label_25f618;
        case 0x25f61cu: goto label_25f61c;
        case 0x25f620u: goto label_25f620;
        case 0x25f624u: goto label_25f624;
        case 0x25f628u: goto label_25f628;
        case 0x25f62cu: goto label_25f62c;
        case 0x25f630u: goto label_25f630;
        case 0x25f634u: goto label_25f634;
        case 0x25f638u: goto label_25f638;
        case 0x25f63cu: goto label_25f63c;
        case 0x25f640u: goto label_25f640;
        case 0x25f644u: goto label_25f644;
        case 0x25f648u: goto label_25f648;
        case 0x25f64cu: goto label_25f64c;
        case 0x25f650u: goto label_25f650;
        case 0x25f654u: goto label_25f654;
        case 0x25f658u: goto label_25f658;
        case 0x25f65cu: goto label_25f65c;
        case 0x25f660u: goto label_25f660;
        case 0x25f664u: goto label_25f664;
        case 0x25f668u: goto label_25f668;
        case 0x25f66cu: goto label_25f66c;
        case 0x25f670u: goto label_25f670;
        case 0x25f674u: goto label_25f674;
        case 0x25f678u: goto label_25f678;
        case 0x25f67cu: goto label_25f67c;
        case 0x25f680u: goto label_25f680;
        case 0x25f684u: goto label_25f684;
        case 0x25f688u: goto label_25f688;
        case 0x25f68cu: goto label_25f68c;
        case 0x25f690u: goto label_25f690;
        case 0x25f694u: goto label_25f694;
        case 0x25f698u: goto label_25f698;
        case 0x25f69cu: goto label_25f69c;
        case 0x25f6a0u: goto label_25f6a0;
        case 0x25f6a4u: goto label_25f6a4;
        case 0x25f6a8u: goto label_25f6a8;
        case 0x25f6acu: goto label_25f6ac;
        case 0x25f6b0u: goto label_25f6b0;
        case 0x25f6b4u: goto label_25f6b4;
        case 0x25f6b8u: goto label_25f6b8;
        case 0x25f6bcu: goto label_25f6bc;
        case 0x25f6c0u: goto label_25f6c0;
        case 0x25f6c4u: goto label_25f6c4;
        case 0x25f6c8u: goto label_25f6c8;
        case 0x25f6ccu: goto label_25f6cc;
        case 0x25f6d0u: goto label_25f6d0;
        case 0x25f6d4u: goto label_25f6d4;
        case 0x25f6d8u: goto label_25f6d8;
        case 0x25f6dcu: goto label_25f6dc;
        case 0x25f6e0u: goto label_25f6e0;
        case 0x25f6e4u: goto label_25f6e4;
        case 0x25f6e8u: goto label_25f6e8;
        case 0x25f6ecu: goto label_25f6ec;
        case 0x25f6f0u: goto label_25f6f0;
        case 0x25f6f4u: goto label_25f6f4;
        case 0x25f6f8u: goto label_25f6f8;
        case 0x25f6fcu: goto label_25f6fc;
        case 0x25f700u: goto label_25f700;
        case 0x25f704u: goto label_25f704;
        case 0x25f708u: goto label_25f708;
        case 0x25f70cu: goto label_25f70c;
        case 0x25f710u: goto label_25f710;
        case 0x25f714u: goto label_25f714;
        case 0x25f718u: goto label_25f718;
        case 0x25f71cu: goto label_25f71c;
        case 0x25f720u: goto label_25f720;
        case 0x25f724u: goto label_25f724;
        case 0x25f728u: goto label_25f728;
        case 0x25f72cu: goto label_25f72c;
        case 0x25f730u: goto label_25f730;
        case 0x25f734u: goto label_25f734;
        case 0x25f738u: goto label_25f738;
        case 0x25f73cu: goto label_25f73c;
        case 0x25f740u: goto label_25f740;
        case 0x25f744u: goto label_25f744;
        case 0x25f748u: goto label_25f748;
        case 0x25f74cu: goto label_25f74c;
        case 0x25f750u: goto label_25f750;
        case 0x25f754u: goto label_25f754;
        case 0x25f758u: goto label_25f758;
        case 0x25f75cu: goto label_25f75c;
        case 0x25f760u: goto label_25f760;
        case 0x25f764u: goto label_25f764;
        case 0x25f768u: goto label_25f768;
        case 0x25f76cu: goto label_25f76c;
        case 0x25f770u: goto label_25f770;
        case 0x25f774u: goto label_25f774;
        case 0x25f778u: goto label_25f778;
        case 0x25f77cu: goto label_25f77c;
        case 0x25f780u: goto label_25f780;
        case 0x25f784u: goto label_25f784;
        case 0x25f788u: goto label_25f788;
        case 0x25f78cu: goto label_25f78c;
        case 0x25f790u: goto label_25f790;
        case 0x25f794u: goto label_25f794;
        case 0x25f798u: goto label_25f798;
        case 0x25f79cu: goto label_25f79c;
        case 0x25f7a0u: goto label_25f7a0;
        case 0x25f7a4u: goto label_25f7a4;
        default: break;
    }

    ctx->pc = 0x25f538u;

label_25f538:
    // 0x25f538: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x25f538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_25f53c:
    // 0x25f53c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25f53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f540:
    // 0x25f540: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x25f540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_25f544:
    // 0x25f544: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x25f544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25f548:
    // 0x25f548: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x25f548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_25f54c:
    // 0x25f54c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25f54cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25f550:
    // 0x25f550: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25f550u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25f554:
    // 0x25f554: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x25f554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_25f558:
    // 0x25f558: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x25f558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_25f55c:
    // 0x25f55c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x25f55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_25f560:
    // 0x25f560: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x25f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_25f564:
    // 0x25f564: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x25f564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_25f568:
    // 0x25f568: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x25f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_25f56c:
    // 0x25f56c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x25f56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_25f570:
    // 0x25f570: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25f570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25f574:
    // 0x25f574: 0xc09270a  jal         func_249C28
label_25f578:
    if (ctx->pc == 0x25F578u) {
        ctx->pc = 0x25F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F574u;
        // 0x25f578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F57Cu;
        goto label_25f57c;
    }
    ctx->pc = 0x25F574u;
    SET_GPR_U32(ctx, 31, 0x25F57Cu);
    ctx->pc = 0x25F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F574u;
    // 0x25f578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x25F574u, 0x25F57Cu)) {
        return;
    }
    ctx->pc = 0x25F57Cu;
label_25f57c:
    // 0x25f57c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_25f580:
    if (ctx->pc == 0x25F580u) {
        ctx->pc = 0x25F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F57Cu;
        // 0x25f580: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F584u;
        goto label_25f584;
    }
    ctx->pc = 0x25F57Cu;
    {
        const bool branch_taken_0x25f57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F57Cu;
        // 0x25f580: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f57c) {
            ctx->pc = 0x25F5C0u;
            goto label_25f5c0;
        }
    }
    ctx->pc = 0x25F584u;
label_25f584:
    // 0x25f584: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x25f584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_25f588:
    // 0x25f588: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x25f588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_25f58c:
    // 0x25f58c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25f590:
    // 0x25f590: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x25f590u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_25f594:
    // 0x25f594: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_25f598:
    if (ctx->pc == 0x25F598u) {
        ctx->pc = 0x25F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F594u;
        // 0x25f598: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F59Cu;
        goto label_25f59c;
    }
    ctx->pc = 0x25F594u;
    {
        const bool branch_taken_0x25f594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F594u;
        // 0x25f598: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f594) {
            ctx->pc = 0x25F5C8u;
            goto label_25f5c8;
        }
    }
    ctx->pc = 0x25F59Cu;
label_25f59c:
    // 0x25f59c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25f5a0:
    // 0x25f5a0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_25f5a4:
    // 0x25f5a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x25f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_25f5a8:
    // 0x25f5a8: 0xc092848  jal         func_24A120
label_25f5ac:
    if (ctx->pc == 0x25F5ACu) {
        ctx->pc = 0x25F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5A8u;
        // 0x25f5ac: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F5B0u;
        goto label_25f5b0;
    }
    ctx->pc = 0x25F5A8u;
    SET_GPR_U32(ctx, 31, 0x25F5B0u);
    ctx->pc = 0x25F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5A8u;
    // 0x25f5ac: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x25F5A8u, 0x25F5B0u)) {
        return;
    }
    ctx->pc = 0x25F5B0u;
label_25f5b0:
    // 0x25f5b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25f5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25f5b4:
    // 0x25f5b4: 0xc09281a  jal         func_24A068
label_25f5b8:
    if (ctx->pc == 0x25F5B8u) {
        ctx->pc = 0x25F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5B4u;
        // 0x25f5b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F5BCu;
        goto label_25f5bc;
    }
    ctx->pc = 0x25F5B4u;
    SET_GPR_U32(ctx, 31, 0x25F5BCu);
    ctx->pc = 0x25F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5B4u;
    // 0x25f5b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25F5B4u, 0x25F5BCu)) {
        return;
    }
    ctx->pc = 0x25F5BCu;
label_25f5bc:
    // 0x25f5bc: 0x0  nop
    ctx->pc = 0x25f5bcu;
    // NOP
label_25f5c0:
    // 0x25f5c0: 0x1000006d  b           . + 4 + (0x6D << 2)
label_25f5c4:
    if (ctx->pc == 0x25F5C4u) {
        ctx->pc = 0x25F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5C0u;
        // 0x25f5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F5C8u;
        goto label_25f5c8;
    }
    ctx->pc = 0x25F5C0u;
    {
        const bool branch_taken_0x25f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5C0u;
        // 0x25f5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5c0) {
            ctx->pc = 0x25F778u;
            goto label_25f778;
        }
    }
    ctx->pc = 0x25F5C8u;
label_25f5c8:
    // 0x25f5c8: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x25f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_25f5cc:
    // 0x25f5cc: 0xc093546  jal         func_24D518
label_25f5d0:
    if (ctx->pc == 0x25F5D0u) {
        ctx->pc = 0x25F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5CCu;
        // 0x25f5d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F5D4u;
        goto label_25f5d4;
    }
    ctx->pc = 0x25F5CCu;
    SET_GPR_U32(ctx, 31, 0x25F5D4u);
    ctx->pc = 0x25F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5CCu;
    // 0x25f5d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x25F5CCu, 0x25F5D4u)) {
        return;
    }
    ctx->pc = 0x25F5D4u;
label_25f5d4:
    // 0x25f5d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25f5d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f5d8:
    // 0x25f5d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25f5dc:
    // 0x25f5dc: 0x14620066  bne         $v1, $v0, . + 4 + (0x66 << 2)
label_25f5e0:
    if (ctx->pc == 0x25F5E0u) {
        ctx->pc = 0x25F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5DCu;
        // 0x25f5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F5E4u;
        goto label_25f5e4;
    }
    ctx->pc = 0x25F5DCu;
    {
        const bool branch_taken_0x25f5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5DCu;
        // 0x25f5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5dc) {
            ctx->pc = 0x25F778u;
            goto label_25f778;
        }
    }
    ctx->pc = 0x25F5E4u;
label_25f5e4:
    // 0x25f5e4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x25f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_25f5e8:
    // 0x25f5e8: 0x14430063  bne         $v0, $v1, . + 4 + (0x63 << 2)
label_25f5ec:
    if (ctx->pc == 0x25F5ECu) {
        ctx->pc = 0x25F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5E8u;
        // 0x25f5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F5F0u;
        goto label_25f5f0;
    }
    ctx->pc = 0x25F5E8u;
    {
        const bool branch_taken_0x25f5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5E8u;
        // 0x25f5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5e8) {
            ctx->pc = 0x25F778u;
            goto label_25f778;
        }
    }
    ctx->pc = 0x25F5F0u;
label_25f5f0:
    // 0x25f5f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_25f5f4:
    // 0x25f5f4: 0x8c4241b0  lw          $v0, 0x41B0($v0)
    ctx->pc = 0x25f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16816)));
label_25f5f8:
    // 0x25f5f8: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x25f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_25f5fc:
    // 0x25f5fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25f600:
    // 0x25f600: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_25f604:
    if (ctx->pc == 0x25F604u) {
        ctx->pc = 0x25F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F600u;
        // 0x25f604: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F608u;
        goto label_25f608;
    }
    ctx->pc = 0x25F600u;
    {
        const bool branch_taken_0x25f600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F600u;
        // 0x25f604: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f600) {
            ctx->pc = 0x25F620u;
            goto label_25f620;
        }
    }
    ctx->pc = 0x25F608u;
label_25f608:
    // 0x25f608: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f60c:
    // 0x25f60c: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x25f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_25f610:
    // 0x25f610: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_25f614:
    if (ctx->pc == 0x25F614u) {
        ctx->pc = 0x25F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F610u;
        // 0x25f614: 0x8ea50024  lw          $a1, 0x24($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F618u;
        goto label_25f618;
    }
    ctx->pc = 0x25F610u;
    {
        const bool branch_taken_0x25f610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f610) {
            ctx->pc = 0x25F614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F610u;
            // 0x25f614: 0x8ea50024  lw          $a1, 0x24($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F624u;
            goto label_25f624;
        }
    }
    ctx->pc = 0x25F618u;
label_25f618:
    // 0x25f618: 0x10000004  b           . + 4 + (0x4 << 2)
label_25f61c:
    if (ctx->pc == 0x25F61Cu) {
        ctx->pc = 0x25F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F618u;
        // 0x25f61c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F620u;
        goto label_25f620;
    }
    ctx->pc = 0x25F618u;
    {
        const bool branch_taken_0x25f618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F618u;
        // 0x25f61c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f618) {
            ctx->pc = 0x25F62Cu;
            goto label_25f62c;
        }
    }
    ctx->pc = 0x25F620u;
label_25f620:
    // 0x25f620: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x25f620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_25f624:
    // 0x25f624: 0xc0993a4  jal         func_264E90
label_25f628:
    if (ctx->pc == 0x25F628u) {
        ctx->pc = 0x25F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F624u;
        // 0x25f628: 0x2a62021  addu        $a0, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F62Cu;
        goto label_25f62c;
    }
    ctx->pc = 0x25F624u;
    SET_GPR_U32(ctx, 31, 0x25F62Cu);
    ctx->pc = 0x25F628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F624u;
    // 0x25f628: 0x2a62021  addu        $a0, $s5, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264E90u, 0x25F624u, 0x25F62Cu)) {
        return;
    }
    ctx->pc = 0x25F62Cu;
label_25f62c:
    // 0x25f62c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25f62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25f630:
    // 0x25f630: 0x8cb70000  lw          $s7, 0x0($a1)
    ctx->pc = 0x25f630u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25f634:
    // 0x25f634: 0x1ae0004f  blez        $s7, . + 4 + (0x4F << 2)
label_25f638:
    if (ctx->pc == 0x25F638u) {
        ctx->pc = 0x25F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F634u;
        // 0x25f638: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F63Cu;
        goto label_25f63c;
    }
    ctx->pc = 0x25F634u;
    {
        const bool branch_taken_0x25f634 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x25F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F634u;
        // 0x25f638: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f634) {
            ctx->pc = 0x25F774u;
            goto label_25f774;
        }
    }
    ctx->pc = 0x25F63Cu;
label_25f63c:
    // 0x25f63c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x25f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_25f640:
    // 0x25f640: 0x24b20004  addiu       $s2, $a1, 0x4
    ctx->pc = 0x25f640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_25f644:
    // 0x25f644: 0x247e3888  addiu       $fp, $v1, 0x3888
    ctx->pc = 0x25f644u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 14472));
label_25f648:
    // 0x25f648: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25f648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25f64c:
    // 0x25f64c: 0x0  nop
    ctx->pc = 0x25f64cu;
    // NOP
label_25f650:
    // 0x25f650: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x25f650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_25f654:
    // 0x25f654: 0xc093546  jal         func_24D518
label_25f658:
    if (ctx->pc == 0x25F658u) {
        ctx->pc = 0x25F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F654u;
        // 0x25f658: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F65Cu;
        goto label_25f65c;
    }
    ctx->pc = 0x25F654u;
    SET_GPR_U32(ctx, 31, 0x25F65Cu);
    ctx->pc = 0x25F658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F654u;
    // 0x25f658: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x25F654u, 0x25F65Cu)) {
        return;
    }
    ctx->pc = 0x25F65Cu;
label_25f65c:
    // 0x25f65c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25f65cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f660:
    // 0x25f660: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25f660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25f664:
    // 0x25f664: 0x1662ffd6  bne         $s3, $v0, . + 4 + (-0x2A << 2)
label_25f668:
    if (ctx->pc == 0x25F668u) {
        ctx->pc = 0x25F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F664u;
        // 0x25f668: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F66Cu;
        goto label_25f66c;
    }
    ctx->pc = 0x25F664u;
    {
        const bool branch_taken_0x25f664 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F664u;
        // 0x25f668: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f664) {
            ctx->pc = 0x25F5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f5c0;
        }
    }
    ctx->pc = 0x25F66Cu;
label_25f66c:
    // 0x25f66c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_25f670:
    // 0x25f670: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25f670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25f674:
    // 0x25f674: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25f674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25f678:
    // 0x25f678: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x25f678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_25f67c:
    // 0x25f67c: 0x34a5050d  ori         $a1, $a1, 0x50D
    ctx->pc = 0x25f67cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
label_25f680:
    // 0x25f680: 0x40f809  jalr        $v0
label_25f684:
    if (ctx->pc == 0x25F684u) {
        ctx->pc = 0x25F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F680u;
        // 0x25f684: 0x24840247  addiu       $a0, $a0, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 583));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F688u;
        goto label_25f688;
    }
    ctx->pc = 0x25F680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25F688u);
        ctx->pc = 0x25F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F680u;
        // 0x25f684: 0x24840247  addiu       $a0, $a0, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 583));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F680u, 0x25F688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F688u;
label_25f688:
    // 0x25f688: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
label_25f68c:
    if (ctx->pc == 0x25F68Cu) {
        ctx->pc = 0x25F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F688u;
        // 0x25f68c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F690u;
        goto label_25f690;
    }
    ctx->pc = 0x25F688u;
    {
        const bool branch_taken_0x25f688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F688u;
        // 0x25f68c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f688) {
            ctx->pc = 0x25F5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f5c0;
        }
    }
    ctx->pc = 0x25F690u;
label_25f690:
    // 0x25f690: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x25f690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_25f694:
    // 0x25f694: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25f694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25f698:
    // 0x25f698: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x25f698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_25f69c:
    // 0x25f69c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x25f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25f6a0:
    // 0x25f6a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25f6a4:
    // 0x25f6a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_25f6a8:
    // 0x25f6a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25f6ac:
    // 0x25f6ac: 0xac75000c  sw          $s5, 0xC($v1)
    ctx->pc = 0x25f6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 21));
label_25f6b0:
    // 0x25f6b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_25f6b4:
    // 0x25f6b4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x25f6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25f6b8:
    // 0x25f6b8: 0x2442022f  addiu       $v0, $v0, 0x22F
    ctx->pc = 0x25f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 559));
label_25f6bc:
    // 0x25f6bc: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x25f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
label_25f6c0:
    // 0x25f6c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25f6c4:
    // 0x25f6c4: 0xac720010  sw          $s2, 0x10($v1)
    ctx->pc = 0x25f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
label_25f6c8:
    // 0x25f6c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25f6cc:
    // 0x25f6cc: 0xac5e0014  sw          $fp, 0x14($v0)
    ctx->pc = 0x25f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 30));
label_25f6d0:
    // 0x25f6d0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x25f6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25f6d4:
    // 0x25f6d4: 0xc093546  jal         func_24D518
label_25f6d8:
    if (ctx->pc == 0x25F6D8u) {
        ctx->pc = 0x25F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6D4u;
        // 0x25f6d8: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F6DCu;
        goto label_25f6dc;
    }
    ctx->pc = 0x25F6D4u;
    SET_GPR_U32(ctx, 31, 0x25F6DCu);
    ctx->pc = 0x25F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6D4u;
    // 0x25f6d8: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x25F6D4u, 0x25F6DCu)) {
        return;
    }
    ctx->pc = 0x25F6DCu;
label_25f6dc:
    // 0x25f6dc: 0x1453ffb8  bne         $v0, $s3, . + 4 + (-0x48 << 2)
label_25f6e0:
    if (ctx->pc == 0x25F6E0u) {
        ctx->pc = 0x25F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6DCu;
        // 0x25f6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F6E4u;
        goto label_25f6e4;
    }
    ctx->pc = 0x25F6DCu;
    {
        const bool branch_taken_0x25f6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x25F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6DCu;
        // 0x25f6e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6dc) {
            ctx->pc = 0x25F5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f5c0;
        }
    }
    ctx->pc = 0x25F6E4u;
label_25f6e4:
    // 0x25f6e4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x25f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_25f6e8:
    // 0x25f6e8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x25f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_25f6ec:
    // 0x25f6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25f6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f6f0:
    // 0x25f6f0: 0xc0c493d  jal         func_3124F4
label_25f6f4:
    if (ctx->pc == 0x25F6F4u) {
        ctx->pc = 0x25F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6F0u;
        // 0x25f6f4: 0x240601b0  addiu       $a2, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F6F8u;
        goto label_25f6f8;
    }
    ctx->pc = 0x25F6F0u;
    SET_GPR_U32(ctx, 31, 0x25F6F8u);
    ctx->pc = 0x25F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6F0u;
    // 0x25f6f4: 0x240601b0  addiu       $a2, $zero, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x25F6F0u, 0x25F6F8u)) {
        return;
    }
    ctx->pc = 0x25F6F8u;
label_25f6f8:
    // 0x25f6f8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x25f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_25f6fc:
    // 0x25f6fc: 0x26020207  addiu       $v0, $s0, 0x207
    ctx->pc = 0x25f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 519));
label_25f700:
    // 0x25f700: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x25f700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_25f704:
    // 0x25f704: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x25f704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25f708:
    // 0x25f708: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x25f708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_25f70c:
    // 0x25f70c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x25f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_25f710:
    // 0x25f710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25f714:
    if (ctx->pc == 0x25F714u) {
        ctx->pc = 0x25F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F710u;
        // 0x25f714: 0x2463007f  addiu       $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F718u;
        goto label_25f718;
    }
    ctx->pc = 0x25F710u;
    {
        const bool branch_taken_0x25f710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F710u;
        // 0x25f714: 0x2463007f  addiu       $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f710) {
            ctx->pc = 0x25F728u;
            goto label_25f728;
        }
    }
    ctx->pc = 0x25F718u;
label_25f718:
    // 0x25f718: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25f718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_25f71c:
    // 0x25f71c: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x25f71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_25f720:
    // 0x25f720: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25f720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_25f724:
    // 0x25f724: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x25f724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_25f728:
    // 0x25f728: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x25f728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_25f72c:
    // 0x25f72c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25f72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25f730:
    // 0x25f730: 0xc093546  jal         func_24D518
label_25f734:
    if (ctx->pc == 0x25F734u) {
        ctx->pc = 0x25F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F730u;
        // 0x25f734: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F738u;
        goto label_25f738;
    }
    ctx->pc = 0x25F730u;
    SET_GPR_U32(ctx, 31, 0x25F738u);
    ctx->pc = 0x25F734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F730u;
    // 0x25f734: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x25F730u, 0x25F738u)) {
        return;
    }
    ctx->pc = 0x25F738u;
label_25f738:
    // 0x25f738: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x25f738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_25f73c:
    // 0x25f73c: 0x1443ffa0  bne         $v0, $v1, . + 4 + (-0x60 << 2)
label_25f740:
    if (ctx->pc == 0x25F740u) {
        ctx->pc = 0x25F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F73Cu;
        // 0x25f740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F744u;
        goto label_25f744;
    }
    ctx->pc = 0x25F73Cu;
    {
        const bool branch_taken_0x25f73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F73Cu;
        // 0x25f740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f73c) {
            ctx->pc = 0x25F5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f5c0;
        }
    }
    ctx->pc = 0x25F744u;
label_25f744:
    // 0x25f744: 0xc097cc4  jal         func_25F310
label_25f748:
    if (ctx->pc == 0x25F748u) {
        ctx->pc = 0x25F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F744u;
        // 0x25f748: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F74Cu;
        goto label_25f74c;
    }
    ctx->pc = 0x25F744u;
    SET_GPR_U32(ctx, 31, 0x25F74Cu);
    ctx->pc = 0x25F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F744u;
    // 0x25f748: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F310u, 0x25F744u, 0x25F74Cu)) {
        return;
    }
    ctx->pc = 0x25F74Cu;
label_25f74c:
    // 0x25f74c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x25f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25f750:
    // 0x25f750: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x25f750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_25f754:
    // 0x25f754: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x25f754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_25f758:
    // 0x25f758: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25f758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25f75c:
    // 0x25f75c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25f760:
    // 0x25f760: 0xc0c86e4  jal         func_321B90
label_25f764:
    if (ctx->pc == 0x25F764u) {
        ctx->pc = 0x25F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F760u;
        // 0x25f764: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F768u;
        goto label_25f768;
    }
    ctx->pc = 0x25F760u;
    SET_GPR_U32(ctx, 31, 0x25F768u);
    ctx->pc = 0x25F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F760u;
    // 0x25f764: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x25F760u, 0x25F768u)) {
        return;
    }
    ctx->pc = 0x25F768u;
label_25f768:
    // 0x25f768: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x25f768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_25f76c:
    // 0x25f76c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_25f770:
    if (ctx->pc == 0x25F770u) {
        ctx->pc = 0x25F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F76Cu;
        // 0x25f770: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F774u;
        goto label_25f774;
    }
    ctx->pc = 0x25F76Cu;
    {
        const bool branch_taken_0x25f76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F76Cu;
        // 0x25f770: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f76c) {
            ctx->pc = 0x25F650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f650;
        }
    }
    ctx->pc = 0x25F774u;
label_25f774:
    // 0x25f774: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x25f774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25f778:
    // 0x25f778: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x25f778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_25f77c:
    // 0x25f77c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x25f77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_25f780:
    // 0x25f780: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x25f780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_25f784:
    // 0x25f784: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x25f784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25f788:
    // 0x25f788: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x25f788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25f78c:
    // 0x25f78c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x25f78cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25f790:
    // 0x25f790: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x25f790u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25f794:
    // 0x25f794: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x25f794u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25f798:
    // 0x25f798: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x25f798u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25f79c:
    // 0x25f79c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25f79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25f7a0:
    // 0x25f7a0: 0x3e00008  jr          $ra
label_25f7a4:
    if (ctx->pc == 0x25F7A4u) {
        ctx->pc = 0x25F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7A0u;
        // 0x25f7a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F7A8u;
        goto label_fallthrough_0x25f7a0;
    }
    ctx->pc = 0x25F7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7A0u;
        // 0x25f7a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25f7a0:
    ctx->pc = 0x25F7A8u;
}
