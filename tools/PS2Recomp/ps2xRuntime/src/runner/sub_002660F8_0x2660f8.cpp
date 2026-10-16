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

// Function: sub_002660F8
// Address: 0x2660f8 - 0x266330
void sub_002660F8_0x2660f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002660F8_0x2660f8");
#endif

    switch (ctx->pc) {
        case 0x266138u: goto label_266138;
        case 0x26622cu: goto label_26622c;
        default: break;
    }

    ctx->pc = 0x2660f8u;

    // 0x2660f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2660f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2660fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2660fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x266100: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x266100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x266104: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x266104u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x266108: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x266108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x26610c: 0x261063b0  addiu       $s0, $s0, 0x63B0
    ctx->pc = 0x26610cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25520));
    // 0x266110: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x266114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26611c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26611cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266120: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x266120u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x266124: 0x96030764  lhu         $v1, 0x764($s0)
    ctx->pc = 0x266124u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x706B14u));
    // 0x266128: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x266128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x26612c: 0x96020764  lhu         $v0, 0x764($s0)
    ctx->pc = 0x26612cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x706B14u));
    // 0x266130: 0xc0a1da0  jal         func_287680
    ctx->pc = 0x266130u;
    SET_GPR_U32(ctx, 31, 0x266138u);
    ctx->pc = 0x266134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266130u;
    // 0x266134: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287680u, 0x266130u, 0x266138u)) {
        return;
    }
    ctx->pc = 0x266138u;
label_266138:
    // 0x266138: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x266138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x26613c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x266140: 0x8e0306f4  lw          $v1, 0x6F4($s0)
    ctx->pc = 0x266140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
    // 0x266144: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x266144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x266148: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x266148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x26614c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x26614cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x266150: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x266150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x266154: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x266154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x266158: 0x24423d70  addiu       $v0, $v0, 0x3D70
    ctx->pc = 0x266158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15728));
    // 0x26615c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x26615cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x266160: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x266160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x266164: 0x24846950  addiu       $a0, $a0, 0x6950
    ctx->pc = 0x266164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26960));
    // 0x266168: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x266168u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
    // 0x26616c: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x26616cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x266170: 0x25280fc8  addiu       $t0, $t1, 0xFC8
    ctx->pc = 0x266170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4040));
    // 0x266174: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x266174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x266178: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x266178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x26617c: 0x34c6ff00  ori         $a2, $a2, 0xFF00
    ctx->pc = 0x26617cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    // 0x266180: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x266180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x686958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x686958u, _value); } while (0);
    // 0x266184: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x266184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x266188: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x266188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x26618c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x26618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x266190: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x266190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x266194: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x266194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x266198: 0x8c4241a8  lw          $v0, 0x41A8($v0)
    ctx->pc = 0x266198u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41A8u));
    // 0x26619c: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x26619cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2661a0: 0x92450024  lbu         $a1, 0x24($s2)
    ctx->pc = 0x2661a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2661a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2661a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2661a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2661a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2661ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2661acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2661b0: 0x90440047  lbu         $a0, 0x47($v0)
    ctx->pc = 0x2661b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 71)));
    // 0x2661b4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2661b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2661b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2661b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2661bc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2661bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2661c0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2661c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2661c4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2661C4u;
    {
        const bool branch_taken_0x2661c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2661c4) {
            ctx->pc = 0x2661C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2661C4u;
            // 0x2661c8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2661E0u;
            goto label_2661e0;
        }
    }
    ctx->pc = 0x2661CCu;
    // 0x2661cc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2661ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2661d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2661d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2661d4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2661d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2661d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2661d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2661dc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2661dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2661e0:
    // 0x2661e0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2661e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2661e4: 0x24635c20  addiu       $v1, $v1, 0x5C20
    ctx->pc = 0x2661e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23584));
    // 0x2661e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2661e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2661ec: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2661ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2661f0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2661f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2661f4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2661f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2661f8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2661f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2661fc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2661fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x266200: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x266200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x266204: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x266204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x266208: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x266208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x26620c: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x26620cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x266210: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x266210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x266214: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x266214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x266218: 0x8d220fc8  lw          $v0, 0xFC8($t1)
    ctx->pc = 0x266218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4040)));
    // 0x26621c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26621Cu;
    {
        const bool branch_taken_0x26621c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x266220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26621Cu;
        // 0x266220: 0x24460020  addiu       $a2, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26621c) {
            ctx->pc = 0x266238u;
            goto label_266238;
        }
    }
    ctx->pc = 0x266224u;
    // 0x266224: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x266224u;
    SET_GPR_U32(ctx, 31, 0x26622Cu);
    ctx->pc = 0x266228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266224u;
    // 0x266228: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x266224u, 0x26622Cu)) {
        return;
    }
    ctx->pc = 0x26622Cu;
label_26622c:
    // 0x26622c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26622Cu;
    {
        const bool branch_taken_0x26622c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26622Cu;
        // 0x266230: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26622c) {
            ctx->pc = 0x266240u;
            goto label_266240;
        }
    }
    ctx->pc = 0x266234u;
    // 0x266234: 0x0  nop
    ctx->pc = 0x266234u;
    // NOP
