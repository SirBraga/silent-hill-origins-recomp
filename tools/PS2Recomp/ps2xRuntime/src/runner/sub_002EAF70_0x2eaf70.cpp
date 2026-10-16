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

// Function: sub_002EAF70
// Address: 0x2eaf70 - 0x2eb240
void sub_002EAF70_0x2eaf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAF70_0x2eaf70");
#endif

    switch (ctx->pc) {
        case 0x2eaf94u: goto label_2eaf94;
        case 0x2eafe8u: goto label_2eafe8;
        case 0x2eb030u: goto label_2eb030;
        case 0x2eb148u: goto label_2eb148;
        case 0x2eb224u: goto label_2eb224;
        default: break;
    }

    ctx->pc = 0x2eaf70u;

    // 0x2eaf70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2eaf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2eaf74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2eaf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2eaf78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eaf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2eaf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2eaf80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2eaf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2eaf84: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x2eaf84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2eaf88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eaf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eaf8c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2EAF8Cu;
    SET_GPR_U32(ctx, 31, 0x2EAF94u);
    ctx->pc = 0x2EAF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF8Cu;
    // 0x2eaf90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2EAF8Cu, 0x2EAF94u)) {
        return;
    }
    ctx->pc = 0x2EAF94u;
label_2eaf94:
    // 0x2eaf94: 0x260a0030  addiu       $t2, $s0, 0x30
    ctx->pc = 0x2eaf94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2eaf98: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2eaf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2eaf9c: 0x8d4b0024  lw          $t3, 0x24($t2)
    ctx->pc = 0x2eaf9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x2eafa0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2eafa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eafa4: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x2eafa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x2eafa8: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x2eafa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2eafac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2eafacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2eafb0: 0x3300b  movn        $a2, $zero, $v1
    ctx->pc = 0x2eafb0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
    // 0x2eafb4: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x2eafb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4));
    // 0x2eafb8: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x2eafb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2eafbc: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2EAFBCu;
    {
        const bool branch_taken_0x2eafbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFBCu;
        // 0x2eafc0: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafbc) {
            ctx->pc = 0x2EB114u;
            goto label_2eb114;
        }
    }
    ctx->pc = 0x2EAFC4u;
    // 0x2eafc4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2eafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2eafc8: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x2eafc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2eafcc: 0x2442e5c0  addiu       $v0, $v0, -0x1A40
    ctx->pc = 0x2eafccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960576));
    // 0x2eafd0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2eafd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2eafd4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2eafd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eafd8: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x2eafd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2eafdc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2eafdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eafe0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eafe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eafe4: 0x0  nop
    ctx->pc = 0x2eafe4u;
    // NOP
label_2eafe8:
    // 0x2eafe8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2eafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eafec: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x2EAFECu;
    {
        const bool branch_taken_0x2eafec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eafec) {
            ctx->pc = 0x2EAFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAFECu;
            // 0x2eaff0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB104u;
            goto label_2eb104;
        }
    }
    ctx->pc = 0x2EAFF4u;
    // 0x2eaff4: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x2eaff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x2eaff8: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x2eaff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2eaffc: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x2eaffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x2eb000: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2eb000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb004: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2eb004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eb008: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2eb008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2eb00c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2eb00cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x2eb010: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x2eb010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2eb014: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2EB014u;
    {
        const bool branch_taken_0x2eb014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB014u;
        // 0x2eb018: 0xa0680600  sb          $t0, 0x600($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1536), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb014) {
            ctx->pc = 0x2EB0F0u;
            goto label_2eb0f0;
        }
    }
    ctx->pc = 0x2EB01Cu;
    // 0x2eb01c: 0x24c2ffe8  addiu       $v0, $a2, -0x18
    ctx->pc = 0x2eb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x2eb020: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x2eb020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2eb024: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x2eb024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x2eb028: 0xa143002a  sb          $v1, 0x2A($t2)
    ctx->pc = 0x2eb028u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x2eb02c: 0xad42002c  sw          $v0, 0x2C($t2)
    ctx->pc = 0x2eb02cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 2));
