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

// Function: sub_00232918
// Address: 0x232918 - 0x232da0
void sub_00232918_0x232918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232918_0x232918");
#endif

    switch (ctx->pc) {
        case 0x23294cu: goto label_23294c;
        case 0x232a30u: goto label_232a30;
        case 0x232bf4u: goto label_232bf4;
        case 0x232c50u: goto label_232c50;
        default: break;
    }

    ctx->pc = 0x232918u;

    // 0x232918: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x232918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23291c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x23291cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x232920: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x232920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x232924: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x232924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x232928: 0x8c510fc8  lw          $s1, 0xFC8($v0)
    ctx->pc = 0x232928u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x730FC8u));
    // 0x23292c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23292cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232930: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x232930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x232934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232938: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x232938u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23293c: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x23293cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x232940: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x232940u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x232944: 0xc08ba10  jal         func_22E840
    ctx->pc = 0x232944u;
    SET_GPR_U32(ctx, 31, 0x23294Cu);
    ctx->pc = 0x232948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232944u;
    // 0x232948: 0xa3a00003  sb          $zero, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E840u, 0x232944u, 0x23294Cu)) {
        return;
    }
    ctx->pc = 0x23294Cu;
label_23294c:
    // 0x23294c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x23294cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x232950: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232954: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x232954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x232958: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x232958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23295c: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x23295Cu;
    {
        const bool branch_taken_0x23295c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23295Cu;
        // 0x232960: 0x8f8284b4  lw          $v0, -0x7B4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23295c) {
            ctx->pc = 0x2329CCu;
            goto label_2329cc;
        }
    }
    ctx->pc = 0x232964u;
    // 0x232964: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x232964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x232968: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x232968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x23296c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x23296cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x232970: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x232970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B416Cu));
    // 0x232974: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x232974u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x232978: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x232978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23297c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x232980: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x232980u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x232984: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x232984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232988: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x232988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x23298c: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x23298cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x232990: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x232990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x232994: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x232994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x232998: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x232998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x23299c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23299cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2329a0: 0xff838458  sd          $v1, -0x7BA8($gp)
    ctx->pc = 0x2329a0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935640), GPR_U64(ctx, 3));
    // 0x2329a4: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2329a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2329a8: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x2329a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x2329ac: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x2329acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x2329b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2329B0u;
    {
        const bool branch_taken_0x2329b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329B0u;
        // 0x2329b4: 0x8f8284b4  lw          $v0, -0x7B4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329b0) {
            ctx->pc = 0x2329ECu;
            goto label_2329ec;
        }
    }
    ctx->pc = 0x2329B8u;
    // 0x2329b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2329b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2329bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2329BCu;
    {
        const bool branch_taken_0x2329bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329BCu;
        // 0x2329c0: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329bc) {
            ctx->pc = 0x2329E0u;
            goto label_2329e0;
        }
    }
    ctx->pc = 0x2329C4u;
    // 0x2329c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2329C4u;
    {
        const bool branch_taken_0x2329c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329C4u;
        // 0x2329c8: 0xdc435120  ld          $v1, 0x5120($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 20768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329c4) {
            ctx->pc = 0x2329E8u;
            goto label_2329e8;
        }
    }
    ctx->pc = 0x2329CCu;
label_2329cc:
    // 0x2329cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2329ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2329d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2329D0u;
    {
        const bool branch_taken_0x2329d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329D0u;
        // 0x2329d4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329d0) {
            ctx->pc = 0x2329E0u;
            goto label_2329e0;
        }
    }
    ctx->pc = 0x2329D8u;
    // 0x2329d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2329D8u;
    {
        const bool branch_taken_0x2329d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2329D8u;
        // 0x2329dc: 0xdc435120  ld          $v1, 0x5120($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 20768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329d8) {
            ctx->pc = 0x2329E8u;
            goto label_2329e8;
        }
    }
    ctx->pc = 0x2329E0u;
label_2329e0:
    // 0x2329e0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2329e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2329e4: 0xdc435290  ld          $v1, 0x5290($v0)
    ctx->pc = 0x2329e4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x735290u));
label_2329e8:
    // 0x2329e8: 0xff838458  sd          $v1, -0x7BA8($gp)
    ctx->pc = 0x2329e8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935640), GPR_U64(ctx, 3));