label_266238:
    // 0x266238: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x266238u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x26623c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x26623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_266240:
    // 0x266240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x266240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266244: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x266244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x266248: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x266248u;
    {
        const bool branch_taken_0x266248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266248u;
        // 0x26624c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266248) {
            ctx->pc = 0x266254u;
            goto label_266254;
        }
    }
    ctx->pc = 0x266250u;
    // 0x266250: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x266250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_266254:
    // 0x266254: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x266254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x266258: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x266258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26625c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x26625cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x266260: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x266260u;
    {
        const bool branch_taken_0x266260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x266264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266260u;
        // 0x266264: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266260) {
            ctx->pc = 0x26629Cu;
            goto label_26629c;
        }
    }
    ctx->pc = 0x266268u;
    // 0x266268: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x266268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x26626c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26626Cu;
    {
        const bool branch_taken_0x26626c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26626Cu;
        // 0x266270: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26626c) {
            ctx->pc = 0x266280u;
            goto label_266280;
        }
    }
    ctx->pc = 0x266274u;
    // 0x266274: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x266274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x266278: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x266278u;
    {
        const bool branch_taken_0x266278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266278) {
            ctx->pc = 0x26627Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266278u;
            // 0x26627c: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x266294u;
            goto label_266294;
        }
    }
    ctx->pc = 0x266280u;
label_266280:
    // 0x266280: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x266280u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x266284: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x266284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x266288: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x266288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x26628c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26628Cu;
    {
        const bool branch_taken_0x26628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26628Cu;
        // 0x266290: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26628c) {
            ctx->pc = 0x2662F4u;
            goto label_2662f4;
        }
    }
    ctx->pc = 0x266294u;
label_266294:
    // 0x266294: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266294u;
    {
        const bool branch_taken_0x266294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266294u;
        // 0x266298: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266294) {
            ctx->pc = 0x2662B0u;
            goto label_2662b0;
        }
    }
    ctx->pc = 0x26629Cu;
label_26629c:
    // 0x26629c: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x26629cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x2662a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2662a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2662a4: 0x90633550  lbu         $v1, 0x3550($v1)
    ctx->pc = 0x2662a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x2662a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2662A8u;
    {
        const bool branch_taken_0x2662a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662A8u;
        // 0x2662ac: 0xa2230028  sb          $v1, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662a8) {
            ctx->pc = 0x2662F8u;
            goto label_2662f8;
        }
    }
    ctx->pc = 0x2662B0u;
label_2662b0:
    // 0x2662b0: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x2662b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2662b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2662B4u;
    {
        const bool branch_taken_0x2662b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662B4u;
        // 0x2662b8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662b4) {
            ctx->pc = 0x2662D0u;
            goto label_2662d0;
        }
    }
    ctx->pc = 0x2662BCu;
    // 0x2662bc: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x2662bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x2662c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2662c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2662c4: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x2662c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x2662c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2662C8u;
    {
        const bool branch_taken_0x2662c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662C8u;
        // 0x2662cc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662c8) {
            ctx->pc = 0x2662F4u;
            goto label_2662f4;
        }
    }
    ctx->pc = 0x2662D0u;
label_2662d0:
    // 0x2662d0: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x2662d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x2662d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2662D4u;
    {
        const bool branch_taken_0x2662d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662D4u;
        // 0x2662d8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662d4) {
            ctx->pc = 0x2662E4u;
            goto label_2662e4;
        }
    }
    ctx->pc = 0x2662DCu;
    // 0x2662dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2662DCu;
    {
        const bool branch_taken_0x2662dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662DCu;
        // 0x2662e0: 0xa2230029  sb          $v1, 0x29($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662dc) {
            ctx->pc = 0x2662E8u;
            goto label_2662e8;
        }
    }
    ctx->pc = 0x2662E4u;
label_2662e4:
    // 0x2662e4: 0xa2250029  sb          $a1, 0x29($s1)
    ctx->pc = 0x2662e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 5));
label_2662e8:
    // 0x2662e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2662e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2662ec: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x2662ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x2662f0: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x2662f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_2662f4:
    // 0x2662f4: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x2662f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_2662f8:
    // 0x2662f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2662f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2662fc: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2662FCu;
    {
        const bool branch_taken_0x2662fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x266300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662FCu;
        // 0x266300: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662fc) {
            ctx->pc = 0x266310u;
            goto label_266310;
        }
    }
    ctx->pc = 0x266304u;
    // 0x266304: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x266304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x266308: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x266308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x26630c: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x26630cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_266310:
    // 0x266310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266314: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x266314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26631c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x26631cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266324: 0x3e00008  jr          $ra
    ctx->pc = 0x266324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266324u;
        // 0x266328: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26632Cu;
    // 0x26632c: 0x0  nop
    ctx->pc = 0x26632cu;
    // NOP
    ctx->pc = 0x266330u;
}
