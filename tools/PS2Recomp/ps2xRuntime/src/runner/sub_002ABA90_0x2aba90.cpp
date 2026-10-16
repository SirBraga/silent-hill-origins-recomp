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

// Function: sub_002ABA90
// Address: 0x2aba90 - 0x2abb88
void sub_002ABA90_0x2aba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABA90_0x2aba90");
#endif

    switch (ctx->pc) {
        case 0x2aba90u: goto label_2aba90;
        case 0x2aba94u: goto label_2aba94;
        case 0x2aba98u: goto label_2aba98;
        case 0x2aba9cu: goto label_2aba9c;
        case 0x2abaa0u: goto label_2abaa0;
        case 0x2abaa4u: goto label_2abaa4;
        case 0x2abaa8u: goto label_2abaa8;
        case 0x2abaacu: goto label_2abaac;
        case 0x2abab0u: goto label_2abab0;
        case 0x2abab4u: goto label_2abab4;
        case 0x2abab8u: goto label_2abab8;
        case 0x2ababcu: goto label_2ababc;
        case 0x2abac0u: goto label_2abac0;
        case 0x2abac4u: goto label_2abac4;
        case 0x2abac8u: goto label_2abac8;
        case 0x2abaccu: goto label_2abacc;
        case 0x2abad0u: goto label_2abad0;
        case 0x2abad4u: goto label_2abad4;
        case 0x2abad8u: goto label_2abad8;
        case 0x2abadcu: goto label_2abadc;
        case 0x2abae0u: goto label_2abae0;
        case 0x2abae4u: goto label_2abae4;
        case 0x2abae8u: goto label_2abae8;
        case 0x2abaecu: goto label_2abaec;
        case 0x2abaf0u: goto label_2abaf0;
        case 0x2abaf4u: goto label_2abaf4;
        case 0x2abaf8u: goto label_2abaf8;
        case 0x2abafcu: goto label_2abafc;
        case 0x2abb00u: goto label_2abb00;
        case 0x2abb04u: goto label_2abb04;
        case 0x2abb08u: goto label_2abb08;
        case 0x2abb0cu: goto label_2abb0c;
        case 0x2abb10u: goto label_2abb10;
        case 0x2abb14u: goto label_2abb14;
        case 0x2abb18u: goto label_2abb18;
        case 0x2abb1cu: goto label_2abb1c;
        case 0x2abb20u: goto label_2abb20;
        case 0x2abb24u: goto label_2abb24;
        case 0x2abb28u: goto label_2abb28;
        case 0x2abb2cu: goto label_2abb2c;
        case 0x2abb30u: goto label_2abb30;
        case 0x2abb34u: goto label_2abb34;
        case 0x2abb38u: goto label_2abb38;
        case 0x2abb3cu: goto label_2abb3c;
        case 0x2abb40u: goto label_2abb40;
        case 0x2abb44u: goto label_2abb44;
        case 0x2abb48u: goto label_2abb48;
        case 0x2abb4cu: goto label_2abb4c;
        case 0x2abb50u: goto label_2abb50;
        case 0x2abb54u: goto label_2abb54;
        case 0x2abb58u: goto label_2abb58;
        case 0x2abb5cu: goto label_2abb5c;
        case 0x2abb60u: goto label_2abb60;
        case 0x2abb64u: goto label_2abb64;
        case 0x2abb68u: goto label_2abb68;
        case 0x2abb6cu: goto label_2abb6c;
        case 0x2abb70u: goto label_2abb70;
        case 0x2abb74u: goto label_2abb74;
        case 0x2abb78u: goto label_2abb78;
        case 0x2abb7cu: goto label_2abb7c;
        case 0x2abb80u: goto label_2abb80;
        case 0x2abb84u: goto label_2abb84;
        default: break;
    }

    ctx->pc = 0x2aba90u;

label_2aba90:
    // 0x2aba90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2aba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2aba94:
    // 0x2aba94: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2aba94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2aba98:
    // 0x2aba98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2aba98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2aba9c:
    // 0x2aba9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aba9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2abaa0:
    // 0x2abaa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2abaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2abaa4:
    // 0x2abaa4: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x2abaa4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_2abaa8:
    // 0x2abaa8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2abaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2abaac:
    // 0x2abaac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2abaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2abab0:
    // 0x2abab0: 0x2440018  mult        $zero, $s2, $a0
    ctx->pc = 0x2abab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2abab4:
    // 0x2abab4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2abab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2abab8:
    // 0x2abab8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x2abab8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_2ababc:
    // 0x2ababc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ababcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2abac0:
    // 0x2abac0: 0x26030fc8  addiu       $v1, $s0, 0xFC8
    ctx->pc = 0x2abac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_2abac4:
    // 0x2abac4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2abac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2abac8:
    // 0x2abac8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2abac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2abacc:
    // 0x2abacc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x2abaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_2abad0:
    // 0x2abad0: 0x2012  mflo        $a0
    ctx->pc = 0x2abad0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2abad4:
    // 0x2abad4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2abad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_2abad8:
    // 0x2abad8: 0x30d3ffff  andi        $s3, $a2, 0xFFFF
    ctx->pc = 0x2abad8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_2abadc:
    // 0x2abadc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2abadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2abae0:
    // 0x2abae0: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2abae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2abae4:
    // 0x2abae4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2abae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_2abae8:
    // 0x2abae8: 0xa632000e  sh          $s2, 0xE($s1)
    ctx->pc = 0x2abae8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