label_2329ec:
    // 0x2329ec: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2329ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2329f0: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x2329f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2329f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2329f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2329f8: 0x8465001c  lh          $a1, 0x1C($v1)
    ctx->pc = 0x2329f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2329fc: 0x8c70000c  lw          $s0, 0xC($v1)
    ctx->pc = 0x2329fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x232a00: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x232a00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x232a04: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x232a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x232a08: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x232a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x232a0c: 0x2610001f  addiu       $s0, $s0, 0x1F
    ctx->pc = 0x232a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x232a10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x232a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x232a14: 0x2068024  and         $s0, $s0, $a2
    ctx->pc = 0x232a14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 6));
    // 0x232a18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x232a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x232a1c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x232a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x232a20: 0x108103  sra         $s0, $s0, 4
    ctx->pc = 0x232a20u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
    // 0x232a24: 0x2610000e  addiu       $s0, $s0, 0xE
    ctx->pc = 0x232a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x232a28: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x232A28u;
    SET_GPR_U32(ctx, 31, 0x232A30u);
    ctx->pc = 0x232A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A28u;
    // 0x232a2c: 0x36050001  ori         $a1, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x232A28u, 0x232A30u)) {
        return;
    }
    ctx->pc = 0x232A30u;
label_232a30:
    // 0x232a30: 0x36108000  ori         $s0, $s0, 0x8000
    ctx->pc = 0x232a30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32768);
    // 0x232a34: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x232a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x232a38: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x232a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x232a3c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x232a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x232a40: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x232a40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x232a44: 0x70508389  pcpyld      $s0, $v0, $s0
    ctx->pc = 0x232a44u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
    // 0x232a48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x232a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x232a4c: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x232a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x232a50: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x232a50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x232a54: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x232a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232a58: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232a5c: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x232a5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232a60: 0x32460001  andi        $a2, $s2, 0x1
    ctx->pc = 0x232a60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x232a64: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x232A64u;
    {
        const bool branch_taken_0x232a64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x232A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A64u;
        // 0x232a68: 0x9f908458  lwu         $s0, -0x7BA8($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294935640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a64) {
            ctx->pc = 0x232A80u;
            goto label_232a80;
        }
    }
    ctx->pc = 0x232A6Cu;
    // 0x232a6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x232a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x232a70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232a74: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x232a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x232a78: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x232a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x232a7c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x232a7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_232a80:
    // 0x232a80: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x232a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x232a84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232A84u;
    {
        const bool branch_taken_0x232a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A84u;
        // 0x232a88: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a84) {
            ctx->pc = 0x232A9Cu;
            goto label_232a9c;
        }
    }
    ctx->pc = 0x232A8Cu;
    // 0x232a8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x232a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x232a90: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x232a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x232a94: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x232a94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x232a98: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x232a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_232a9c:
    // 0x232a9c: 0x70508389  pcpyld      $s0, $v0, $s0
    ctx->pc = 0x232a9cu;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
    // 0x232aa0: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x232aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x232aa4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x232aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232aa8: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x232aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x232aac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x232AACu;
    {
        const bool branch_taken_0x232aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AACu;
        // 0x232ab0: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232aac) {
            ctx->pc = 0x232AD0u;
            goto label_232ad0;
        }
    }
    ctx->pc = 0x232AB4u;
    // 0x232ab4: 0xdf908450  ld          $s0, -0x7BB0($gp)
    ctx->pc = 0x232ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x232ab8: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x232ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x232abc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x232abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x232ac0: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x232ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x232ac4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x232ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x232ac8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x232AC8u;
    {
        const bool branch_taken_0x232ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AC8u;
        // 0x232acc: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ac8) {
            ctx->pc = 0x232AE0u;
            goto label_232ae0;
        }
    }
    ctx->pc = 0x232AD0u;
