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

// Function: sub_0026D5E0
// Address: 0x26d5e0 - 0x26dad0
void sub_0026D5E0_0x26d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D5E0_0x26d5e0");
#endif

    switch (ctx->pc) {
        case 0x26d668u: goto label_26d668;
        case 0x26d674u: goto label_26d674;
        case 0x26d68cu: goto label_26d68c;
        case 0x26d6b8u: goto label_26d6b8;
        case 0x26d724u: goto label_26d724;
        case 0x26d748u: goto label_26d748;
        case 0x26d760u: goto label_26d760;
        case 0x26d774u: goto label_26d774;
        case 0x26d788u: goto label_26d788;
        case 0x26d794u: goto label_26d794;
        case 0x26d7a8u: goto label_26d7a8;
        case 0x26d7bcu: goto label_26d7bc;
        case 0x26d7ccu: goto label_26d7cc;
        case 0x26d7d8u: goto label_26d7d8;
        case 0x26d7f4u: goto label_26d7f4;
        case 0x26d808u: goto label_26d808;
        case 0x26d81cu: goto label_26d81c;
        case 0x26d828u: goto label_26d828;
        case 0x26d834u: goto label_26d834;
        case 0x26d84cu: goto label_26d84c;
        case 0x26d858u: goto label_26d858;
        case 0x26d864u: goto label_26d864;
        case 0x26d874u: goto label_26d874;
        case 0x26d890u: goto label_26d890;
        case 0x26d8b0u: goto label_26d8b0;
        case 0x26d8c4u: goto label_26d8c4;
        case 0x26d8d0u: goto label_26d8d0;
        case 0x26d8e0u: goto label_26d8e0;
        case 0x26d8ecu: goto label_26d8ec;
        case 0x26d900u: goto label_26d900;
        case 0x26d910u: goto label_26d910;
        case 0x26d91cu: goto label_26d91c;
        case 0x26d92cu: goto label_26d92c;
        case 0x26d938u: goto label_26d938;
        case 0x26d948u: goto label_26d948;
        case 0x26d954u: goto label_26d954;
        case 0x26d960u: goto label_26d960;
        case 0x26d978u: goto label_26d978;
        case 0x26d984u: goto label_26d984;
        case 0x26d998u: goto label_26d998;
        case 0x26d9a4u: goto label_26d9a4;
        case 0x26d9b0u: goto label_26d9b0;
        case 0x26d9c8u: goto label_26d9c8;
        case 0x26d9d8u: goto label_26d9d8;
        case 0x26d9e4u: goto label_26d9e4;
        case 0x26d9f8u: goto label_26d9f8;
        case 0x26da04u: goto label_26da04;
        case 0x26da20u: goto label_26da20;
        case 0x26da2cu: goto label_26da2c;
        case 0x26da44u: goto label_26da44;
        case 0x26da54u: goto label_26da54;
        case 0x26da60u: goto label_26da60;
        case 0x26da74u: goto label_26da74;
        case 0x26da80u: goto label_26da80;
        case 0x26da8cu: goto label_26da8c;
        case 0x26da9cu: goto label_26da9c;
        default: break;
    }

    ctx->pc = 0x26d5e0u;

    // 0x26d5e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26d5e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26d5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d5e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26d5ec: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x26d5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x26d5f0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x26d5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x26d5f4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x26d5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x26d5f8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26d5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x26d5fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26d5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x26d600: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26d600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26d604: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26d608: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26d608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26d60c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26d60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d610: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x26d610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d614: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x26d614u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26d618: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x26d618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26d61c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x26d61cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x26d620: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x26d620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x26d624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26d624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26d628: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x26d628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x26d62c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26D62Cu;
    {
        const bool branch_taken_0x26d62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D62Cu;
        // 0x26d630: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d62c) {
            ctx->pc = 0x26D698u;
            goto label_26d698;
        }
    }
    ctx->pc = 0x26D634u;
    // 0x26d634: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x26d634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x26d638: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26d638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26d63c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x26d63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x26d640: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26d640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26d644: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D644u;
    {
        const bool branch_taken_0x26d644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D644u;
        // 0x26d648: 0x3c03006b  lui         $v1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d644) {
            ctx->pc = 0x26D658u;
            goto label_26d658;
        }
    }
    ctx->pc = 0x26D64Cu;
    // 0x26d64c: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x26D64Cu;
    {
        const bool branch_taken_0x26d64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D64Cu;
        // 0x26d650: 0xdc62bf90  ld          $v0, -0x4070($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294950800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d64c) {
            ctx->pc = 0x26DA9Cu;
            goto label_26da9c;
        }
    }
    ctx->pc = 0x26D654u;
    // 0x26d654: 0x0  nop
    ctx->pc = 0x26d654u;
    // NOP