label_2eb030:
    // 0x2eb030: 0x9142002a  lbu         $v0, 0x2A($t2)
    ctx->pc = 0x2eb030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x2eb034: 0x8f858cb0  lw          $a1, -0x7350($gp)
    ctx->pc = 0x2eb034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x2eb038: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eb038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eb03c: 0x8d49002c  lw          $t1, 0x2C($t2)
    ctx->pc = 0x2eb03cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x2eb040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eb040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eb044: 0x24a40630  addiu       $a0, $a1, 0x630
    ctx->pc = 0x2eb044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
    // 0x2eb048: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2eb048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eb04c: 0x24a60638  addiu       $a2, $a1, 0x638
    ctx->pc = 0x2eb04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1592));
    // 0x2eb050: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2eb050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eb054: 0x24a70640  addiu       $a3, $a1, 0x640
    ctx->pc = 0x2eb054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1600));
    // 0x2eb058: 0x24a80648  addiu       $t0, $a1, 0x648
    ctx->pc = 0x2eb058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1608));
    // 0x2eb05c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x2eb05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x2eb060: 0x24a50650  addiu       $a1, $a1, 0x650
    ctx->pc = 0x2eb060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1616));
    // 0x2eb064: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2eb064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2eb068: 0x9142002a  lbu         $v0, 0x2A($t2)
    ctx->pc = 0x2eb068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x2eb06c: 0x8d44002c  lw          $a0, 0x2C($t2)
    ctx->pc = 0x2eb06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x2eb070: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eb070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eb074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eb074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eb078: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2eb078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eb07c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2eb07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2eb080: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2eb080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2eb084: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2eb084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2eb088: 0x9142002a  lbu         $v0, 0x2A($t2)
    ctx->pc = 0x2eb088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x2eb08c: 0x8d44002c  lw          $a0, 0x2C($t2)
    ctx->pc = 0x2eb08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x2eb090: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eb090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eb094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eb094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eb098: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2eb098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2eb09c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2eb09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2eb0a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2eb0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2eb0a4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2eb0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2eb0a8: 0x9142002a  lbu         $v0, 0x2A($t2)
    ctx->pc = 0x2eb0a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x2eb0ac: 0x8d44002c  lw          $a0, 0x2C($t2)
    ctx->pc = 0x2eb0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x2eb0b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eb0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eb0b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eb0b8: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2eb0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2eb0bc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2eb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2eb0c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2eb0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2eb0c4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2eb0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2eb0c8: 0x9142002a  lbu         $v0, 0x2A($t2)
    ctx->pc = 0x2eb0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
    // 0x2eb0cc: 0x8d44002c  lw          $a0, 0x2C($t2)
    ctx->pc = 0x2eb0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x2eb0d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eb0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eb0d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eb0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eb0d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2eb0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2eb0dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2eb0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb0e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2eb0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2eb0e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EB0E4u;
    {
        const bool branch_taken_0x2eb0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0E4u;
        // 0x2eb0e8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0e4) {
            ctx->pc = 0x2EB114u;
            goto label_2eb114;
        }
    }
    ctx->pc = 0x2EB0ECu;
    // 0x2eb0ec: 0x0  nop
    ctx->pc = 0x2eb0ecu;
    // NOP
label_2eb0f0:
    // 0x2eb0f0: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x2eb0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x2eb0f4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2eb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2eb0f8: 0xa142002a  sb          $v0, 0x2A($t2)
    ctx->pc = 0x2eb0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x2eb0fc: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x2EB0FCu;
    {
        const bool branch_taken_0x2eb0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0FCu;
        // 0x2eb100: 0xad43002c  sw          $v1, 0x2C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0fc) {
            ctx->pc = 0x2EB030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb030;
        }
    }
    ctx->pc = 0x2EB104u;
label_2eb104:
    // 0x2eb104: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2eb104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2eb108: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x2eb108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2eb10c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x2EB10Cu;
    {
        const bool branch_taken_0x2eb10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB10Cu;
        // 0x2eb110: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb10c) {
            ctx->pc = 0x2EAFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eafe8;
        }
    }
    ctx->pc = 0x2EB114u;