label_2abaec:
    // 0x2abaec: 0x40f809  jalr        $v0
label_2abaf0:
    if (ctx->pc == 0x2ABAF0u) {
        ctx->pc = 0x2ABAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAECu;
        // 0x2abaf0: 0xa6270020  sh          $a3, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABAF4u;
        goto label_2abaf4;
    }
    ctx->pc = 0x2ABAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABAF4u);
        ctx->pc = 0x2ABAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAECu;
        // 0x2abaf0: 0xa6270020  sh          $a3, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABAECu, 0x2ABAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABAF4u;
label_2abaf4:
    // 0x2abaf4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2abaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2abaf8:
    // 0x2abaf8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2abaf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abafc:
    // 0x2abafc: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x2abafcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_2abb00:
    // 0x2abb00: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_2abb04:
    if (ctx->pc == 0x2ABB04u) {
        ctx->pc = 0x2ABB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB00u;
        // 0x2abb04: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB08u;
        goto label_2abb08;
    }
    ctx->pc = 0x2ABB00u;
    {
        const bool branch_taken_0x2abb00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB00u;
        // 0x2abb04: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb00) {
            ctx->pc = 0x2ABB34u;
            goto label_2abb34;
        }
    }
    ctx->pc = 0x2ABB08u;
label_2abb08:
    // 0x2abb08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2abb08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abb0c:
    // 0x2abb0c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2abb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2abb10:
    // 0x2abb10: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x2abb10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2abb14:
    // 0x2abb14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2abb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2abb18:
    // 0x2abb18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2abb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2abb1c:
    // 0x2abb1c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2abb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2abb20:
    // 0x2abb20: 0x72202b  sltu        $a0, $v1, $s2
    ctx->pc = 0x2abb20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2abb24:
    // 0x2abb24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2abb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2abb28:
    // 0x2abb28: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2abb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2abb2c:
    // 0x2abb2c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_2abb30:
    if (ctx->pc == 0x2ABB30u) {
        ctx->pc = 0x2ABB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB2Cu;
        // 0x2abb30: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB34u;
        goto label_2abb34;
    }
    ctx->pc = 0x2ABB2Cu;
    {
        const bool branch_taken_0x2abb2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB2Cu;
        // 0x2abb30: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb2c) {
            ctx->pc = 0x2ABB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2abb10;
        }
    }
    ctx->pc = 0x2ABB34u;
label_2abb34:
    // 0x2abb34: 0xa6330016  sh          $s3, 0x16($s1)
    ctx->pc = 0x2abb34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 19));
label_2abb38:
    // 0x2abb38: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x2abb38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
label_2abb3c:
    // 0x2abb3c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_2abb40:
    if (ctx->pc == 0x2ABB40u) {
        ctx->pc = 0x2ABB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB3Cu;
        // 0x2abb40: 0xae200028  sw          $zero, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB44u;
        goto label_2abb44;
    }
    ctx->pc = 0x2ABB3Cu;
    {
        const bool branch_taken_0x2abb3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB3Cu;
        // 0x2abb40: 0xae200028  sw          $zero, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb3c) {
            ctx->pc = 0x2ABB64u;
            goto label_2abb64;
        }
    }
    ctx->pc = 0x2ABB44u;
label_2abb44:
    // 0x2abb44: 0x26030fc8  addiu       $v1, $s0, 0xFC8
    ctx->pc = 0x2abb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_2abb48:
    // 0x2abb48: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2abb48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2abb4c:
    // 0x2abb4c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x2abb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_2abb50:
    // 0x2abb50: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2abb50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2abb54:
    // 0x2abb54: 0x40f809  jalr        $v0
label_2abb58:
    if (ctx->pc == 0x2ABB58u) {
        ctx->pc = 0x2ABB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB54u;
        // 0x2abb58: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB5Cu;
        goto label_2abb5c;
    }
    ctx->pc = 0x2ABB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABB5Cu);
        ctx->pc = 0x2ABB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB54u;
        // 0x2abb58: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABB54u, 0x2ABB5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABB5Cu;
label_2abb5c:
    // 0x2abb5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2abb60:
    if (ctx->pc == 0x2ABB60u) {
        ctx->pc = 0x2ABB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB5Cu;
        // 0x2abb60: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB64u;
        goto label_2abb64;
    }
    ctx->pc = 0x2ABB5Cu;
    {
        const bool branch_taken_0x2abb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB5Cu;
        // 0x2abb60: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb5c) {
            ctx->pc = 0x2ABB68u;
            goto label_2abb68;
        }
    }
    ctx->pc = 0x2ABB64u;
label_2abb64:
    // 0x2abb64: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2abb64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_2abb68:
    // 0x2abb68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2abb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2abb6c:
    // 0x2abb6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2abb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2abb70:
    // 0x2abb70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2abb70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2abb74:
    // 0x2abb74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2abb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2abb78:
    // 0x2abb78: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2abb78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2abb7c:
    // 0x2abb7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2abb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2abb80:
    // 0x2abb80: 0x3e00008  jr          $ra
label_2abb84:
    if (ctx->pc == 0x2ABB84u) {
        ctx->pc = 0x2ABB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB80u;
        // 0x2abb84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABB88u;
        goto label_fallthrough_0x2abb80;
    }
    ctx->pc = 0x2ABB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB80u;
        // 0x2abb84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2abb80:
    ctx->pc = 0x2ABB88u;
}