label_26d658:
    // 0x26d658: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x26D658u;
    {
        const bool branch_taken_0x26d658 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x26D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D658u;
        // 0x26d65c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d658) {
            ctx->pc = 0x26D67Cu;
            goto label_26d67c;
        }
    }
    ctx->pc = 0x26D660u;
    // 0x26d660: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26D660u;
    SET_GPR_U32(ctx, 31, 0x26D668u);
    ctx->pc = 0x26D664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D660u;
    // 0x26d664: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26D660u, 0x26D668u)) {
        return;
    }
    ctx->pc = 0x26D668u;
label_26d668:
    // 0x26d668: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d66c: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x26D66Cu;
    SET_GPR_U32(ctx, 31, 0x26D674u);
    ctx->pc = 0x26D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D66Cu;
    // 0x26d670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x26D66Cu, 0x26D674u)) {
        return;
    }
    ctx->pc = 0x26D674u;
label_26d674:
    // 0x26d674: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x26D674u;
    {
        const bool branch_taken_0x26d674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D674u;
        // 0x26d678: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d674) {
            ctx->pc = 0x26DAA0u;
            goto label_26daa0;
        }
    }
    ctx->pc = 0x26D67Cu;
label_26d67c:
    // 0x26d67c: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x26d67cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x26d680: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x26d680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x26d684: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D684u;
    SET_GPR_U32(ctx, 31, 0x26D68Cu);
    ctx->pc = 0x26D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D684u;
    // 0x26d688: 0x241effca  addiu       $fp, $zero, -0x36 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D684u, 0x26D68Cu)) {
        return;
    }
    ctx->pc = 0x26D68Cu;
label_26d68c:
    // 0x26d68c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26d68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d690: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x26d690u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26d694: 0x0  nop
    ctx->pc = 0x26d694u;
    // NOP
label_26d698:
    // 0x26d698: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x26d698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x26d69c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26d69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26d6a0: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x26d6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x26d6a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26D6A4u;
    {
        const bool branch_taken_0x26d6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6A4u;
        // 0x26d6a8: 0x3c10000f  lui         $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6a4) {
            ctx->pc = 0x26D6C0u;
            goto label_26d6c0;
        }
    }
    ctx->pc = 0x26D6ACu;
    // 0x26d6ac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x26d6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6b0: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D6B0u;
    SET_GPR_U32(ctx, 31, 0x26D6B8u);
    ctx->pc = 0x26D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6B0u;
    // 0x26d6b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D6B0u, 0x26D6B8u)) {
        return;
    }
    ctx->pc = 0x26D6B8u;
label_26d6b8:
    // 0x26d6b8: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x26D6B8u;
    {
        const bool branch_taken_0x26d6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6B8u;
        // 0x26d6bc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6b8) {
            ctx->pc = 0x26DAA0u;
            goto label_26daa0;
        }
    }
    ctx->pc = 0x26D6C0u;
label_26d6c0:
    // 0x26d6c0: 0x132503  sra         $a0, $s3, 20
    ctx->pc = 0x26d6c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 20));
    // 0x26d6c4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x26d6c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x26d6c8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x26d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x26d6cc: 0x34425f64  ori         $v0, $v0, 0x5F64
    ctx->pc = 0x26d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24420);
    // 0x26d6d0: 0x2709824  and         $s3, $s3, $s0
    ctx->pc = 0x26d6d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x26d6d4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x26d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x26d6d8: 0x27c3fc01  addiu       $v1, $fp, -0x3FF
    ctx->pc = 0x26d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966273));
    // 0x26d6dc: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x26d6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x26d6e0: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x26d6e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26d6e4: 0x45a024  and         $s4, $v0, $a1
    ctx->pc = 0x26d6e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x26d6e8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x26d6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6ec: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x26d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x26d6f0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26d6f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26d6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26d6f8: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x26d6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
    // 0x26d6fc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x26d6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d700: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x26d700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x26d704: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26d704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26d708: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x26d708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x26d70c: 0x141d03  sra         $v1, $s4, 20
    ctx->pc = 0x26d70cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 20));
    // 0x26d710: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x26d710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x26d714: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26d714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26d718: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x26d718u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x26d71c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26D71Cu;
    SET_GPR_U32(ctx, 31, 0x26D724u);
    ctx->pc = 0x26D720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D71Cu;
    // 0x26d720: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26D71Cu, 0x26D724u)) {
        return;
    }
    ctx->pc = 0x26D724u;
