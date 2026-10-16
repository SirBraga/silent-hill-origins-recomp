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

// Function: sub_00265580
// Address: 0x265580 - 0x2657b8
void sub_00265580_0x265580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265580_0x265580");
#endif

    switch (ctx->pc) {
        case 0x2655c0u: goto label_2655c0;
        case 0x2656b4u: goto label_2656b4;
        default: break;
    }

    ctx->pc = 0x265580u;

    // 0x265580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x265580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x265584: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x265584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x265588: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x265588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26558c: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x26558cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x265590: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x265590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x265594: 0x261063b0  addiu       $s0, $s0, 0x63B0
    ctx->pc = 0x265594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25520));
    // 0x265598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26559c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26559cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2655a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2655a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2655a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2655a8: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x2655a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2655ac: 0x96030764  lhu         $v1, 0x764($s0)
    ctx->pc = 0x2655acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x706B14u));
    // 0x2655b0: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x2655b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x2655b4: 0x96020764  lhu         $v0, 0x764($s0)
    ctx->pc = 0x2655b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x706B14u));
    // 0x2655b8: 0xc0a1da0  jal         func_287680
    ctx->pc = 0x2655B8u;
    SET_GPR_U32(ctx, 31, 0x2655C0u);
    ctx->pc = 0x2655BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2655B8u;
    // 0x2655bc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287680u, 0x2655B8u, 0x2655C0u)) {
        return;
    }
    ctx->pc = 0x2655C0u;
label_2655c0:
    // 0x2655c0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2655c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2655c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2655c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2655c8: 0x8e0306f4  lw          $v1, 0x6F4($s0)
    ctx->pc = 0x2655c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
    // 0x2655cc: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2655ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x2655d0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2655d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2655d4: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x2655d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x2655d8: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x2655d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x2655dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2655dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2655e0: 0x24423d70  addiu       $v0, $v0, 0x3D70
    ctx->pc = 0x2655e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15728));
    // 0x2655e4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2655e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2655e8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2655e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2655ec: 0x24846950  addiu       $a0, $a0, 0x6950
    ctx->pc = 0x2655ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26960));
    // 0x2655f0: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x2655f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x2655f4: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x2655f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x2655f8: 0x25280fc8  addiu       $t0, $t1, 0xFC8
    ctx->pc = 0x2655f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4040));
    // 0x2655fc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2655fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x265600: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x265600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x265604: 0x34c6ff00  ori         $a2, $a2, 0xFF00
    ctx->pc = 0x265604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    // 0x265608: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x265608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x686958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x686958u, _value); } while (0);
    // 0x26560c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x265610: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x265610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x265614: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x265614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x265618: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x265618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x26561c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x265620: 0x8c4241a8  lw          $v0, 0x41A8($v0)
    ctx->pc = 0x265620u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41A8u));
    // 0x265624: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x265624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x265628: 0x92450024  lbu         $a1, 0x24($s2)
    ctx->pc = 0x265628u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x26562c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x26562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x265630: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x265630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x265634: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x265634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x265638: 0x90440047  lbu         $a0, 0x47($v0)
    ctx->pc = 0x265638u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 71)));
    // 0x26563c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x26563cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x265640: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x265640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x265644: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x265644u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x265648: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x265648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x26564c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26564Cu;
    {
        const bool branch_taken_0x26564c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26564c) {
            ctx->pc = 0x265650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26564Cu;
            // 0x265650: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265668u;
            goto label_265668;
        }
    }
    ctx->pc = 0x265654u;
    // 0x265654: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x265654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x265658: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x265658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26565c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x26565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x265660: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x265660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x265664: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x265664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_265668:
    // 0x265668: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x265668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x26566c: 0x24631518  addiu       $v1, $v1, 0x1518
    ctx->pc = 0x26566cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5400));
    // 0x265670: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x265670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x265674: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x265674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x265678: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x265678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x26567c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x26567cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x265680: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x265680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x265684: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x265684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x265688: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x265688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x26568c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x26568cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x265690: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x265690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x265694: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x265694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x265698: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x265698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x26569c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x26569cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2656a0: 0x8d220fc8  lw          $v0, 0xFC8($t1)
    ctx->pc = 0x2656a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4040)));
    // 0x2656a4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2656A4u;
    {
        const bool branch_taken_0x2656a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656A4u;
        // 0x2656a8: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656a4) {
            ctx->pc = 0x2656C0u;
            goto label_2656c0;
        }
    }
    ctx->pc = 0x2656ACu;
    // 0x2656ac: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x2656ACu;
    SET_GPR_U32(ctx, 31, 0x2656B4u);
    ctx->pc = 0x2656B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2656ACu;
    // 0x2656b0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x2656ACu, 0x2656B4u)) {
        return;
    }
    ctx->pc = 0x2656B4u;