label_232ad0:
    // 0x232ad0: 0xdf908450  ld          $s0, -0x7BB0($gp)
    ctx->pc = 0x232ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x232ad4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x232ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x232ad8: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x232ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x232adc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x232adcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_232ae0:
    // 0x232ae0: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x232ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x232ae4: 0x70508389  pcpyld      $s0, $v0, $s0
    ctx->pc = 0x232ae4u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
    // 0x232ae8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x232ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x232aec: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x232aecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x232af0: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x232af0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x232af4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x232af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232af8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232afc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x232afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232b00: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x232b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x232b04: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x232b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x232b08: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x232b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x232b0c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x232b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x232b10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x232b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x232b14: 0x70a28389  pcpyld      $s0, $a1, $v0
    ctx->pc = 0x232b14u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x232b18: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x232b18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x232b1c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x232b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232b20: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232b24: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232b24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232b28: 0xdf908460  ld          $s0, -0x7BA0($gp)
    ctx->pc = 0x232b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x232b2c: 0x3c02fffa  lui         $v0, 0xFFFA
    ctx->pc = 0x232b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65530 << 16));
    // 0x232b30: 0x3442bffe  ori         $v0, $v0, 0xBFFE
    ctx->pc = 0x232b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49150);
    // 0x232b34: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x232b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x232b38: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x232b38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x232b3c: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x232b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x232b40: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x232b40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x232b44: 0x70908389  pcpyld      $s0, $a0, $s0
    ctx->pc = 0x232b44u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 16)));
    // 0x232b48: 0x7c700010  sq          $s0, 0x10($v1)
    ctx->pc = 0x232b48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 16));
    // 0x232b4c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x232b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x232b50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232b54: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232b54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232b58: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x232b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x232b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b60: 0x70858389  pcpyld      $s0, $a0, $a1
    ctx->pc = 0x232b60u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x232b64: 0x7c700020  sq          $s0, 0x20($v1)
    ctx->pc = 0x232b64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 16));
    // 0x232b68: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x232b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x232b6c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232b70: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232b70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232b74: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x232b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x232b78: 0x3402fffe  ori         $v0, $zero, 0xFFFE
    ctx->pc = 0x232b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x232b7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x232b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x232b80: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x232b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x232b84: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x232b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x232b88: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x232b88u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232b8c: 0x7c700030  sq          $s0, 0x30($v1)
    ctx->pc = 0x232b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 16));
    // 0x232b90: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x232b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x232b94: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232b98: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232b9c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x232b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x232ba0: 0x70a48389  pcpyld      $s0, $a1, $a0
    ctx->pc = 0x232ba0u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x232ba4: 0x7c700040  sq          $s0, 0x40($v1)
    ctx->pc = 0x232ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 16));
    // 0x232ba8: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x232ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x232bac: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x232BACu;
    {
        const bool branch_taken_0x232bac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BACu;
        // 0x232bb0: 0xaf8390bc  sw          $v1, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bac) {
            ctx->pc = 0x232C00u;
            goto label_232c00;
        }
    }
    ctx->pc = 0x232BB4u;
    // 0x232bb4: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x232bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x232bb8: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x232bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x232bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232bc0: 0x0  nop
    ctx->pc = 0x232bc0u;
    // NOP
    // 0x232bc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x232bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x232bc8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x232bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x232bcc: 0x34218312  ori         $at, $at, 0x8312
    ctx->pc = 0x232bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33554);
    // 0x232bd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x232bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232bd4: 0x93b00000  lbu         $s0, 0x0($sp)
    ctx->pc = 0x232bd4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232bd8: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x232bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x232bdc: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x232bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x232be0: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x232be0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x232be4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x232be4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x232be8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232bec: 0xc07da6c  jal         func_1F69B0
    ctx->pc = 0x232BECu;
    SET_GPR_U32(ctx, 31, 0x232BF4u);
    ctx->pc = 0x232BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BECu;
    // 0x232bf0: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F69B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F69B0u, 0x232BECu, 0x232BF4u)) {
        return;
    }
    ctx->pc = 0x232BF4u;
label_232bf4:
    // 0x232bf4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x232bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x232bf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x232BF8u;
    {
        const bool branch_taken_0x232bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BF8u;
        // 0x232bfc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bf8) {
            ctx->pc = 0x232C04u;
            goto label_232c04;
        }
    }
    ctx->pc = 0x232C00u;
label_232c00:
    // 0x232c00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x232c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232c04:
    // 0x232c04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x232c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232c08: 0x70708389  pcpyld      $s0, $v1, $s0
    ctx->pc = 0x232c08u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 16)));
    // 0x232c0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x232c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x232c10: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x232c10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x232c14: 0x7c500000  sq          $s0, 0x0($v0)
    ctx->pc = 0x232c14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 16));
    // 0x232c18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x232c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x232c1c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232c20: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232c20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232c24: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x232c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x232c28: 0x8467001c  lh          $a3, 0x1C($v1)
    ctx->pc = 0x232c28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x232c2c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x232c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x232c30: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x232c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x232c34: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x232c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x232c38: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x232C38u;
    {
        const bool branch_taken_0x232c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C38u;
        // 0x232c3c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c38) {
            ctx->pc = 0x232CD0u;
            goto label_232cd0;
        }
    }
    ctx->pc = 0x232C40u;
    // 0x232c40: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x232c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232c44: 0x2409ffe0  addiu       $t1, $zero, -0x20
    ctx->pc = 0x232c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x232c48: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x232c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x232c4c: 0x0  nop
    ctx->pc = 0x232c4cu;
    // NOP