label_26d724:
    // 0x26d724: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26d724u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d728: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x26d728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x26d72c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x26d72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x26d730: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x26d730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26d734: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x26D734u;
    {
        const bool branch_taken_0x26d734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D734u;
        // 0x26d738: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d734) {
            ctx->pc = 0x26D83Cu;
            goto label_26d83c;
        }
    }
    ctx->pc = 0x26D73Cu;
    // 0x26d73c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26d73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d740: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26D740u;
    SET_GPR_U32(ctx, 31, 0x26D748u);
    ctx->pc = 0x26D744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D740u;
    // 0x26d744: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26D740u, 0x26D748u)) {
        return;
    }
    ctx->pc = 0x26D748u;
label_26d748:
    // 0x26d748: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26D748u;
    {
        const bool branch_taken_0x26d748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D748u;
        // 0x26d74c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d748) {
            ctx->pc = 0x26D7A0u;
            goto label_26d7a0;
        }
    }
    ctx->pc = 0x26D750u;
    // 0x26d750: 0x13c000d2  beqz        $fp, . + 4 + (0xD2 << 2)
    ctx->pc = 0x26D750u;
    {
        const bool branch_taken_0x26d750 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D750u;
        // 0x26d754: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d750) {
            ctx->pc = 0x26DA9Cu;
            goto label_26da9c;
        }
    }
    ctx->pc = 0x26D758u;
    // 0x26d758: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x26D758u;
    SET_GPR_U32(ctx, 31, 0x26D760u);
    ctx->pc = 0x26D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D758u;
    // 0x26d75c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x26D758u, 0x26D760u)) {
        return;
    }
    ctx->pc = 0x26D760u;
label_26d760:
    // 0x26d760: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26d760u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d764: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d768: 0xdc25bf98  ld          $a1, -0x4068($at)
    ctx->pc = 0x26d768u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABF98u));
    // 0x26d76c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D76Cu;
    SET_GPR_U32(ctx, 31, 0x26D774u);
    ctx->pc = 0x26D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D76Cu;
    // 0x26d770: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D76Cu, 0x26D774u)) {
        return;
    }
    ctx->pc = 0x26D774u;
label_26d774:
    // 0x26d774: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d778: 0xdc25bfa0  ld          $a1, -0x4060($at)
    ctx->pc = 0x26d778u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFA0u));
    // 0x26d77c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d780: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D780u;
    SET_GPR_U32(ctx, 31, 0x26D788u);
    ctx->pc = 0x26D784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D780u;
    // 0x26d784: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D780u, 0x26D788u)) {
        return;
    }
    ctx->pc = 0x26D788u;
label_26d788:
    // 0x26d788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d78c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D78Cu;
    SET_GPR_U32(ctx, 31, 0x26D794u);
    ctx->pc = 0x26D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D78Cu;
    // 0x26d790: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D78Cu, 0x26D794u)) {
        return;
    }
    ctx->pc = 0x26D794u;
label_26d794:
    // 0x26d794: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x26D794u;
    {
        const bool branch_taken_0x26d794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D794u;
        // 0x26d798: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d794) {
            ctx->pc = 0x26DAA0u;
            goto label_26daa0;
        }
    }
    ctx->pc = 0x26D79Cu;
    // 0x26d79c: 0x0  nop
    ctx->pc = 0x26d79cu;
    // NOP
label_26d7a0:
    // 0x26d7a0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D7A0u;
    SET_GPR_U32(ctx, 31, 0x26D7A8u);
    ctx->pc = 0x26D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D7A0u;
    // 0x26d7a4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D7A0u, 0x26D7A8u)) {
        return;
    }
    ctx->pc = 0x26D7A8u;