label_2656b4:
    // 0x2656b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2656B4u;
    {
        const bool branch_taken_0x2656b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656B4u;
        // 0x2656b8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656b4) {
            ctx->pc = 0x2656C8u;
            goto label_2656c8;
        }
    }
    ctx->pc = 0x2656BCu;
    // 0x2656bc: 0x0  nop
    ctx->pc = 0x2656bcu;
    // NOP
label_2656c0:
    // 0x2656c0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x2656c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x2656c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2656c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2656c8:
    // 0x2656c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2656c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2656cc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2656ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2656d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2656D0u;
    {
        const bool branch_taken_0x2656d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656D0u;
        // 0x2656d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656d0) {
            ctx->pc = 0x2656DCu;
            goto label_2656dc;
        }
    }
    ctx->pc = 0x2656D8u;
    // 0x2656d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2656d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2656dc:
    // 0x2656dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2656dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2656e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2656e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2656e4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2656e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2656e8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2656E8u;
    {
        const bool branch_taken_0x2656e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2656ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656E8u;
        // 0x2656ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656e8) {
            ctx->pc = 0x265724u;
            goto label_265724;
        }
    }
    ctx->pc = 0x2656F0u;
    // 0x2656f0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2656f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2656f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2656F4u;
    {
        const bool branch_taken_0x2656f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2656F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2656F4u;
        // 0x2656f8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2656f4) {
            ctx->pc = 0x265708u;
            goto label_265708;
        }
    }
    ctx->pc = 0x2656FCu;
    // 0x2656fc: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2656fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x265700: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x265700u;
    {
        const bool branch_taken_0x265700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265700) {
            ctx->pc = 0x265704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265700u;
            // 0x265704: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26571Cu;
            goto label_26571c;
        }
    }
    ctx->pc = 0x265708u;
label_265708:
    // 0x265708: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x265708u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x26570c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x265710: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x265710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x265714: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x265714u;
    {
        const bool branch_taken_0x265714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265714u;
        // 0x265718: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265714) {
            ctx->pc = 0x26577Cu;
            goto label_26577c;
        }
    }
    ctx->pc = 0x26571Cu;
label_26571c:
    // 0x26571c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26571Cu;
    {
        const bool branch_taken_0x26571c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26571Cu;
        // 0x265720: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26571c) {
            ctx->pc = 0x265738u;
            goto label_265738;
        }
    }
    ctx->pc = 0x265724u;
label_265724:
    // 0x265724: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x265724u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x265728: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x265728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26572c: 0x90633550  lbu         $v1, 0x3550($v1)
    ctx->pc = 0x26572cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x265730: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x265730u;
    {
        const bool branch_taken_0x265730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265730u;
        // 0x265734: 0xa2230028  sb          $v1, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265730) {
            ctx->pc = 0x265780u;
            goto label_265780;
        }
    }
    ctx->pc = 0x265738u;
label_265738:
    // 0x265738: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x265738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x26573c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26573Cu;
    {
        const bool branch_taken_0x26573c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26573Cu;
        // 0x265740: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26573c) {
            ctx->pc = 0x265758u;
            goto label_265758;
        }
    }
    ctx->pc = 0x265744u;
    // 0x265744: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x265744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x265748: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x265748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26574c: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x26574cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x265750: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x265750u;
    {
        const bool branch_taken_0x265750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265750u;
        // 0x265754: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265750) {
            ctx->pc = 0x26577Cu;
            goto label_26577c;
        }
    }
    ctx->pc = 0x265758u;
label_265758:
    // 0x265758: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x265758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x26575c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26575Cu;
    {
        const bool branch_taken_0x26575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26575Cu;
        // 0x265760: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26575c) {
            ctx->pc = 0x26576Cu;
            goto label_26576c;
        }
    }
    ctx->pc = 0x265764u;
    // 0x265764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x265764u;
    {
        const bool branch_taken_0x265764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265764u;
        // 0x265768: 0xa2230029  sb          $v1, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265764) {
            ctx->pc = 0x265770u;
            goto label_265770;
        }
    }
    ctx->pc = 0x26576Cu;
label_26576c:
    // 0x26576c: 0xa2250029  sb          $a1, 0x29($s1)
    ctx->pc = 0x26576cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 5));
label_265770:
    // 0x265770: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x265770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x265774: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x265774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x265778: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x265778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_26577c:
    // 0x26577c: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x26577cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_265780:
    // 0x265780: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x265780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265784: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265784u;
    {
        const bool branch_taken_0x265784 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x265788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265784u;
        // 0x265788: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265784) {
            ctx->pc = 0x265798u;
            goto label_265798;
        }
    }
    ctx->pc = 0x26578Cu;
    // 0x26578c: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x26578cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x265790: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x265790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x265794: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x265794u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_265798:
    // 0x265798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26579c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26579cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2657a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2657a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2657a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2657a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2657a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2657a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2657ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2657ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2657B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657ACu;
        // 0x2657b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2657ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2657B4u;
    // 0x2657b4: 0x0  nop
    ctx->pc = 0x2657b4u;
    // NOP
    ctx->pc = 0x2657b8u;
}