label_232c50:
    // 0x232c50: 0x71028389  pcpyld      $s0, $t0, $v0
    ctx->pc = 0x232c50u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x232c54: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x232c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x232c58: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x232c58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x232c5c: 0x7c900000  sq          $s0, 0x0($a0)
    ctx->pc = 0x232c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 16));
    // 0x232c60: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x232c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x232c64: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232c68: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x232c68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232c6c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x232c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x232c70: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x232c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x232c74: 0x24e30020  addiu       $v1, $a3, 0x20
    ctx->pc = 0x232c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x232c78: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x232c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x232c7c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x232c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x232c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x232c84: 0xc3282a  slt         $a1, $a2, $v1
    ctx->pc = 0x232c84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x232c88: 0xc5180b  movn        $v1, $a2, $a1
    ctx->pc = 0x232c88u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
    // 0x232c8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232c90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x232c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x232c94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x232c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x232c98: 0x71028389  pcpyld      $s0, $t0, $v0
    ctx->pc = 0x232c98u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x232c9c: 0x7c900000  sq          $s0, 0x0($a0)
    ctx->pc = 0x232c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 16));
    // 0x232ca0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x232ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x232ca4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232ca8: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x232ca8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232cac: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x232cacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x232cb0: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x232cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x232cb4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x232cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x232cb8: 0x8483001c  lh          $v1, 0x1C($a0)
    ctx->pc = 0x232cb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x232cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x232cc0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x232cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x232cc4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x232CC4u;
    {
        const bool branch_taken_0x232cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CC4u;
        // 0x232cc8: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232cc4) {
            ctx->pc = 0x232C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232c50;
        }
    }
    ctx->pc = 0x232CCCu;
    // 0x232ccc: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x232cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_232cd0:
    // 0x232cd0: 0xdf828458  ld          $v0, -0x7BA8($gp)
    ctx->pc = 0x232cd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935640)));
    // 0x232cd4: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x232cd4u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232cd8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x232cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x232cdc: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x232cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x232ce0: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x232ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x232ce4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x232ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232ce8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232cec: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x232cecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232cf0: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x232cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x232cf4: 0xdf828450  ld          $v0, -0x7BB0($gp)
    ctx->pc = 0x232cf4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x232cf8: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x232cf8u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232cfc: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x232cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
    // 0x232d00: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x232d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x232d04: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232d08: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232d08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232d0c: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x232d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x232d10: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x232d10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x232d14: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x232d14u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232d18: 0x7c700010  sq          $s0, 0x10($v1)
    ctx->pc = 0x232d18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 16));
    // 0x232d1c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x232d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x232d20: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232d24: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232d24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232d28: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x232d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x232d2c: 0xdf828468  ld          $v0, -0x7B98($gp)
    ctx->pc = 0x232d2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935656)));
    // 0x232d30: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x232d30u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232d34: 0x7c700020  sq          $s0, 0x20($v1)
    ctx->pc = 0x232d34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 16));
    // 0x232d38: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x232d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x232d3c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232d40: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232d40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232d44: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x232d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x232d48: 0xdf828468  ld          $v0, -0x7B98($gp)
    ctx->pc = 0x232d48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935656)));
    // 0x232d4c: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x232d4cu;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232d50: 0x7c700030  sq          $s0, 0x30($v1)
    ctx->pc = 0x232d50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 16));
    // 0x232d54: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x232d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x232d58: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232d5c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x232d5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232d60: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x232d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x232d64: 0xdf828470  ld          $v0, -0x7B90($gp)
    ctx->pc = 0x232d64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x232d68: 0x70828389  pcpyld      $s0, $a0, $v0
    ctx->pc = 0x232d68u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x232d6c: 0x7c700040  sq          $s0, 0x40($v1)
    ctx->pc = 0x232d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 16));
    // 0x232d70: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x232d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x232d74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x232d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x232d78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x232d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232d7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x232d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232d80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232d84: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x232d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x232d88: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x232d88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x232d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x232D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D8Cu;
        // 0x232d90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232D94u;
    // 0x232d94: 0x0  nop
    ctx->pc = 0x232d94u;
    // NOP
    // 0x232d98: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x232d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x232d9c: 0x0  nop
    ctx->pc = 0x232d9cu;
    // NOP
    ctx->pc = 0x232da0u;
}