label_26d7a8:
    // 0x26d7a8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d7ac: 0xdc25bfa8  ld          $a1, -0x4058($at)
    ctx->pc = 0x26d7acu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFA8u));
    // 0x26d7b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7b4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D7B4u;
    SET_GPR_U32(ctx, 31, 0x26D7BCu);
    ctx->pc = 0x26D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D7B4u;
    // 0x26d7b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D7B4u, 0x26D7BCu)) {
        return;
    }
    ctx->pc = 0x26D7BCu;
label_26d7bc:
    // 0x26d7bc: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x26d7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x26d7c0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x26d7c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x26d7c4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26D7C4u;
    SET_GPR_U32(ctx, 31, 0x26D7CCu);
    ctx->pc = 0x26D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D7C4u;
    // 0x26d7c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26D7C4u, 0x26D7CCu)) {
        return;
    }
    ctx->pc = 0x26D7CCu;
label_26d7cc:
    // 0x26d7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7d0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D7D0u;
    SET_GPR_U32(ctx, 31, 0x26D7D8u);
    ctx->pc = 0x26D7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D7D0u;
    // 0x26d7d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D7D0u, 0x26D7D8u)) {
        return;
    }
    ctx->pc = 0x26D7D8u;
label_26d7d8:
    // 0x26d7d8: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D7D8u;
    {
        const bool branch_taken_0x26d7d8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7D8u;
        // 0x26d7dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7d8) {
            ctx->pc = 0x26D7ECu;
            goto label_26d7ec;
        }
    }
    ctx->pc = 0x26D7E0u;
    // 0x26d7e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26d7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7e4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x26D7E4u;
    {
        const bool branch_taken_0x26d7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7E4u;
        // 0x26d7e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7e4) {
            ctx->pc = 0x26DA94u;
            goto label_26da94;
        }
    }
    ctx->pc = 0x26D7ECu;
label_26d7ec:
    // 0x26d7ec: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x26D7ECu;
    SET_GPR_U32(ctx, 31, 0x26D7F4u);
    ctx->pc = 0x26D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D7ECu;
    // 0x26d7f0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x26D7ECu, 0x26D7F4u)) {
        return;
    }
    ctx->pc = 0x26D7F4u;
label_26d7f4:
    // 0x26d7f4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26d7f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7f8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d7fc: 0xdc25bfb0  ld          $a1, -0x4050($at)
    ctx->pc = 0x26d7fcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFB0u));
    // 0x26d800: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D800u;
    SET_GPR_U32(ctx, 31, 0x26D808u);
    ctx->pc = 0x26D804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D800u;
    // 0x26d804: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D800u, 0x26D808u)) {
        return;
    }
    ctx->pc = 0x26D808u;
label_26d808:
    // 0x26d808: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d80c: 0xdc25bfb8  ld          $a1, -0x4048($at)
    ctx->pc = 0x26d80cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFB8u));
    // 0x26d810: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d814: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D814u;
    SET_GPR_U32(ctx, 31, 0x26D81Cu);
    ctx->pc = 0x26D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D814u;
    // 0x26d818: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D814u, 0x26D81Cu)) {
        return;
    }
    ctx->pc = 0x26D81Cu;
label_26d81c:
    // 0x26d81c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d820: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26D820u;
    SET_GPR_U32(ctx, 31, 0x26D828u);
    ctx->pc = 0x26D824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D820u;
    // 0x26d824: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26D820u, 0x26D828u)) {
        return;
    }
    ctx->pc = 0x26D828u;
label_26d828:
    // 0x26d828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d82c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26D82Cu;
    SET_GPR_U32(ctx, 31, 0x26D834u);
    ctx->pc = 0x26D830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D82Cu;
    // 0x26d830: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26D82Cu, 0x26D834u)) {
        return;
    }
    ctx->pc = 0x26D834u;
label_26d834:
    // 0x26d834: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x26D834u;
    {
        const bool branch_taken_0x26d834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D834u;
        // 0x26d838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d834) {
            ctx->pc = 0x26DA90u;
            goto label_26da90;
        }
    }
    ctx->pc = 0x26D83Cu;
label_26d83c:
    // 0x26d83c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x26d83cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26d840: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x26d840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x26d844: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D844u;
    SET_GPR_U32(ctx, 31, 0x26D84Cu);
    ctx->pc = 0x26D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D844u;
    // 0x26d848: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D844u, 0x26D84Cu)) {
        return;
    }
    ctx->pc = 0x26D84Cu;