label_2eb114:
    // 0x2eb114: 0x12400041  beqz        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x2EB114u;
    {
        const bool branch_taken_0x2eb114 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB114u;
        // 0x2eb118: 0x31620020  andi        $v0, $t3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb114) {
            ctx->pc = 0x2EB21Cu;
            goto label_2eb21c;
        }
    }
    ctx->pc = 0x2EB11Cu;
    // 0x2eb11c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2EB11Cu;
    {
        const bool branch_taken_0x2eb11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB11Cu;
        // 0x2eb120: 0x180302d  daddu       $a2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb11c) {
            ctx->pc = 0x2EB21Cu;
            goto label_2eb21c;
        }
    }
    ctx->pc = 0x2EB124u;
    // 0x2eb124: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x2eb124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2eb128: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EB128u;
    {
        const bool branch_taken_0x2eb128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB128u;
        // 0x2eb12c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb128) {
            ctx->pc = 0x2EB1FCu;
            goto label_2eb1fc;
        }
    }
    ctx->pc = 0x2EB130u;
    // 0x2eb130: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2eb130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2eb134: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2eb134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2eb138: 0x2442e5c0  addiu       $v0, $v0, -0x1A40
    ctx->pc = 0x2eb138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960576));
    // 0x2eb13c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2eb13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb140: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2eb140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eb144: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2eb144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2eb148:
    // 0x2eb148: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eb148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eb14c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2EB14Cu;
    {
        const bool branch_taken_0x2eb14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb14c) {
            ctx->pc = 0x2EB150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB14Cu;
            // 0x2eb150: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB1F0u;
            goto label_2eb1f0;
        }
    }
    ctx->pc = 0x2EB154u;
    // 0x2eb154: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x2eb154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x2eb158: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x2eb158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2eb15c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x2eb15cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x2eb160: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2eb160u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb164: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2eb164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eb168: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2eb168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2eb16c: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x2eb16cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x2eb170: 0xa0670600  sb          $a3, 0x600($v1)
    ctx->pc = 0x2eb170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1536), (uint8_t)GPR_U32(ctx, 7));
    // 0x2eb174: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x2eb174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x2eb178: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x2eb178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2eb17c: 0x24830630  addiu       $v1, $a0, 0x630
    ctx->pc = 0x2eb17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1584));
    // 0x2eb180: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x2eb180u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
    // 0x2eb184: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x2eb184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x2eb188: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2eb188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2eb18c: 0xcb3004  sllv        $a2, $t3, $a2
    ctx->pc = 0x2eb18cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2eb190: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2eb190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eb194: 0x24870638  addiu       $a3, $a0, 0x638
    ctx->pc = 0x2eb194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1592));
    // 0x2eb198: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x2eb198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2eb19c: 0x24890640  addiu       $t1, $a0, 0x640
    ctx->pc = 0x2eb19cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
    // 0x2eb1a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2eb1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2eb1a4: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x2eb1a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2eb1a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2eb1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2eb1ac: 0x24880648  addiu       $t0, $a0, 0x648
    ctx->pc = 0x2eb1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1608));
    // 0x2eb1b0: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x2eb1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2eb1b4: 0x24840650  addiu       $a0, $a0, 0x650
    ctx->pc = 0x2eb1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1616));
    // 0x2eb1b8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2eb1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2eb1bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2eb1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2eb1c0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2eb1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2eb1c4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2eb1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2eb1c8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2eb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2eb1cc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2eb1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2eb1d0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2eb1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2eb1d4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2eb1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2eb1d8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2eb1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2eb1dc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2eb1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x2eb1e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eb1e4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2eb1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2eb1e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB1E8u;
    {
        const bool branch_taken_0x2eb1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1E8u;
        // 0x2eb1ec: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1e8) {
            ctx->pc = 0x2EB1FCu;
            goto label_2eb1fc;
        }
    }
    ctx->pc = 0x2EB1F0u;
label_2eb1f0:
    // 0x2eb1f0: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x2eb1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2eb1f4: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2EB1F4u;
    {
        const bool branch_taken_0x2eb1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1F4u;
        // 0x2eb1f8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1f4) {
            ctx->pc = 0x2EB148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb148;
        }
    }
    ctx->pc = 0x2EB1FCu;
label_2eb1fc:
    // 0x2eb1fc: 0x15600007  bnez        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB1FCu;
    {
        const bool branch_taken_0x2eb1fc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb1fc) {
            ctx->pc = 0x2EB21Cu;
            goto label_2eb21c;
        }
    }
    ctx->pc = 0x2EB204u;
    // 0x2eb204: 0x8d430024  lw          $v1, 0x24($t2)
    ctx->pc = 0x2eb204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x2eb208: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2eb208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2eb20c: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x2eb20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x2eb210: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2eb210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eb214: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2eb214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2eb218: 0xad430024  sw          $v1, 0x24($t2)
    ctx->pc = 0x2eb218u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 3));
label_2eb21c:
    // 0x2eb21c: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2EB21Cu;
    SET_GPR_U32(ctx, 31, 0x2EB224u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2EB21Cu, 0x2EB224u)) {
        return;
    }
    ctx->pc = 0x2EB224u;
label_2eb224:
    // 0x2eb224: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2eb224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb228: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2eb228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb22c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2eb22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb230: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2eb230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb238: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB238u;
        // 0x2eb23c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB240u;
}