label_26d84c:
    // 0x26d84c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26d84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d850: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x26D850u;
    SET_GPR_U32(ctx, 31, 0x26D858u);
    ctx->pc = 0x26D854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D850u;
    // 0x26d854: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x26D850u, 0x26D858u)) {
        return;
    }
    ctx->pc = 0x26D858u;
label_26d858:
    // 0x26d858: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26d858u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d85c: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x26D85Cu;
    SET_GPR_U32(ctx, 31, 0x26D864u);
    ctx->pc = 0x26D860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D85Cu;
    // 0x26d860: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x26D85Cu, 0x26D864u)) {
        return;
    }
    ctx->pc = 0x26D864u;
label_26d864:
    // 0x26d864: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26d864u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d868: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26d868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d86c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D86Cu;
    SET_GPR_U32(ctx, 31, 0x26D874u);
    ctx->pc = 0x26D870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D86Cu;
    // 0x26d870: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D86Cu, 0x26D874u)) {
        return;
    }
    ctx->pc = 0x26D874u;
label_26d874:
    // 0x26d874: 0x3c03fff9  lui         $v1, 0xFFF9
    ctx->pc = 0x26d874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65529 << 16));
    // 0x26d878: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26d878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d87c: 0x3463eb86  ori         $v1, $v1, 0xEB86
    ctx->pc = 0x26d87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60294);
    // 0x26d880: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d884: 0x263a021  addu        $s4, $s3, $v1
    ctx->pc = 0x26d884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x26d888: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D888u;
    SET_GPR_U32(ctx, 31, 0x26D890u);
    ctx->pc = 0x26D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D888u;
    // 0x26d88c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D888u, 0x26D890u)) {
        return;
    }
    ctx->pc = 0x26D890u;
label_26d890:
    // 0x26d890: 0x3c100006  lui         $s0, 0x6
    ctx->pc = 0x26d890u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)6 << 16));
    // 0x26d894: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d898: 0x3610b851  ori         $s0, $s0, 0xB851
    ctx->pc = 0x26d898u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)47185);
    // 0x26d89c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d8a0: 0xdc25bfc0  ld          $a1, -0x4040($at)
    ctx->pc = 0x26d8a0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFC0u));
    // 0x26d8a4: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x26d8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x26d8a8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D8A8u;
    SET_GPR_U32(ctx, 31, 0x26D8B0u);
    ctx->pc = 0x26D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8A8u;
    // 0x26d8ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D8A8u, 0x26D8B0u)) {
        return;
    }
    ctx->pc = 0x26D8B0u;
label_26d8b0:
    // 0x26d8b0: 0x290a025  or          $s4, $s4, $s0
    ctx->pc = 0x26d8b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 16));
    // 0x26d8b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d8b8: 0xdc25bfc8  ld          $a1, -0x4038($at)
    ctx->pc = 0x26d8b8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFC8u));
    // 0x26d8bc: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D8BCu;
    SET_GPR_U32(ctx, 31, 0x26D8C4u);
    ctx->pc = 0x26D8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8BCu;
    // 0x26d8c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D8BCu, 0x26D8C4u)) {
        return;
    }
    ctx->pc = 0x26D8C4u;
label_26d8c4:
    // 0x26d8c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26d8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8c8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D8C8u;
    SET_GPR_U32(ctx, 31, 0x26D8D0u);
    ctx->pc = 0x26D8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8C8u;
    // 0x26d8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D8C8u, 0x26D8D0u)) {
        return;
    }
    ctx->pc = 0x26D8D0u;
label_26d8d0:
    // 0x26d8d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d8d4: 0xdc25bfd0  ld          $a1, -0x4030($at)
    ctx->pc = 0x26d8d4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFD0u));
    // 0x26d8d8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D8D8u;
    SET_GPR_U32(ctx, 31, 0x26D8E0u);
    ctx->pc = 0x26D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8D8u;
    // 0x26d8dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D8D8u, 0x26D8E0u)) {
        return;
    }
    ctx->pc = 0x26D8E0u;
label_26d8e0:
    // 0x26d8e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26d8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8e4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D8E4u;
    SET_GPR_U32(ctx, 31, 0x26D8ECu);
    ctx->pc = 0x26D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8E4u;
    // 0x26d8e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D8E4u, 0x26D8ECu)) {
        return;
    }
    ctx->pc = 0x26D8ECu;
label_26d8ec:
    // 0x26d8ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d8f0: 0xdc25bfd8  ld          $a1, -0x4028($at)
    ctx->pc = 0x26d8f0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFD8u));
    // 0x26d8f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8f8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D8F8u;
    SET_GPR_U32(ctx, 31, 0x26D900u);
    ctx->pc = 0x26D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D8F8u;
    // 0x26d8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D8F8u, 0x26D900u)) {
        return;
    }
    ctx->pc = 0x26D900u;
label_26d900:
    // 0x26d900: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d904: 0xdc25bfe0  ld          $a1, -0x4020($at)
    ctx->pc = 0x26d904u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFE0u));
    // 0x26d908: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D908u;
    SET_GPR_U32(ctx, 31, 0x26D910u);
    ctx->pc = 0x26D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D908u;
    // 0x26d90c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D908u, 0x26D910u)) {
        return;
    }
    ctx->pc = 0x26D910u;
label_26d910:
    // 0x26d910: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26d910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d914: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D914u;
    SET_GPR_U32(ctx, 31, 0x26D91Cu);
    ctx->pc = 0x26D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D914u;
    // 0x26d918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D914u, 0x26D91Cu)) {
        return;
    }
    ctx->pc = 0x26D91Cu;
label_26d91c:
    // 0x26d91c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d920: 0xdc25bfe8  ld          $a1, -0x4018($at)
    ctx->pc = 0x26d920u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFE8u));
    // 0x26d924: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D924u;
    SET_GPR_U32(ctx, 31, 0x26D92Cu);
    ctx->pc = 0x26D928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D924u;
    // 0x26d928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D924u, 0x26D92Cu)) {
        return;
    }
    ctx->pc = 0x26D92Cu;
label_26d92c:
    // 0x26d92c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d930: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D930u;
    SET_GPR_U32(ctx, 31, 0x26D938u);
    ctx->pc = 0x26D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D930u;
    // 0x26d934: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D930u, 0x26D938u)) {
        return;
    }
    ctx->pc = 0x26D938u;
label_26d938:
    // 0x26d938: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d93c: 0xdc25bff0  ld          $a1, -0x4010($at)
    ctx->pc = 0x26d93cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFF0u));
    // 0x26d940: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D940u;
    SET_GPR_U32(ctx, 31, 0x26D948u);
    ctx->pc = 0x26D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D940u;
    // 0x26d944: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D940u, 0x26D948u)) {
        return;
    }
    ctx->pc = 0x26D948u;
label_26d948:
    // 0x26d948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d94c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D94Cu;
    SET_GPR_U32(ctx, 31, 0x26D954u);
    ctx->pc = 0x26D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D94Cu;
    // 0x26d950: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D94Cu, 0x26D954u)) {
        return;
    }
    ctx->pc = 0x26D954u;
label_26d954:
    // 0x26d954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d958: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D958u;
    SET_GPR_U32(ctx, 31, 0x26D960u);
    ctx->pc = 0x26D95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D958u;
    // 0x26d95c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D958u, 0x26D960u)) {
        return;
    }
    ctx->pc = 0x26D960u;
label_26d960:
    // 0x26d960: 0x1a80002a  blez        $s4, . + 4 + (0x2A << 2)
    ctx->pc = 0x26D960u;
    {
        const bool branch_taken_0x26d960 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x26D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D960u;
        // 0x26d964: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d960) {
            ctx->pc = 0x26DA0Cu;
            goto label_26da0c;
        }
    }
    ctx->pc = 0x26D968u;
    // 0x26d968: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x26d968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x26d96c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26d96cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26d970: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D970u;
    SET_GPR_U32(ctx, 31, 0x26D978u);
    ctx->pc = 0x26D974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D970u;
    // 0x26d974: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D970u, 0x26D978u)) {
        return;
    }
    ctx->pc = 0x26D978u;
label_26d978:
    // 0x26d978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d97c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D97Cu;
    SET_GPR_U32(ctx, 31, 0x26D984u);
    ctx->pc = 0x26D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D97Cu;
    // 0x26d980: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D97Cu, 0x26D984u)) {
        return;
    }
    ctx->pc = 0x26D984u;
label_26d984:
    // 0x26d984: 0x17c0000c  bnez        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x26D984u;
    {
        const bool branch_taken_0x26d984 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D984u;
        // 0x26d988: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d984) {
            ctx->pc = 0x26D9B8u;
            goto label_26d9b8;
        }
    }
    ctx->pc = 0x26D98Cu;
    // 0x26d98c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26d98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d990: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D990u;
    SET_GPR_U32(ctx, 31, 0x26D998u);
    ctx->pc = 0x26D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D990u;
    // 0x26d994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D990u, 0x26D998u)) {
        return;
    }
    ctx->pc = 0x26D998u;
label_26d998:
    // 0x26d998: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26d998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d99c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D99Cu;
    SET_GPR_U32(ctx, 31, 0x26D9A4u);
    ctx->pc = 0x26D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D99Cu;
    // 0x26d9a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D99Cu, 0x26D9A4u)) {
        return;
    }
    ctx->pc = 0x26D9A4u;
label_26d9a4:
    // 0x26d9a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9a8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26D9A8u;
    SET_GPR_U32(ctx, 31, 0x26D9B0u);
    ctx->pc = 0x26D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9A8u;
    // 0x26d9ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26D9A8u, 0x26D9B0u)) {
        return;
    }
    ctx->pc = 0x26D9B0u;
label_26d9b0:
    // 0x26d9b0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x26D9B0u;
    {
        const bool branch_taken_0x26d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9B0u;
        // 0x26d9b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d9b0) {
            ctx->pc = 0x26DA90u;
            goto label_26da90;
        }
    }
    ctx->pc = 0x26D9B8u;
label_26d9b8:
    // 0x26d9b8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d9bc: 0xdc25bff8  ld          $a1, -0x4008($at)
    ctx->pc = 0x26d9bcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6ABFF8u));
    // 0x26d9c0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D9C0u;
    SET_GPR_U32(ctx, 31, 0x26D9C8u);
    ctx->pc = 0x26D9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9C0u;
    // 0x26d9c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D9C0u, 0x26D9C8u)) {
        return;
    }
    ctx->pc = 0x26D9C8u;
label_26d9c8:
    // 0x26d9c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26d9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9d0: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D9D0u;
    SET_GPR_U32(ctx, 31, 0x26D9D8u);
    ctx->pc = 0x26D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9D0u;
    // 0x26d9d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D9D0u, 0x26D9D8u)) {
        return;
    }
    ctx->pc = 0x26D9D8u;
label_26d9d8:
    // 0x26d9d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26d9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9dc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D9DCu;
    SET_GPR_U32(ctx, 31, 0x26D9E4u);
    ctx->pc = 0x26D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9DCu;
    // 0x26d9e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D9DCu, 0x26D9E4u)) {
        return;
    }
    ctx->pc = 0x26D9E4u;
label_26d9e4:
    // 0x26d9e4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26d9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26d9e8: 0xdc25c000  ld          $a1, -0x4000($at)
    ctx->pc = 0x26d9e8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC000u));
    // 0x26d9ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9f0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26D9F0u;
    SET_GPR_U32(ctx, 31, 0x26D9F8u);
    ctx->pc = 0x26D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9F0u;
    // 0x26d9f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26D9F0u, 0x26D9F8u)) {
        return;
    }
    ctx->pc = 0x26D9F8u;
label_26d9f8:
    // 0x26d9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9fc: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26D9FCu;
    SET_GPR_U32(ctx, 31, 0x26DA04u);
    ctx->pc = 0x26DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9FCu;
    // 0x26da00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26D9FCu, 0x26DA04u)) {
        return;
    }
    ctx->pc = 0x26DA04u;
label_26da04:
    // 0x26da04: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26DA04u;
    {
        const bool branch_taken_0x26da04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA04u;
        // 0x26da08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da04) {
            ctx->pc = 0x26DA78u;
            goto label_26da78;
        }
    }
    ctx->pc = 0x26DA0Cu;
label_26da0c:
    // 0x26da0c: 0x17c00009  bnez        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DA0Cu;
    {
        const bool branch_taken_0x26da0c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x26da0c) {
            ctx->pc = 0x26DA34u;
            goto label_26da34;
        }
    }
    ctx->pc = 0x26DA14u;
    // 0x26da14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26da14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da18: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DA18u;
    SET_GPR_U32(ctx, 31, 0x26DA20u);
    ctx->pc = 0x26DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA18u;
    // 0x26da1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DA18u, 0x26DA20u)) {
        return;
    }
    ctx->pc = 0x26DA20u;
label_26da20:
    // 0x26da20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26da20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da24: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DA24u;
    SET_GPR_U32(ctx, 31, 0x26DA2Cu);
    ctx->pc = 0x26DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA24u;
    // 0x26da28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DA24u, 0x26DA2Cu)) {
        return;
    }
    ctx->pc = 0x26DA2Cu;
label_26da2c:
    // 0x26da2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26DA2Cu;
    {
        const bool branch_taken_0x26da2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA2Cu;
        // 0x26da30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da2c) {
            ctx->pc = 0x26DA90u;
            goto label_26da90;
        }
    }
    ctx->pc = 0x26DA34u;
label_26da34:
    // 0x26da34: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26da34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26da38: 0xdc25c008  ld          $a1, -0x3FF8($at)
    ctx->pc = 0x26da38u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC008u));
    // 0x26da3c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DA3Cu;
    SET_GPR_U32(ctx, 31, 0x26DA44u);
    ctx->pc = 0x26DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA3Cu;
    // 0x26da40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DA3Cu, 0x26DA44u)) {
        return;
    }
    ctx->pc = 0x26DA44u;
label_26da44:
    // 0x26da44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26da44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26da48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da4c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DA4Cu;
    SET_GPR_U32(ctx, 31, 0x26DA54u);
    ctx->pc = 0x26DA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA4Cu;
    // 0x26da50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DA4Cu, 0x26DA54u)) {
        return;
    }
    ctx->pc = 0x26DA54u;
label_26da54:
    // 0x26da54: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26da54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da58: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DA58u;
    SET_GPR_U32(ctx, 31, 0x26DA60u);
    ctx->pc = 0x26DA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA58u;
    // 0x26da5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DA58u, 0x26DA60u)) {
        return;
    }
    ctx->pc = 0x26DA60u;
label_26da60:
    // 0x26da60: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26da60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26da64: 0xdc25c010  ld          $a1, -0x3FF0($at)
    ctx->pc = 0x26da64u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC010u));
    // 0x26da68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26da68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da6c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DA6Cu;
    SET_GPR_U32(ctx, 31, 0x26DA74u);
    ctx->pc = 0x26DA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA6Cu;
    // 0x26da70: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DA6Cu, 0x26DA74u)) {
        return;
    }
    ctx->pc = 0x26DA74u;
label_26da74:
    // 0x26da74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26da74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26da78:
    // 0x26da78: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DA78u;
    SET_GPR_U32(ctx, 31, 0x26DA80u);
    ctx->pc = 0x26DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA78u;
    // 0x26da7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DA78u, 0x26DA80u)) {
        return;
    }
    ctx->pc = 0x26DA80u;
label_26da80:
    // 0x26da80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26da80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da84: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DA84u;
    SET_GPR_U32(ctx, 31, 0x26DA8Cu);
    ctx->pc = 0x26DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA84u;
    // 0x26da88: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DA84u, 0x26DA8Cu)) {
        return;
    }
    ctx->pc = 0x26DA8Cu;
label_26da8c:
    // 0x26da8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26da8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26da90:
    // 0x26da90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26da90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26da94:
    // 0x26da94: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DA94u;
    SET_GPR_U32(ctx, 31, 0x26DA9Cu);
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DA94u, 0x26DA9Cu)) {
        return;
    }
    ctx->pc = 0x26DA9Cu;
label_26da9c:
    // 0x26da9c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26da9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_26daa0:
    // 0x26daa0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x26daa0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26daa4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x26daa4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26daa8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x26daa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26daac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26daacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26dab0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26dab0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26dab4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26dab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26dab8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26dab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26dabc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26dabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26dac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26dac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26dac4: 0x3e00008  jr          $ra
    ctx->pc = 0x26DAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAC4u;
        // 0x26dac8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DACCu;
    // 0x26dacc: 0x0  nop
    ctx->pc = 0x26daccu;
    // NOP
    ctx->pc = 0x26dad0u;
}
