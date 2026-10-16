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

// Function: sub_0031BF58
// Address: 0x31bf58 - 0x31ce70
void sub_0031BF58_0x31bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BF58_0x31bf58");
#endif

    switch (ctx->pc) {
        case 0x31bf98u: goto label_31bf98;
        case 0x31bfc0u: goto label_31bfc0;
        case 0x31c04cu: goto label_31c04c;
        case 0x31c074u: goto label_31c074;
        case 0x31c0b4u: goto label_31c0b4;
        case 0x31c100u: goto label_31c100;
        case 0x31c104u: goto label_31c104;
        case 0x31c110u: goto label_31c110;
        case 0x31c1d8u: goto label_31c1d8;
        case 0x31c228u: goto label_31c228;
        case 0x31c404u: goto label_31c404;
        case 0x31c42cu: goto label_31c42c;
        case 0x31c558u: goto label_31c558;
        case 0x31c5a8u: goto label_31c5a8;
        case 0x31c5b0u: goto label_31c5b0;
        case 0x31c5ccu: goto label_31c5cc;
        case 0x31c600u: goto label_31c600;
        case 0x31c648u: goto label_31c648;
        case 0x31c678u: goto label_31c678;
        case 0x31c728u: goto label_31c728;
        case 0x31c750u: goto label_31c750;
        case 0x31c774u: goto label_31c774;
        case 0x31c7a8u: goto label_31c7a8;
        case 0x31c7e4u: goto label_31c7e4;
        case 0x31c80cu: goto label_31c80c;
        case 0x31c84cu: goto label_31c84c;
        case 0x31c884u: goto label_31c884;
        case 0x31c8c0u: goto label_31c8c0;
        case 0x31c900u: goto label_31c900;
        case 0x31c928u: goto label_31c928;
        case 0x31c968u: goto label_31c968;
        case 0x31c998u: goto label_31c998;
        case 0x31c9c0u: goto label_31c9c0;
        case 0x31c9e4u: goto label_31c9e4;
        case 0x31ca18u: goto label_31ca18;
        case 0x31ca54u: goto label_31ca54;
        case 0x31ca7cu: goto label_31ca7c;
        case 0x31cabcu: goto label_31cabc;
        case 0x31cae0u: goto label_31cae0;
        case 0x31cb08u: goto label_31cb08;
        case 0x31cb2cu: goto label_31cb2c;
        case 0x31cb60u: goto label_31cb60;
        case 0x31cb9cu: goto label_31cb9c;
        case 0x31cbc4u: goto label_31cbc4;
        case 0x31cc04u: goto label_31cc04;
        case 0x31cc34u: goto label_31cc34;
        case 0x31cc64u: goto label_31cc64;
        case 0x31cca4u: goto label_31cca4;
        case 0x31ccd0u: goto label_31ccd0;
        case 0x31ccf8u: goto label_31ccf8;
        case 0x31cd1cu: goto label_31cd1c;
        case 0x31cd50u: goto label_31cd50;
        case 0x31cd8cu: goto label_31cd8c;
        case 0x31cdb4u: goto label_31cdb4;
        case 0x31cdf4u: goto label_31cdf4;
        case 0x31ce38u: goto label_31ce38;
        default: break;
    }

    ctx->pc = 0x31bf58u;

    // 0x31bf58: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x31bf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x31bf5c: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x31bf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x31bf60: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x31bf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x31bf64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31bf64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf68: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x31bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x31bf6c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x31bf6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bf70: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x31bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x31bf74: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x31bf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x31bf78: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x31bf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x31bf7c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x31bf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x31bf80: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x31bf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x31bf84: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x31bf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x31bf88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31bf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31bf8c: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x31bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x31bf90: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x31bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x31bf94: 0x0  nop
    ctx->pc = 0x31bf94u;
    // NOP
label_31bf98:
    // 0x31bf98: 0x8fb50068  lw          $s5, 0x68($sp)
    ctx->pc = 0x31bf98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31bf9c: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x31bf9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x31bfa0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x31BFA0u;
    {
        const bool branch_taken_0x31bfa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFA0u;
        // 0x31bfa4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfa0) {
            ctx->pc = 0x31BFD8u;
            goto label_31bfd8;
        }
    }
    ctx->pc = 0x31BFA8u;
    // 0x31bfa8: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x31bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x31bfac: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31BFACu;
    {
        const bool branch_taken_0x31bfac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFACu;
        // 0x31bfb0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfac) {
            ctx->pc = 0x31BFD8u;
            goto label_31bfd8;
        }
    }
    ctx->pc = 0x31BFB4u;
    // 0x31bfb4: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x31bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x31bfb8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x31bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x31bfbc: 0x0  nop
    ctx->pc = 0x31bfbcu;
    // NOP
label_31bfc0:
    // 0x31bfc0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x31bfc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31bfc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BFC4u;
    {
        const bool branch_taken_0x31bfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFC4u;
        // 0x31bfc8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfc4) {
            ctx->pc = 0x31BFD8u;
            goto label_31bfd8;
        }
    }
    ctx->pc = 0x31BFCCu;
    // 0x31bfcc: 0x0  nop
    ctx->pc = 0x31bfccu;
    // NOP
    // 0x31bfd0: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31BFD0u;
    {
        const bool branch_taken_0x31bfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x31BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFD0u;
        // 0x31bfd4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfd0) {
            ctx->pc = 0x31BFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bfc0;
        }
    }
    ctx->pc = 0x31BFD8u;
label_31bfd8:
    // 0x31bfd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31bfdc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31bfe0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31bfe4: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x31bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x31bfe8: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x31bfe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31bfec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BFECu;
    {
        const bool branch_taken_0x31bfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFECu;
        // 0x31bff0: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfec) {
            ctx->pc = 0x31BFFCu;
            goto label_31bffc;
        }
    }
    ctx->pc = 0x31BFF4u;
    // 0x31bff4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31BFF4u;
    {
        const bool branch_taken_0x31bff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFF4u;
        // 0x31bff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bff4) {
            ctx->pc = 0x31C00Cu;
            goto label_31c00c;
        }
    }
    ctx->pc = 0x31BFFCu;
label_31bffc:
    // 0x31bffc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31BFFCu;
    {
        const bool branch_taken_0x31bffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFFCu;
        // 0x31c000: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bffc) {
            ctx->pc = 0x31C010u;
            goto label_31c010;
        }
    }
    ctx->pc = 0x31C004u;
    // 0x31c004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c008: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x31c008u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
label_31c00c:
    // 0x31c00c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x31c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_31c010:
    // 0x31c010: 0x951023  subu        $v0, $a0, $s5
    ctx->pc = 0x31c010u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x31c014: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x31c014u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
    // 0x31c018: 0x12800029  beqz        $s4, . + 4 + (0x29 << 2)
    ctx->pc = 0x31C018u;
    {
        const bool branch_taken_0x31c018 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c018) {
            ctx->pc = 0x31C0C0u;
            goto label_31c0c0;
        }
    }
    ctx->pc = 0x31C020u;
    // 0x31c020: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31c020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31c024: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31c024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31c028: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31C028u;
    {
        const bool branch_taken_0x31c028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C028u;
        // 0x31c02c: 0x149040  sll         $s2, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c028) {
            ctx->pc = 0x31C090u;
            goto label_31c090;
        }
    }
    ctx->pc = 0x31C030u;
    // 0x31c030: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31c030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c034: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x31c034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31c038: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31C038u;
    {
        const bool branch_taken_0x31c038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C038u;
        // 0x31c03c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c038) {
            ctx->pc = 0x31C068u;
            goto label_31c068;
        }
    }
    ctx->pc = 0x31C040u;
    // 0x31c040: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31c040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c044: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31C044u;
    SET_GPR_U32(ctx, 31, 0x31C04Cu);
    ctx->pc = 0x31C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C044u;
    // 0x31c048: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31C044u, 0x31C04Cu)) {
        return;
    }
    ctx->pc = 0x31C04Cu;
label_31c04c:
    // 0x31c04c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c050: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31c050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c054: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31c054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31c058: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x31c058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x31c05c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31c05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31c060: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31C060u;
    {
        const bool branch_taken_0x31c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C060u;
        // 0x31c064: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c060) {
            ctx->pc = 0x31C0B4u;
            goto label_31c0b4;
        }
    }
    ctx->pc = 0x31C068u;
label_31c068:
    // 0x31c068: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31c068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c06c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31C06Cu;
    SET_GPR_U32(ctx, 31, 0x31C074u);
    ctx->pc = 0x31C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C06Cu;
    // 0x31c070: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31C06Cu, 0x31C074u)) {
        return;
    }
    ctx->pc = 0x31C074u;
label_31c074:
    // 0x31c074: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31c074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c078: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31c078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c07c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31c080: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31c080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31c084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c088: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31C088u;
    {
        const bool branch_taken_0x31c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C088u;
        // 0x31c08c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c088) {
            ctx->pc = 0x31C0B4u;
            goto label_31c0b4;
        }
    }
    ctx->pc = 0x31C090u;
label_31c090:
    // 0x31c090: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31c094: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C094u;
    {
        const bool branch_taken_0x31c094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c094) {
            ctx->pc = 0x31C098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C094u;
            // 0x31c098: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C0A8u;
            goto label_31c0a8;
        }
    }
    ctx->pc = 0x31C09Cu;
    // 0x31c09c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c0a0: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31c0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31c0a4: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31c0a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31c0a8:
    // 0x31c0a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x31c0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0ac: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31C0ACu;
    SET_GPR_U32(ctx, 31, 0x31C0B4u);
    ctx->pc = 0x31C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C0ACu;
    // 0x31c0b0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31C0ACu, 0x31C0B4u)) {
        return;
    }
    ctx->pc = 0x31C0B4u;
label_31c0b4:
    // 0x31c0b4: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x31c0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x31c0b8: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x31c0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x31c0bc: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x31c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
label_31c0c0:
    // 0x31c0c0: 0x5a000355  blezl       $s0, . + 4 + (0x355 << 2)
    ctx->pc = 0x31C0C0u;
    {
        const bool branch_taken_0x31c0c0 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x31c0c0) {
            ctx->pc = 0x31C0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C0C0u;
            // 0x31c0c4: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CE18u;
            goto label_31ce18;
        }
    }
    ctx->pc = 0x31C0C8u;
    // 0x31c0c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c0cc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C0CCu;
    {
        const bool branch_taken_0x31c0cc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x31C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0CCu;
        // 0x31c0d0: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0cc) {
            ctx->pc = 0x31C0E4u;
            goto label_31c0e4;
        }
    }
    ctx->pc = 0x31C0D4u;
    // 0x31c0d4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31c0d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31c0d8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31c0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31c0dc: 0x14400356  bnez        $v0, . + 4 + (0x356 << 2)
    ctx->pc = 0x31C0DCu;
    {
        const bool branch_taken_0x31c0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C0DCu;
        // 0x31c0e0: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c0dc) {
            ctx->pc = 0x31CE38u;
            goto label_31ce38;
        }
    }
    ctx->pc = 0x31C0E4u;
label_31c0e4:
    // 0x31c0e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31c0e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c0e8: 0xa7a00060  sh          $zero, 0x60($sp)
    ctx->pc = 0x31c0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x31c0ec: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x31c0ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31c0f0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x31c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x31c0f4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x31c0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x31c0f8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x31c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x31c0fc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x31c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_31c100:
    // 0x31c100: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x31c100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_31c104:
    // 0x31c104: 0x94760000  lhu         $s6, 0x0($v1)
    ctx->pc = 0x31c104u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c108: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x31c108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x31c10c: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x31c10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_31c110:
    // 0x31c110: 0x26c3ffe0  addiu       $v1, $s6, -0x20
    ctx->pc = 0x31c110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967264));
    // 0x31c114: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x31c114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x31c118: 0x1040015d  beqz        $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x31C118u;
    {
        const bool branch_taken_0x31c118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C118u;
        // 0x31c11c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c118) {
            ctx->pc = 0x31C690u;
            goto label_31c690;
        }
    }
    ctx->pc = 0x31C120u;
    // 0x31c120: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31c120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31c124: 0x244220d0  addiu       $v0, $v0, 0x20D0
    ctx->pc = 0x31c124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8400));
    // 0x31c128: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31c128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31c12c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c130: 0x800008  jr          $a0
    ctx->pc = 0x31C130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31C138u: goto label_31c138;
            case 0x31C150u: goto label_31c150;
            case 0x31C158u: goto label_31c158;
            case 0x31C160u: goto label_31c160;
            case 0x31C178u: goto label_31c178;
            case 0x31C180u: goto label_31c180;
            case 0x31C18Cu: goto label_31c18c;
            case 0x31C214u: goto label_31c214;
            case 0x31C21Cu: goto label_31c21c;
            case 0x31C258u: goto label_31c258;
            case 0x31C260u: goto label_31c260;
            case 0x31C284u: goto label_31c284;
            case 0x31C28Cu: goto label_31c28c;
            case 0x31C2B8u: goto label_31c2b8;
            case 0x31C2BCu: goto label_31c2bc;
            case 0x31C30Cu: goto label_31c30c;
            case 0x31C374u: goto label_31c374;
            case 0x31C378u: goto label_31c378;
            case 0x31C3B8u: goto label_31c3b8;
            case 0x31C3DCu: goto label_31c3dc;
            case 0x31C444u: goto label_31c444;
            case 0x31C448u: goto label_31c448;
            case 0x31C488u: goto label_31c488;
            case 0x31C494u: goto label_31c494;
            case 0x31C690u: goto label_31c690;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C130u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31C138u;
label_31c138:
    // 0x31c138: 0x97a20060  lhu         $v0, 0x60($sp)
    ctx->pc = 0x31c138u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31c13c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x31C13Cu;
    {
        const bool branch_taken_0x31c13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C13Cu;
        // 0x31c140: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c13c) {
            ctx->pc = 0x31C104u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c104;
        }
    }
    ctx->pc = 0x31C144u;
    // 0x31c144: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x31c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31c148: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x31C148u;
    {
        const bool branch_taken_0x31c148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C148u;
        // 0x31c14c: 0xa7a20060  sh          $v0, 0x60($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c148) {
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C150u;
label_31c150:
    // 0x31c150: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x31C150u;
    {
        const bool branch_taken_0x31c150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C150u;
        // 0x31c154: 0x36940001  ori         $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c150) {
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C158u;
label_31c158:
    // 0x31c158: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x31C158u;
    {
        const bool branch_taken_0x31c158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C158u;
        // 0x31c15c: 0x36940200  ori         $s4, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c158) {
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C160u;
label_31c160:
    // 0x31c160: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31c164: 0x8e64fff8  lw          $a0, -0x8($s3)
    ctx->pc = 0x31c164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31c168: 0x481ffe5  bgez        $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x31C168u;
    {
        const bool branch_taken_0x31c168 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x31C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C168u;
        // 0x31c16c: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c168) {
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C170u;
    // 0x31c170: 0x42023  negu        $a0, $a0
    ctx->pc = 0x31c170u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x31c174: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x31c174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_31c178:
    // 0x31c178: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x31C178u;
    {
        const bool branch_taken_0x31c178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C178u;
        // 0x31c17c: 0x36940004  ori         $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c178) {
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C180u;
label_31c180:
    // 0x31c180: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x31c180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x31c184: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x31C184u;
    {
        const bool branch_taken_0x31c184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C184u;
        // 0x31c188: 0xa7a20060  sh          $v0, 0x60($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c184) {
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C18Cu;
label_31c18c:
    // 0x31c18c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x31c18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31c190: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x31c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x31c194: 0x94b60000  lhu         $s6, 0x0($a1)
    ctx->pc = 0x31c194u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31c198: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x31c198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x31c19c: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31C19Cu;
    {
        const bool branch_taken_0x31c19c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x31C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C19Cu;
        // 0x31c1a0: 0xafa50068  sw          $a1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c19c) {
            ctx->pc = 0x31C1C0u;
            goto label_31c1c0;
        }
    }
    ctx->pc = 0x31C1A4u;
    // 0x31c1a4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c1a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31c1a8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x31c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x31c1ac: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x31c1acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31c1b0: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x31c1b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31c1b4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x31c1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x31c1b8: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x31C1B8u;
    {
        const bool branch_taken_0x31c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1B8u;
        // 0x31c1bc: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1b8) {
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C1C0u;
label_31c1c0:
    // 0x31c1c0: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x31c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x31c1c4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x31c1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31c1c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31C1C8u;
    {
        const bool branch_taken_0x31c1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1C8u;
        // 0x31c1cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1c8) {
            ctx->pc = 0x31C200u;
            goto label_31c200;
        }
    }
    ctx->pc = 0x31C1D0u;
    // 0x31c1d0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x31c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31c1d4: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x31c1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31c1d8:
    // 0x31c1d8: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x31c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x31c1dc: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x31c1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x31c1e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x31c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31c1e4: 0x94560000  lhu         $s6, 0x0($v0)
    ctx->pc = 0x31c1e4u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31c1e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x31c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x31c1ec: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x31c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x31c1f0: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x31c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x31c1f4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x31c1f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31c1f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31C1F8u;
    {
        const bool branch_taken_0x31c1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C1F8u;
        // 0x31c1fc: 0x2031018  mult        $v0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c1f8) {
            ctx->pc = 0x31C1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c1d8;
        }
    }
    ctx->pc = 0x31C200u;
label_31c200:
    // 0x31c200: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x31c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x31c204: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x31c204u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31c208: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x31c208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x31c20c: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x31C20Cu;
    {
        const bool branch_taken_0x31c20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C20Cu;
        // 0x31c210: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c20c) {
            ctx->pc = 0x31C110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c110;
        }
    }
    ctx->pc = 0x31C214u;
label_31c214:
    // 0x31c214: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x31C214u;
    {
        const bool branch_taken_0x31c214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C214u;
        // 0x31c218: 0x36940080  ori         $s4, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c214) {
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C21Cu;
label_31c21c:
    // 0x31c21c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31c21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c220: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x31c220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31c224: 0x0  nop
    ctx->pc = 0x31c224u;
    // NOP
label_31c228:
    // 0x31c228: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x31c228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31c22c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x31c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31c230: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x31c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x31c234: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x31c234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x31c238: 0x94960000  lhu         $s6, 0x0($a0)
    ctx->pc = 0x31c238u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31c23c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x31c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x31c240: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x31c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x31c244: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x31c244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31c248: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31C248u;
    {
        const bool branch_taken_0x31c248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C248u;
        // 0x31c24c: 0xafa40068  sw          $a0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c248) {
            ctx->pc = 0x31C228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c228;
        }
    }
    ctx->pc = 0x31C250u;
    // 0x31c250: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x31C250u;
    {
        const bool branch_taken_0x31c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C250u;
        // 0x31c254: 0xafb00070  sw          $s0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c250) {
            ctx->pc = 0x31C110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c110;
        }
    }
    ctx->pc = 0x31C258u;
label_31c258:
    // 0x31c258: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x31C258u;
    {
        const bool branch_taken_0x31c258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C258u;
        // 0x31c25c: 0x36940040  ori         $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c258) {
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C260u;
label_31c260:
    // 0x31c260: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x31c260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31c264: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x31c264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x31c268: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x31c268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31c26c: 0x5462ffa4  bnel        $v1, $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x31C26Cu;
    {
        const bool branch_taken_0x31c26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31c26c) {
            ctx->pc = 0x31C270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C26Cu;
            // 0x31c270: 0x36940010  ori         $s4, $s4, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C274u;
    // 0x31c274: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x31c274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x31c278: 0x36940020  ori         $s4, $s4, 0x20
    ctx->pc = 0x31c278u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
    // 0x31c27c: 0x1000ffa0  b           . + 4 + (-0x60 << 2)
    ctx->pc = 0x31C27Cu;
    {
        const bool branch_taken_0x31c27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C27Cu;
        // 0x31c280: 0xafa50068  sw          $a1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c27c) {
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C284u;
label_31c284:
    // 0x31c284: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x31C284u;
    {
        const bool branch_taken_0x31c284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C284u;
        // 0x31c288: 0x36940020  ori         $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c284) {
            ctx->pc = 0x31C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c100;
        }
    }
    ctx->pc = 0x31C28Cu;
label_31c28c:
    // 0x31c28c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c28cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31c290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c294: 0x9663fff8  lhu         $v1, -0x8($s3)
    ctx->pc = 0x31c294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31c298: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x31c298u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c29c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x31c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x31c2a0: 0x329e0084  andi        $fp, $s4, 0x84
    ctx->pc = 0x31c2a0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)132);
    // 0x31c2a4: 0x32820004  andi        $v0, $s4, 0x4
    ctx->pc = 0x31c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
    // 0x31c2a8: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x31c2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31c2ac: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x31c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x31c2b0: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x31C2B0u;
    {
        const bool branch_taken_0x31c2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2B0u;
        // 0x31c2b4: 0xa7a00060  sh          $zero, 0x60($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2b0) {
            ctx->pc = 0x31C6B4u;
            goto label_31c6b4;
        }
    }
    ctx->pc = 0x31C2B8u;
label_31c2b8:
    // 0x31c2b8: 0x36940010  ori         $s4, $s4, 0x10
    ctx->pc = 0x31c2b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16);
label_31c2bc:
    // 0x31c2bc: 0x32820020  andi        $v0, $s4, 0x20
    ctx->pc = 0x31c2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
    // 0x31c2c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C2C0u;
    {
        const bool branch_taken_0x31c2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c2c0) {
            ctx->pc = 0x31C2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C2C0u;
            // 0x31c2c4: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C2D8u;
            goto label_31c2d8;
        }
    }
    ctx->pc = 0x31C2C8u;
    // 0x31c2c8: 0x32820010  andi        $v0, $s4, 0x10
    ctx->pc = 0x31c2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
    // 0x31c2cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C2CCu;
    {
        const bool branch_taken_0x31c2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2CCu;
        // 0x31c2d0: 0x32820040  andi        $v0, $s4, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2cc) {
            ctx->pc = 0x31C2E0u;
            goto label_31c2e0;
        }
    }
    ctx->pc = 0x31C2D4u;
    // 0x31c2d4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_31c2d8:
    // 0x31c2d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31C2D8u;
    {
        const bool branch_taken_0x31c2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2D8u;
        // 0x31c2dc: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2d8) {
            ctx->pc = 0x31C2F4u;
            goto label_31c2f4;
        }
    }
    ctx->pc = 0x31C2E0u;
label_31c2e0:
    // 0x31c2e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C2E0u;
    {
        const bool branch_taken_0x31c2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2E0u;
        // 0x31c2e4: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2e0) {
            ctx->pc = 0x31C2F0u;
            goto label_31c2f0;
        }
    }
    ctx->pc = 0x31C2E8u;
    // 0x31c2e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31C2E8u;
    {
        const bool branch_taken_0x31c2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2E8u;
        // 0x31c2ec: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2e8) {
            ctx->pc = 0x31C2F4u;
            goto label_31c2f4;
        }
    }
    ctx->pc = 0x31C2F0u;
label_31c2f0:
    // 0x31c2f0: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x31c2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_31c2f4:
    // 0x31c2f4: 0x601007e  bgez        $s0, . + 4 + (0x7E << 2)
    ctx->pc = 0x31C2F4u;
    {
        const bool branch_taken_0x31c2f4 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x31C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2F4u;
        // 0x31c2f8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2f4) {
            ctx->pc = 0x31C4F0u;
            goto label_31c4f0;
        }
    }
    ctx->pc = 0x31C2FCu;
    // 0x31c2fc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x31c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x31c300: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x31c300u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x31c304: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x31C304u;
    {
        const bool branch_taken_0x31c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C304u;
        // 0x31c308: 0xa7a20060  sh          $v0, 0x60($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c304) {
            ctx->pc = 0x31C4F0u;
            goto label_31c4f0;
        }
    }
    ctx->pc = 0x31C30Cu;
label_31c30c:
    // 0x31c30c: 0x32820020  andi        $v0, $s4, 0x20
    ctx->pc = 0x31c30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
    // 0x31c310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C310u;
    {
        const bool branch_taken_0x31c310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C310u;
        // 0x31c314: 0x8fa3006c  lw          $v1, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c310) {
            ctx->pc = 0x31C328u;
            goto label_31c328;
        }
    }
    ctx->pc = 0x31C318u;
    // 0x31c318: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31c31c: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x31c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31c320: 0x1000ff1d  b           . + 4 + (-0xE3 << 2)
    ctx->pc = 0x31C320u;
    {
        const bool branch_taken_0x31c320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C320u;
        // 0x31c324: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c320) {
            ctx->pc = 0x31BF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bf98;
        }
    }
    ctx->pc = 0x31C328u;
label_31c328:
    // 0x31c328: 0x32820010  andi        $v0, $s4, 0x10
    ctx->pc = 0x31c328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
    // 0x31c32c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C32Cu;
    {
        const bool branch_taken_0x31c32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C32Cu;
        // 0x31c330: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c32c) {
            ctx->pc = 0x31C344u;
            goto label_31c344;
        }
    }
    ctx->pc = 0x31C334u;
    // 0x31c334: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31c338: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x31c338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31c33c: 0x1000ff16  b           . + 4 + (-0xEA << 2)
    ctx->pc = 0x31C33Cu;
    {
        const bool branch_taken_0x31c33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C33Cu;
        // 0x31c340: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c33c) {
            ctx->pc = 0x31BF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bf98;
        }
    }
    ctx->pc = 0x31C344u;
label_31c344:
    // 0x31c344: 0x32820040  andi        $v0, $s4, 0x40
    ctx->pc = 0x31c344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
    // 0x31c348: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C348u;
    {
        const bool branch_taken_0x31c348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C348u;
        // 0x31c34c: 0x8fa5006c  lw          $a1, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c348) {
            ctx->pc = 0x31C360u;
            goto label_31c360;
        }
    }
    ctx->pc = 0x31C350u;
    // 0x31c350: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31c354: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x31c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31c358: 0x1000ff0f  b           . + 4 + (-0xF1 << 2)
    ctx->pc = 0x31C358u;
    {
        const bool branch_taken_0x31c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C358u;
        // 0x31c35c: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c358) {
            ctx->pc = 0x31BF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bf98;
        }
    }
    ctx->pc = 0x31C360u;
label_31c360:
    // 0x31c360: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31c364: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x31c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x31c368: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x31c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31c36c: 0x1000ff0a  b           . + 4 + (-0xF6 << 2)
    ctx->pc = 0x31C36Cu;
    {
        const bool branch_taken_0x31c36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C36Cu;
        // 0x31c370: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c36c) {
            ctx->pc = 0x31BF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bf98;
        }
    }
    ctx->pc = 0x31C374u;
label_31c374:
    // 0x31c374: 0x36940010  ori         $s4, $s4, 0x10
    ctx->pc = 0x31c374u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16);
label_31c378:
    // 0x31c378: 0x32820020  andi        $v0, $s4, 0x20
    ctx->pc = 0x31c378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
    // 0x31c37c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C37Cu;
    {
        const bool branch_taken_0x31c37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c37c) {
            ctx->pc = 0x31C380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C37Cu;
            // 0x31c380: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C394u;
            goto label_31c394;
        }
    }
    ctx->pc = 0x31C384u;
    // 0x31c384: 0x32820010  andi        $v0, $s4, 0x10
    ctx->pc = 0x31c384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
    // 0x31c388: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C388u;
    {
        const bool branch_taken_0x31c388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C388u;
        // 0x31c38c: 0x32820040  andi        $v0, $s4, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c388) {
            ctx->pc = 0x31C39Cu;
            goto label_31c39c;
        }
    }
    ctx->pc = 0x31C390u;
    // 0x31c390: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_31c394:
    // 0x31c394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31C394u;
    {
        const bool branch_taken_0x31c394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C394u;
        // 0x31c398: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c394) {
            ctx->pc = 0x31C3B0u;
            goto label_31c3b0;
        }
    }
    ctx->pc = 0x31C39Cu;
label_31c39c:
    // 0x31c39c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C39Cu;
    {
        const bool branch_taken_0x31c39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C39Cu;
        // 0x31c3a0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c39c) {
            ctx->pc = 0x31C3ACu;
            goto label_31c3ac;
        }
    }
    ctx->pc = 0x31C3A4u;
    // 0x31c3a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31C3A4u;
    {
        const bool branch_taken_0x31c3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3A4u;
        // 0x31c3a8: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3a4) {
            ctx->pc = 0x31C3B0u;
            goto label_31c3b0;
        }
    }
    ctx->pc = 0x31C3ACu;
label_31c3ac:
    // 0x31c3ac: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x31c3acu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_31c3b0:
    // 0x31c3b0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x31C3B0u;
    {
        const bool branch_taken_0x31c3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3B0u;
        // 0x31c3b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3b0) {
            ctx->pc = 0x31C4ECu;
            goto label_31c4ec;
        }
    }
    ctx->pc = 0x31C3B8u;
label_31c3b8:
    // 0x31c3b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31c3bc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c3bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31c3c0: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x31c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x31c3c4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x31c3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31c3c8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x31c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x31c3cc: 0x36940002  ori         $s4, $s4, 0x2
    ctx->pc = 0x31c3ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
    // 0x31c3d0: 0x24160078  addiu       $s6, $zero, 0x78
    ctx->pc = 0x31c3d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x31c3d4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x31C3D4u;
    {
        const bool branch_taken_0x31c3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3D4u;
        // 0x31c3d8: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3d4) {
            ctx->pc = 0x31C4ECu;
            goto label_31c4ec;
        }
    }
    ctx->pc = 0x31C3DCu;
label_31c3dc:
    // 0x31c3dc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c3dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x31c3e0: 0x8e75fff8  lw          $s5, -0x8($s3)
    ctx->pc = 0x31c3e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x31c3e4: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x31C3E4u;
    {
        const bool branch_taken_0x31c3e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3E4u;
        // 0x31c3e8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3e4) {
            ctx->pc = 0x31C3F0u;
            goto label_31c3f0;
        }
    }
    ctx->pc = 0x31C3ECu;
    // 0x31c3ec: 0x24552058  addiu       $s5, $v0, 0x2058
    ctx->pc = 0x31c3ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8280));
label_31c3f0:
    // 0x31c3f0: 0x6e0000c  bltz        $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x31C3F0u;
    {
        const bool branch_taken_0x31c3f0 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x31C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C3F0u;
        // 0x31c3f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c3f0) {
            ctx->pc = 0x31C424u;
            goto label_31c424;
        }
    }
    ctx->pc = 0x31C3F8u;
    // 0x31c3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31c3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3fc: 0xc0c837c  jal         func_320DF0
    ctx->pc = 0x31C3FCu;
    SET_GPR_U32(ctx, 31, 0x31C404u);
    ctx->pc = 0x31C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C3FCu;
    // 0x31c400: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320DF0u, 0x31C3FCu, 0x31C404u)) {
        return;
    }
    ctx->pc = 0x31C404u;
label_31c404:
    // 0x31c404: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C404u;
    {
        const bool branch_taken_0x31c404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C404u;
        // 0x31c408: 0x551023  subu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c404) {
            ctx->pc = 0x31C41Cu;
            goto label_31c41c;
        }
    }
    ctx->pc = 0x31C40Cu;
    // 0x31c40c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31c40cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x31c410: 0x2e2182a  slt         $v1, $s7, $v0
    ctx->pc = 0x31c410u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31c414: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C414u;
    {
        const bool branch_taken_0x31c414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C414u;
        // 0x31c418: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c414) {
            ctx->pc = 0x31C430u;
            goto label_31c430;
        }
    }
    ctx->pc = 0x31C41Cu;
label_31c41c:
    // 0x31c41c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31C41Cu;
    {
        const bool branch_taken_0x31c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C41Cu;
        // 0x31c420: 0xafb70064  sw          $s7, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c41c) {
            ctx->pc = 0x31C430u;
            goto label_31c430;
        }
    }
    ctx->pc = 0x31C424u;
label_31c424:
    // 0x31c424: 0xc0c5dc0  jal         func_317700
    ctx->pc = 0x31C424u;
    SET_GPR_U32(ctx, 31, 0x31C42Cu);
    ctx->pc = 0x31C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C424u;
    // 0x31c428: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317700u, 0x31C424u, 0x31C42Cu)) {
        return;
    }
    ctx->pc = 0x31C42Cu;
label_31c42c:
    // 0x31c42c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x31c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_31c430:
    // 0x31c430: 0x32840004  andi        $a0, $s4, 0x4
    ctx->pc = 0x31c430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
    // 0x31c434: 0xa7a00060  sh          $zero, 0x60($sp)
    ctx->pc = 0x31c434u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x31c438: 0x329e0084  andi        $fp, $s4, 0x84
    ctx->pc = 0x31c438u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)132);
    // 0x31c43c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x31C43Cu;
    {
        const bool branch_taken_0x31c43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C43Cu;
        // 0x31c440: 0xafa40084  sw          $a0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c43c) {
            ctx->pc = 0x31C6B4u;
            goto label_31c6b4;
        }
    }
    ctx->pc = 0x31C444u;
label_31c444:
    // 0x31c444: 0x36940010  ori         $s4, $s4, 0x10
    ctx->pc = 0x31c444u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16);
label_31c448:
    // 0x31c448: 0x32820020  andi        $v0, $s4, 0x20
    ctx->pc = 0x31c448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
    // 0x31c44c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C44Cu;
    {
        const bool branch_taken_0x31c44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c44c) {
            ctx->pc = 0x31C450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C44Cu;
            // 0x31c450: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C464u;
            goto label_31c464;
        }
    }
    ctx->pc = 0x31C454u;
    // 0x31c454: 0x32820010  andi        $v0, $s4, 0x10
    ctx->pc = 0x31c454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
    // 0x31c458: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C458u;
    {
        const bool branch_taken_0x31c458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C458u;
        // 0x31c45c: 0x32820040  andi        $v0, $s4, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c458) {
            ctx->pc = 0x31C46Cu;
            goto label_31c46c;
        }
    }
    ctx->pc = 0x31C460u;
    // 0x31c460: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c460u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_31c464:
    // 0x31c464: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31C464u;
    {
        const bool branch_taken_0x31c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C464u;
        // 0x31c468: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c464) {
            ctx->pc = 0x31C480u;
            goto label_31c480;
        }
    }
    ctx->pc = 0x31C46Cu;
label_31c46c:
    // 0x31c46c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C46Cu;
    {
        const bool branch_taken_0x31c46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C46Cu;
        // 0x31c470: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c46c) {
            ctx->pc = 0x31C47Cu;
            goto label_31c47c;
        }
    }
    ctx->pc = 0x31C474u;
    // 0x31c474: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31C474u;
    {
        const bool branch_taken_0x31c474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C474u;
        // 0x31c478: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c474) {
            ctx->pc = 0x31C480u;
            goto label_31c480;
        }
    }
    ctx->pc = 0x31C47Cu;
label_31c47c:
    // 0x31c47c: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x31c47cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_31c480:
    // 0x31c480: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x31C480u;
    {
        const bool branch_taken_0x31c480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C480u;
        // 0x31c484: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c480) {
            ctx->pc = 0x31C4ECu;
            goto label_31c4ec;
        }
    }
    ctx->pc = 0x31C488u;
label_31c488:
    // 0x31c488: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31c488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31c48c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31C48Cu;
    {
        const bool branch_taken_0x31c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C48Cu;
        // 0x31c490: 0x24422068  addiu       $v0, $v0, 0x2068 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c48c) {
            ctx->pc = 0x31C49Cu;
            goto label_31c49c;
        }
    }
    ctx->pc = 0x31C494u;
label_31c494:
    // 0x31c494: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31c494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x31c498: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x31c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
label_31c49c:
    // 0x31c49c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x31c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x31c4a0: 0x32820020  andi        $v0, $s4, 0x20
    ctx->pc = 0x31c4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
    // 0x31c4a4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C4A4u;
    {
        const bool branch_taken_0x31c4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c4a4) {
            ctx->pc = 0x31C4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C4A4u;
            // 0x31c4a8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C4BCu;
            goto label_31c4bc;
        }
    }
    ctx->pc = 0x31C4ACu;
    // 0x31c4ac: 0x32820010  andi        $v0, $s4, 0x10
    ctx->pc = 0x31c4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
    // 0x31c4b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C4B0u;
    {
        const bool branch_taken_0x31c4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4B0u;
        // 0x31c4b4: 0x32820040  andi        $v0, $s4, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4b0) {
            ctx->pc = 0x31C4C4u;
            goto label_31c4c4;
        }
    }
    ctx->pc = 0x31C4B8u;
    // 0x31c4b8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x31c4b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_31c4bc:
    // 0x31c4bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31C4BCu;
    {
        const bool branch_taken_0x31c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4BCu;
        // 0x31c4c0: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4bc) {
            ctx->pc = 0x31C4D8u;
            goto label_31c4d8;
        }
    }
    ctx->pc = 0x31C4C4u;
label_31c4c4:
    // 0x31c4c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C4C4u;
    {
        const bool branch_taken_0x31c4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4C4u;
        // 0x31c4c8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4c4) {
            ctx->pc = 0x31C4D4u;
            goto label_31c4d4;
        }
    }
    ctx->pc = 0x31C4CCu;
    // 0x31c4cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31C4CCu;
    {
        const bool branch_taken_0x31c4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4CCu;
        // 0x31c4d0: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4cc) {
            ctx->pc = 0x31C4D8u;
            goto label_31c4d8;
        }
    }
    ctx->pc = 0x31C4D4u;
label_31c4d4:
    // 0x31c4d4: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x31c4d4u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_31c4d8:
    // 0x31c4d8: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x31c4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x31c4dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C4DCu;
    {
        const bool branch_taken_0x31c4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4DCu;
        // 0x31c4e0: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4dc) {
            ctx->pc = 0x31C4ECu;
            goto label_31c4ec;
        }
    }
    ctx->pc = 0x31C4E4u;
    // 0x31c4e4: 0x36820002  ori         $v0, $s4, 0x2
    ctx->pc = 0x31c4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
    // 0x31c4e8: 0x50a00b  movn        $s4, $v0, $s0
    ctx->pc = 0x31c4e8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2));
label_31c4ec:
    // 0x31c4ec: 0xa7a00060  sh          $zero, 0x60($sp)
    ctx->pc = 0x31c4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 0));
label_31c4f0:
    // 0x31c4f0: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C4F0u;
    {
        const bool branch_taken_0x31c4f0 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x31C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C4F0u;
        // 0x31c4f4: 0xafb70074  sw          $s7, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c4f0) {
            ctx->pc = 0x31C500u;
            goto label_31c500;
        }
    }
    ctx->pc = 0x31C4F8u;
    // 0x31c4f8: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x31c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x31c4fc: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x31c4fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_31c500:
    // 0x31c500: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x31c500u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31c504: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C504u;
    {
        const bool branch_taken_0x31c504 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C504u;
        // 0x31c508: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c504) {
            ctx->pc = 0x31C520u;
            goto label_31c520;
        }
    }
    ctx->pc = 0x31C50Cu;
    // 0x31c50c: 0x32850004  andi        $a1, $s4, 0x4
    ctx->pc = 0x31c50cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
    // 0x31c510: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x31c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x31c514: 0x329e0084  andi        $fp, $s4, 0x84
    ctx->pc = 0x31c514u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)132);
    // 0x31c518: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x31C518u;
    {
        const bool branch_taken_0x31c518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C518u;
        // 0x31c51c: 0xafa50084  sw          $a1, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c518) {
            ctx->pc = 0x31C650u;
            goto label_31c650;
        }
    }
    ctx->pc = 0x31C520u;
label_31c520:
    // 0x31c520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c524: 0x5242001a  beql        $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x31C524u;
    {
        const bool branch_taken_0x31c524 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x31c524) {
            ctx->pc = 0x31C528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C524u;
            // 0x31c528: 0x32850004  andi        $a1, $s4, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C590u;
            goto label_31c590;
        }
    }
    ctx->pc = 0x31C52Cu;
    // 0x31c52c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x31C52Cu;
    {
        const bool branch_taken_0x31c52c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C52Cu;
        // 0x31c530: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c52c) {
            ctx->pc = 0x31C544u;
            goto label_31c544;
        }
    }
    ctx->pc = 0x31C534u;
    // 0x31c534: 0x1242002e  beq         $s2, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x31C534u;
    {
        const bool branch_taken_0x31c534 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x31C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C534u;
        // 0x31c538: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c534) {
            ctx->pc = 0x31C5F0u;
            goto label_31c5f0;
        }
    }
    ctx->pc = 0x31C53Cu;
    // 0x31c53c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x31C53Cu;
    {
        const bool branch_taken_0x31c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C53Cu;
        // 0x31c540: 0x32840004  andi        $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c53c) {
            ctx->pc = 0x31C634u;
            goto label_31c634;
        }
    }
    ctx->pc = 0x31C544u;
label_31c544:
    // 0x31c544: 0x32840004  andi        $a0, $s4, 0x4
    ctx->pc = 0x31c544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
    // 0x31c548: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x31c548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x31c54c: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x31c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x31c550: 0x329e0084  andi        $fp, $s4, 0x84
    ctx->pc = 0x31c550u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)132);
    // 0x31c554: 0x0  nop
    ctx->pc = 0x31c554u;
    // NOP
label_31c558:
    // 0x31c558: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x31c558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x31c55c: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x31c55cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x31c560: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x31c560u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x31c564: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x31c564u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x31c568: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31c568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31c56c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31C56Cu;
    {
        const bool branch_taken_0x31c56c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C56Cu;
        // 0x31c570: 0xa6a20000  sh          $v0, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c56c) {
            ctx->pc = 0x31C558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c558;
        }
    }
    ctx->pc = 0x31C574u;
    // 0x31c574: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x31C574u;
    {
        const bool branch_taken_0x31c574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C574u;
        // 0x31c578: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c574) {
            ctx->pc = 0x31C650u;
            goto label_31c650;
        }
    }
    ctx->pc = 0x31C57Cu;
    // 0x31c57c: 0x10430035  beq         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x31C57Cu;
    {
        const bool branch_taken_0x31c57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x31C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C57Cu;
        // 0x31c580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c57c) {
            ctx->pc = 0x31C654u;
            goto label_31c654;
        }
    }
    ctx->pc = 0x31C584u;
    // 0x31c584: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x31c584u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x31c588: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x31C588u;
    {
        const bool branch_taken_0x31c588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C588u;
        // 0x31c58c: 0xa6a30000  sh          $v1, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c588) {
            ctx->pc = 0x31C654u;
            goto label_31c654;
        }
    }
    ctx->pc = 0x31C590u;
label_31c590:
    // 0x31c590: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x31c590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31c594: 0x329e0084  andi        $fp, $s4, 0x84
    ctx->pc = 0x31c594u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)132);
    // 0x31c598: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31C598u;
    {
        const bool branch_taken_0x31c598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C598u;
        // 0x31c59c: 0xafa50084  sw          $a1, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c598) {
            ctx->pc = 0x31C5DCu;
            goto label_31c5dc;
        }
    }
    ctx->pc = 0x31C5A0u;
    // 0x31c5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5a4: 0x0  nop
    ctx->pc = 0x31c5a4u;
    // NOP
label_31c5a8:
    // 0x31c5a8: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x31C5A8u;
    SET_GPR_U32(ctx, 31, 0x31C5B0u);
    ctx->pc = 0x31C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C5A8u;
    // 0x31c5ac: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x31C5A8u, 0x31C5B0u)) {
        return;
    }
    ctx->pc = 0x31C5B0u;
label_31c5b0:
    // 0x31c5b0: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x31c5b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x31c5b4: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x31c5b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x31c5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31c5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31c5c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x31c5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31c5c4: 0xc07db0a  jal         func_1F6C28
    ctx->pc = 0x31C5C4u;
    SET_GPR_U32(ctx, 31, 0x31C5CCu);
    ctx->pc = 0x31C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C5C4u;
    // 0x31c5c8: 0xa6a20000  sh          $v0, 0x0($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x31C5C4u, 0x31C5CCu)) {
        return;
    }
    ctx->pc = 0x31C5CCu;
label_31c5cc:
    // 0x31c5cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31c5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5d0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x31c5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x31c5d4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x31C5D4u;
    {
        const bool branch_taken_0x31c5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5D4u;
        // 0x31c5d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5d4) {
            ctx->pc = 0x31C5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c5a8;
        }
    }
    ctx->pc = 0x31C5DCu;
label_31c5dc:
    // 0x31c5dc: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x31c5dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x31c5e0: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x31c5e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x31c5e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31c5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31c5e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x31C5E8u;
    {
        const bool branch_taken_0x31c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5E8u;
        // 0x31c5ec: 0xa6a20000  sh          $v0, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5e8) {
            ctx->pc = 0x31C650u;
            goto label_31c650;
        }
    }
    ctx->pc = 0x31C5F0u;
label_31c5f0:
    // 0x31c5f0: 0x32820004  andi        $v0, $s4, 0x4
    ctx->pc = 0x31c5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
    // 0x31c5f4: 0x329e0084  andi        $fp, $s4, 0x84
    ctx->pc = 0x31c5f4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)132);
    // 0x31c5f8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x31c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x31c5fc: 0x0  nop
    ctx->pc = 0x31c5fcu;
    // NOP
label_31c600:
    // 0x31c600: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x31c600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x31c604: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x31c604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x31c608: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31c608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31c60c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31c60cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31c610: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x31c610u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x31c614: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31c614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31c618: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x31c618u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x31c61c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c620: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x31c620u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31c624: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x31C624u;
    {
        const bool branch_taken_0x31c624 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C624u;
        // 0x31c628: 0xa6a30000  sh          $v1, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c624) {
            ctx->pc = 0x31C600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c600;
        }
    }
    ctx->pc = 0x31C62Cu;
    // 0x31c62c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31C62Cu;
    {
        const bool branch_taken_0x31c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C62Cu;
        // 0x31c630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c62c) {
            ctx->pc = 0x31C654u;
            goto label_31c654;
        }
    }
    ctx->pc = 0x31C634u;
label_31c634:
    // 0x31c634: 0x24552090  addiu       $s5, $v0, 0x2090
    ctx->pc = 0x31c634u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8336));
    // 0x31c638: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x31c638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x31c63c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31c63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c640: 0xc0c5dc0  jal         func_317700
    ctx->pc = 0x31C640u;
    SET_GPR_U32(ctx, 31, 0x31C648u);
    ctx->pc = 0x31C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C640u;
    // 0x31c644: 0x329e0084  andi        $fp, $s4, 0x84 (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)132);
    ctx->in_delay_slot = false;
    ctx->pc = 0x317700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317700u, 0x31C640u, 0x31C648u)) {
        return;
    }
    ctx->pc = 0x31C648u;
label_31c648:
    // 0x31c648: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x31C648u;
    {
        const bool branch_taken_0x31c648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C648u;
        // 0x31c64c: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c648) {
            ctx->pc = 0x31C6B4u;
            goto label_31c6b4;
        }
    }
    ctx->pc = 0x31C650u;
label_31c650:
    // 0x31c650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31c654:
    // 0x31c654: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31C654u;
    {
        const bool branch_taken_0x31c654 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x31C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C654u;
        // 0x31c658: 0x26a3ffb0  addiu       $v1, $s5, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c654) {
            ctx->pc = 0x31C680u;
            goto label_31c680;
        }
    }
    ctx->pc = 0x31C65Cu;
    // 0x31c65c: 0x32820200  andi        $v0, $s4, 0x200
    ctx->pc = 0x31c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
    // 0x31c660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C660u;
    {
        const bool branch_taken_0x31c660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C660u;
        // 0x31c664: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c660) {
            ctx->pc = 0x31C680u;
            goto label_31c680;
        }
    }
    ctx->pc = 0x31C668u;
    // 0x31c668: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x31c668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c66c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c670: 0xc0c6f68  jal         func_31BDA0
    ctx->pc = 0x31C670u;
    SET_GPR_U32(ctx, 31, 0x31C678u);
    ctx->pc = 0x31C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C670u;
    // 0x31c674: 0x27a70064  addiu       $a3, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31BDA0u, 0x31C670u, 0x31C678u)) {
        return;
    }
    ctx->pc = 0x31C678u;
label_31c678:
    // 0x31c678: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31C678u;
    {
        const bool branch_taken_0x31c678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C678u;
        // 0x31c67c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c678) {
            ctx->pc = 0x31C6B4u;
            goto label_31c6b4;
        }
    }
    ctx->pc = 0x31C680u;
label_31c680:
    // 0x31c680: 0x3a31023  subu        $v0, $sp, $v1
    ctx->pc = 0x31c680u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x31c684: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31c684u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x31c688: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31C688u;
    {
        const bool branch_taken_0x31c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C688u;
        // 0x31c68c: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c688) {
            ctx->pc = 0x31C6B4u;
            goto label_31c6b4;
        }
    }
    ctx->pc = 0x31C690u;
label_31c690:
    // 0x31c690: 0x12c001e0  beqz        $s6, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x31C690u;
    {
        const bool branch_taken_0x31c690 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C690u;
        // 0x31c694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c690) {
            ctx->pc = 0x31CE14u;
            goto label_31ce14;
        }
    }
    ctx->pc = 0x31C698u;
    // 0x31c698: 0x32850004  andi        $a1, $s4, 0x4
    ctx->pc = 0x31c698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
    // 0x31c69c: 0xa7b60000  sh          $s6, 0x0($sp)
    ctx->pc = 0x31c69cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x31c6a0: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x31c6a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6a4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x31c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x31c6a8: 0x329e0084  andi        $fp, $s4, 0x84
    ctx->pc = 0x31c6a8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)132);
    // 0x31c6ac: 0xa7a00060  sh          $zero, 0x60($sp)
    ctx->pc = 0x31c6acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x31c6b0: 0xafa50084  sw          $a1, 0x84($sp)
    ctx->pc = 0x31c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 5));
label_31c6b4:
    // 0x31c6b4: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x31c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x31c6b8: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x31c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x31c6bc: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x31c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x31c6c0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x31c6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31c6c4: 0x97a30060  lhu         $v1, 0x60($sp)
    ctx->pc = 0x31c6c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31c6c8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x31c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31c6cc: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x31c6ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
    // 0x31c6d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C6D0u;
    {
        const bool branch_taken_0x31c6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6D0u;
        // 0x31c6d4: 0xafa40078  sw          $a0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6d0) {
            ctx->pc = 0x31C6E4u;
            goto label_31c6e4;
        }
    }
    ctx->pc = 0x31C6D8u;
    // 0x31c6d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31c6dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31C6DCu;
    {
        const bool branch_taken_0x31c6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6DCu;
        // 0x31c6e0: 0xafa40078  sw          $a0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6dc) {
            ctx->pc = 0x31C6F4u;
            goto label_31c6f4;
        }
    }
    ctx->pc = 0x31C6E4u;
label_31c6e4:
    // 0x31c6e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x31c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31c6e8: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x31c6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x31c6ec: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c6f0: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x31c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_31c6f4:
    // 0x31c6f4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x31c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31c6f8: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x31c6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31c6fc: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x31c6fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31c700: 0x17c00052  bnez        $fp, . + 4 + (0x52 << 2)
    ctx->pc = 0x31C700u;
    {
        const bool branch_taken_0x31c700 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C700u;
        // 0x31c704: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c700) {
            ctx->pc = 0x31C84Cu;
            goto label_31c84c;
        }
    }
    ctx->pc = 0x31C708u;
    // 0x31c708: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x31c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31c70c: 0xa28023  subu        $s0, $a1, $v0
    ctx->pc = 0x31c70cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31c710: 0x1a00004e  blez        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x31C710u;
    {
        const bool branch_taken_0x31c710 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x31C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C710u;
        // 0x31c714: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c710) {
            ctx->pc = 0x31C84Cu;
            goto label_31c84c;
        }
    }
    ctx->pc = 0x31C718u;
    // 0x31c718: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31C718u;
    {
        const bool branch_taken_0x31c718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C718u;
        // 0x31c71c: 0x3c17006b  lui         $s7, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c718) {
            ctx->pc = 0x31C7B8u;
            goto label_31c7b8;
        }
    }
    ctx->pc = 0x31C720u;
    // 0x31c720: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31c720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c724: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31c724u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31c728:
    // 0x31c728: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31c72c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31C72Cu;
    {
        const bool branch_taken_0x31c72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c72c) {
            ctx->pc = 0x31C730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C72Cu;
            // 0x31c730: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C790u;
            goto label_31c790;
        }
    }
    ctx->pc = 0x31C734u;
    // 0x31c734: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31c734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c738: 0x2cc20021  sltiu       $v0, $a2, 0x21
    ctx->pc = 0x31c738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x31c73c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31C73Cu;
    {
        const bool branch_taken_0x31c73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C73Cu;
        // 0x31c740: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c73c) {
            ctx->pc = 0x31C76Cu;
            goto label_31c76c;
        }
    }
    ctx->pc = 0x31C744u;
    // 0x31c744: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0
    ctx->pc = 0x31c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
    // 0x31c748: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31C748u;
    SET_GPR_U32(ctx, 31, 0x31C750u);
    ctx->pc = 0x31C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C748u;
    // 0x31c74c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31C748u, 0x31C750u)) {
        return;
    }
    ctx->pc = 0x31C750u;
label_31c750:
    // 0x31c750: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c754: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c758: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31c758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31c75c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x31c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x31c760: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31c760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31c764: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31C764u;
    {
        const bool branch_taken_0x31c764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C764u;
        // 0x31c768: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c764) {
            ctx->pc = 0x31C7A8u;
            goto label_31c7a8;
        }
    }
    ctx->pc = 0x31C76Cu;
label_31c76c:
    // 0x31c76c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31C76Cu;
    SET_GPR_U32(ctx, 31, 0x31C774u);
    ctx->pc = 0x31C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C76Cu;
    // 0x31c770: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31C76Cu, 0x31C774u)) {
        return;
    }
    ctx->pc = 0x31C774u;
label_31c774:
    // 0x31c774: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31c774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c778: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c77c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31c780: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31c780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31c784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c788: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31C788u;
    {
        const bool branch_taken_0x31c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C788u;
        // 0x31c78c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c788) {
            ctx->pc = 0x31C7A8u;
            goto label_31c7a8;
        }
    }
    ctx->pc = 0x31C790u;
label_31c790:
    // 0x31c790: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31C790u;
    {
        const bool branch_taken_0x31c790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c790) {
            ctx->pc = 0x31C794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C790u;
            // 0x31c794: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C798u;
            goto label_31c798;
        }
    }
    ctx->pc = 0x31C798u;
label_31c798:
    // 0x31c798: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31c798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31c79c: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0
    ctx->pc = 0x31c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
    // 0x31c7a0: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31C7A0u;
    SET_GPR_U32(ctx, 31, 0x31C7A8u);
    ctx->pc = 0x31C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7A0u;
    // 0x31c7a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31C7A0u, 0x31C7A8u)) {
        return;
    }
    ctx->pc = 0x31C7A8u;
label_31c7a8:
    // 0x31c7a8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x31c7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x31c7ac: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x31c7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31c7b0: 0x5040ffdd  beql        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x31C7B0u;
    {
        const bool branch_taken_0x31c7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c7b0) {
            ctx->pc = 0x31C7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C7B0u;
            // 0x31c7b4: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c728;
        }
    }
    ctx->pc = 0x31C7B8u;
label_31c7b8:
    // 0x31c7b8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31c7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31c7bc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31c7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31c7c0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31C7C0u;
    {
        const bool branch_taken_0x31c7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7C0u;
        // 0x31c7c4: 0x109040  sll         $s2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7c0) {
            ctx->pc = 0x31C828u;
            goto label_31c828;
        }
    }
    ctx->pc = 0x31C7C8u;
    // 0x31c7c8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31c7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c7cc: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x31c7ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31c7d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31C7D0u;
    {
        const bool branch_taken_0x31c7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7D0u;
        // 0x31c7d4: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7d0) {
            ctx->pc = 0x31C800u;
            goto label_31c800;
        }
    }
    ctx->pc = 0x31C7D8u;
    // 0x31c7d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c7dc: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31C7DCu;
    SET_GPR_U32(ctx, 31, 0x31C7E4u);
    ctx->pc = 0x31C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C7DCu;
    // 0x31c7e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31C7DCu, 0x31C7E4u)) {
        return;
    }
    ctx->pc = 0x31C7E4u;
label_31c7e4:
    // 0x31c7e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c7e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c7ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31c7f0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31c7f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31c7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31c7f8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31C7F8u;
    {
        const bool branch_taken_0x31c7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C7F8u;
        // 0x31c7fc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c7f8) {
            ctx->pc = 0x31C84Cu;
            goto label_31c84c;
        }
    }
    ctx->pc = 0x31C800u;
label_31c800:
    // 0x31c800: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31c800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c804: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31C804u;
    SET_GPR_U32(ctx, 31, 0x31C80Cu);
    ctx->pc = 0x31C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C804u;
    // 0x31c808: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31C804u, 0x31C80Cu)) {
        return;
    }
    ctx->pc = 0x31C80Cu;
label_31c80c:
    // 0x31c80c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c810: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c814: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31c814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31c818: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31c818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31c81c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c820: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31C820u;
    {
        const bool branch_taken_0x31c820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C820u;
        // 0x31c824: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c820) {
            ctx->pc = 0x31C84Cu;
            goto label_31c84c;
        }
    }
    ctx->pc = 0x31C828u;
label_31c828:
    // 0x31c828: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31c828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31c82c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C82Cu;
    {
        const bool branch_taken_0x31c82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c82c) {
            ctx->pc = 0x31C830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C82Cu;
            // 0x31c830: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C840u;
            goto label_31c840;
        }
    }
    ctx->pc = 0x31C834u;
    // 0x31c834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c838: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31c838u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31c83c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31c83cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31c840:
    // 0x31c840: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0
    ctx->pc = 0x31c840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
    // 0x31c844: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31C844u;
    SET_GPR_U32(ctx, 31, 0x31C84Cu);
    ctx->pc = 0x31C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C844u;
    // 0x31c848: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31C844u, 0x31C84Cu)) {
        return;
    }
    ctx->pc = 0x31C84Cu;
label_31c84c:
    // 0x31c84c: 0x97a20060  lhu         $v0, 0x60($sp)
    ctx->pc = 0x31c84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31c850: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x31C850u;
    {
        const bool branch_taken_0x31c850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C850u;
        // 0x31c854: 0x32820002  andi        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c850) {
            ctx->pc = 0x31C8C8u;
            goto label_31c8c8;
        }
    }
    ctx->pc = 0x31C858u;
    // 0x31c858: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31c858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31c85c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31c85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31c860: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x31C860u;
    {
        const bool branch_taken_0x31c860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c860) {
            ctx->pc = 0x31C864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C860u;
            // 0x31c864: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C8A0u;
            goto label_31c8a0;
        }
    }
    ctx->pc = 0x31C868u;
    // 0x31c868: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31c868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c86c: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x31c86cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x31c870: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31C870u;
    {
        const bool branch_taken_0x31c870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C870u;
        // 0x31c874: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c870) {
            ctx->pc = 0x31C898u;
            goto label_31c898;
        }
    }
    ctx->pc = 0x31C878u;
    // 0x31c878: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31c878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31c87c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31C87Cu;
    SET_GPR_U32(ctx, 31, 0x31C884u);
    ctx->pc = 0x31C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C87Cu;
    // 0x31c880: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31C87Cu, 0x31C884u)) {
        return;
    }
    ctx->pc = 0x31C884u;
label_31c884:
    // 0x31c884: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31c884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c888: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c88c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x31c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x31c890: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31C890u;
    {
        const bool branch_taken_0x31c890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C890u;
        // 0x31c894: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c890) {
            ctx->pc = 0x31C910u;
            goto label_31c910;
        }
    }
    ctx->pc = 0x31C898u;
label_31c898:
    // 0x31c898: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31C898u;
    {
        const bool branch_taken_0x31c898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C898u;
        // 0x31c89c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c898) {
            ctx->pc = 0x31C920u;
            goto label_31c920;
        }
    }
    ctx->pc = 0x31C8A0u;
label_31c8a0:
    // 0x31c8a0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C8A0u;
    {
        const bool branch_taken_0x31c8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c8a0) {
            ctx->pc = 0x31C8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C8A0u;
            // 0x31c8a4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C8B4u;
            goto label_31c8b4;
        }
    }
    ctx->pc = 0x31C8A8u;
    // 0x31c8a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c8ac: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31c8acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31c8b0: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31c8b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31c8b4:
    // 0x31c8b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31c8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31c8b8: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31C8B8u;
    SET_GPR_U32(ctx, 31, 0x31C8C0u);
    ctx->pc = 0x31C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8B8u;
    // 0x31c8bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31C8B8u, 0x31C8C0u)) {
        return;
    }
    ctx->pc = 0x31C8C0u;
label_31c8c0:
    // 0x31c8c0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31C8C0u;
    {
        const bool branch_taken_0x31c8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8C0u;
        // 0x31c8c4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8c0) {
            ctx->pc = 0x31C96Cu;
            goto label_31c96c;
        }
    }
    ctx->pc = 0x31C8C8u;
label_31c8c8:
    // 0x31c8c8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31C8C8u;
    {
        const bool branch_taken_0x31c8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8C8u;
        // 0x31c8cc: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8c8) {
            ctx->pc = 0x31C968u;
            goto label_31c968;
        }
    }
    ctx->pc = 0x31C8D0u;
    // 0x31c8d0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x31c8d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31c8d4: 0xa7a20050  sh          $v0, 0x50($sp)
    ctx->pc = 0x31c8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x31c8d8: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x31c8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x31c8dc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x31C8DCu;
    {
        const bool branch_taken_0x31c8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8DCu;
        // 0x31c8e0: 0xa7b60052  sh          $s6, 0x52($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 82), (uint16_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8dc) {
            ctx->pc = 0x31C944u;
            goto label_31c944;
        }
    }
    ctx->pc = 0x31C8E4u;
    // 0x31c8e4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31c8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c8e8: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x31c8e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x31c8ec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31C8ECu;
    {
        const bool branch_taken_0x31c8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8ECu;
        // 0x31c8f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8ec) {
            ctx->pc = 0x31C91Cu;
            goto label_31c91c;
        }
    }
    ctx->pc = 0x31C8F4u;
    // 0x31c8f4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x31c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31c8f8: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31C8F8u;
    SET_GPR_U32(ctx, 31, 0x31C900u);
    ctx->pc = 0x31C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8F8u;
    // 0x31c8fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31C8F8u, 0x31C900u)) {
        return;
    }
    ctx->pc = 0x31C900u;
label_31c900:
    // 0x31c900: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c904: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31c904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c908: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x31c908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x31c90c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x31c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_31c910:
    // 0x31c910: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31c910u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31c914: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31C914u;
    {
        const bool branch_taken_0x31c914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C914u;
        // 0x31c918: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c914) {
            ctx->pc = 0x31C968u;
            goto label_31c968;
        }
    }
    ctx->pc = 0x31C91Cu;
label_31c91c:
    // 0x31c91c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x31c91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_31c920:
    // 0x31c920: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31C920u;
    SET_GPR_U32(ctx, 31, 0x31C928u);
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31C920u, 0x31C928u)) {
        return;
    }
    ctx->pc = 0x31C928u;
label_31c928:
    // 0x31c928: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c92c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c930: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31c930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31c934: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31c934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31c938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31c938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c93c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31C93Cu;
    {
        const bool branch_taken_0x31c93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C93Cu;
        // 0x31c940: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c93c) {
            ctx->pc = 0x31C968u;
            goto label_31c968;
        }
    }
    ctx->pc = 0x31C944u;
label_31c944:
    // 0x31c944: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31c944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31c948: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C948u;
    {
        const bool branch_taken_0x31c948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c948) {
            ctx->pc = 0x31C94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C948u;
            // 0x31c94c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C95Cu;
            goto label_31c95c;
        }
    }
    ctx->pc = 0x31C950u;
    // 0x31c950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c954: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31c954u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31c958: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31c958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31c95c:
    // 0x31c95c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x31c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31c960: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31C960u;
    SET_GPR_U32(ctx, 31, 0x31C968u);
    ctx->pc = 0x31C964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C960u;
    // 0x31c964: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31C960u, 0x31C968u)) {
        return;
    }
    ctx->pc = 0x31C968u;
label_31c968:
    // 0x31c968: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x31c968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_31c96c:
    // 0x31c96c: 0x17c20054  bne         $fp, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x31C96Cu;
    {
        const bool branch_taken_0x31c96c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x31C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C96Cu;
        // 0x31c970: 0x8fa20064  lw          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c96c) {
            ctx->pc = 0x31CAC0u;
            goto label_31cac0;
        }
    }
    ctx->pc = 0x31C974u;
    // 0x31c974: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x31c974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31c978: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x31c978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31c97c: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x31c97cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31c980: 0x1a00004e  blez        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x31C980u;
    {
        const bool branch_taken_0x31c980 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x31C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C980u;
        // 0x31c984: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c980) {
            ctx->pc = 0x31CABCu;
            goto label_31cabc;
        }
    }
    ctx->pc = 0x31C988u;
    // 0x31c988: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31C988u;
    {
        const bool branch_taken_0x31c988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C988u;
        // 0x31c98c: 0x3c14006b  lui         $s4, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c988) {
            ctx->pc = 0x31CA28u;
            goto label_31ca28;
        }
    }
    ctx->pc = 0x31C990u;
    // 0x31c990: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31c990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c994: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31c994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31c998:
    // 0x31c998: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31c998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31c99c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31C99Cu;
    {
        const bool branch_taken_0x31c99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c99c) {
            ctx->pc = 0x31C9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C99Cu;
            // 0x31c9a0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CA00u;
            goto label_31ca00;
        }
    }
    ctx->pc = 0x31C9A4u;
    // 0x31c9a4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31c9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c9a8: 0x2cc20021  sltiu       $v0, $a2, 0x21
    ctx->pc = 0x31c9a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x31c9ac: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31C9ACu;
    {
        const bool branch_taken_0x31c9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9ACu;
        // 0x31c9b0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9ac) {
            ctx->pc = 0x31C9DCu;
            goto label_31c9dc;
        }
    }
    ctx->pc = 0x31C9B4u;
    // 0x31c9b4: 0x26852010  addiu       $a1, $s4, 0x2010
    ctx->pc = 0x31c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
    // 0x31c9b8: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31C9B8u;
    SET_GPR_U32(ctx, 31, 0x31C9C0u);
    ctx->pc = 0x31C9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9B8u;
    // 0x31c9bc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31C9B8u, 0x31C9C0u)) {
        return;
    }
    ctx->pc = 0x31C9C0u;
label_31c9c0:
    // 0x31c9c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c9c4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c9c8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31c9cc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x31c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x31c9d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31c9d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31C9D4u;
    {
        const bool branch_taken_0x31c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9D4u;
        // 0x31c9d8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9d4) {
            ctx->pc = 0x31CA18u;
            goto label_31ca18;
        }
    }
    ctx->pc = 0x31C9DCu;
label_31c9dc:
    // 0x31c9dc: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31C9DCu;
    SET_GPR_U32(ctx, 31, 0x31C9E4u);
    ctx->pc = 0x31C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9DCu;
    // 0x31c9e0: 0x26852010  addiu       $a1, $s4, 0x2010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31C9DCu, 0x31C9E4u)) {
        return;
    }
    ctx->pc = 0x31C9E4u;
label_31c9e4:
    // 0x31c9e4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c9e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c9ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31c9f0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31c9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c9f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31C9F8u;
    {
        const bool branch_taken_0x31c9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9F8u;
        // 0x31c9fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9f8) {
            ctx->pc = 0x31CA18u;
            goto label_31ca18;
        }
    }
    ctx->pc = 0x31CA00u;
label_31ca00:
    // 0x31ca00: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31CA00u;
    {
        const bool branch_taken_0x31ca00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ca00) {
            ctx->pc = 0x31CA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CA00u;
            // 0x31ca04: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CA08u;
            goto label_31ca08;
        }
    }
    ctx->pc = 0x31CA08u;
label_31ca08:
    // 0x31ca08: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31ca08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31ca0c: 0x26852010  addiu       $a1, $s4, 0x2010
    ctx->pc = 0x31ca0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
    // 0x31ca10: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31CA10u;
    SET_GPR_U32(ctx, 31, 0x31CA18u);
    ctx->pc = 0x31CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA10u;
    // 0x31ca14: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31CA10u, 0x31CA18u)) {
        return;
    }
    ctx->pc = 0x31CA18u;
label_31ca18:
    // 0x31ca18: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x31ca18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x31ca1c: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x31ca1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31ca20: 0x5040ffdd  beql        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x31CA20u;
    {
        const bool branch_taken_0x31ca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ca20) {
            ctx->pc = 0x31CA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CA20u;
            // 0x31ca24: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c998;
        }
    }
    ctx->pc = 0x31CA28u;
label_31ca28:
    // 0x31ca28: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31ca28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31ca2c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31ca2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31ca30: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31CA30u;
    {
        const bool branch_taken_0x31ca30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA30u;
        // 0x31ca34: 0x109040  sll         $s2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca30) {
            ctx->pc = 0x31CA98u;
            goto label_31ca98;
        }
    }
    ctx->pc = 0x31CA38u;
    // 0x31ca38: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31ca38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31ca3c: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x31ca3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31ca40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31CA40u;
    {
        const bool branch_taken_0x31ca40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA40u;
        // 0x31ca44: 0x26852010  addiu       $a1, $s4, 0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca40) {
            ctx->pc = 0x31CA70u;
            goto label_31ca70;
        }
    }
    ctx->pc = 0x31CA48u;
    // 0x31ca48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ca4c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CA4Cu;
    SET_GPR_U32(ctx, 31, 0x31CA54u);
    ctx->pc = 0x31CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA4Cu;
    // 0x31ca50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CA4Cu, 0x31CA54u)) {
        return;
    }
    ctx->pc = 0x31CA54u;
label_31ca54:
    // 0x31ca54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ca58: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31ca5c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31ca60: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31ca64: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31ca68: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31CA68u;
    {
        const bool branch_taken_0x31ca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA68u;
        // 0x31ca6c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca68) {
            ctx->pc = 0x31CABCu;
            goto label_31cabc;
        }
    }
    ctx->pc = 0x31CA70u;
label_31ca70:
    // 0x31ca70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ca74: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CA74u;
    SET_GPR_U32(ctx, 31, 0x31CA7Cu);
    ctx->pc = 0x31CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA74u;
    // 0x31ca78: 0x26852010  addiu       $a1, $s4, 0x2010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CA74u, 0x31CA7Cu)) {
        return;
    }
    ctx->pc = 0x31CA7Cu;
label_31ca7c:
    // 0x31ca7c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31ca80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ca84: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31ca88: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31ca8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ca90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31CA90u;
    {
        const bool branch_taken_0x31ca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA90u;
        // 0x31ca94: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca90) {
            ctx->pc = 0x31CABCu;
            goto label_31cabc;
        }
    }
    ctx->pc = 0x31CA98u;
label_31ca98:
    // 0x31ca98: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31ca9c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31CA9Cu;
    {
        const bool branch_taken_0x31ca9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ca9c) {
            ctx->pc = 0x31CAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CA9Cu;
            // 0x31caa0: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CAB0u;
            goto label_31cab0;
        }
    }
    ctx->pc = 0x31CAA4u;
    // 0x31caa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31caa8: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31caa8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31caac: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31caacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31cab0:
    // 0x31cab0: 0x26852010  addiu       $a1, $s4, 0x2010
    ctx->pc = 0x31cab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
    // 0x31cab4: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31CAB4u;
    SET_GPR_U32(ctx, 31, 0x31CABCu);
    ctx->pc = 0x31CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CAB4u;
    // 0x31cab8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31CAB4u, 0x31CABCu)) {
        return;
    }
    ctx->pc = 0x31CABCu;
label_31cabc:
    // 0x31cabc: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x31cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_31cac0:
    // 0x31cac0: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x31cac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x31cac4: 0xa28023  subu        $s0, $a1, $v0
    ctx->pc = 0x31cac4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31cac8: 0x1a00004e  blez        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x31CAC8u;
    {
        const bool branch_taken_0x31cac8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x31CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAC8u;
        // 0x31cacc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cac8) {
            ctx->pc = 0x31CC04u;
            goto label_31cc04;
        }
    }
    ctx->pc = 0x31CAD0u;
    // 0x31cad0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31CAD0u;
    {
        const bool branch_taken_0x31cad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAD0u;
        // 0x31cad4: 0x3c14006b  lui         $s4, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cad0) {
            ctx->pc = 0x31CB70u;
            goto label_31cb70;
        }
    }
    ctx->pc = 0x31CAD8u;
    // 0x31cad8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31cad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cadc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31cadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31cae0:
    // 0x31cae0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31cae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31cae4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31CAE4u;
    {
        const bool branch_taken_0x31cae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cae4) {
            ctx->pc = 0x31CAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CAE4u;
            // 0x31cae8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CB48u;
            goto label_31cb48;
        }
    }
    ctx->pc = 0x31CAECu;
    // 0x31caec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31caecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31caf0: 0x2cc20021  sltiu       $v0, $a2, 0x21
    ctx->pc = 0x31caf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x31caf4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31CAF4u;
    {
        const bool branch_taken_0x31caf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAF4u;
        // 0x31caf8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31caf4) {
            ctx->pc = 0x31CB24u;
            goto label_31cb24;
        }
    }
    ctx->pc = 0x31CAFCu;
    // 0x31cafc: 0x26852010  addiu       $a1, $s4, 0x2010
    ctx->pc = 0x31cafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
    // 0x31cb00: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CB00u;
    SET_GPR_U32(ctx, 31, 0x31CB08u);
    ctx->pc = 0x31CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB00u;
    // 0x31cb04: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CB00u, 0x31CB08u)) {
        return;
    }
    ctx->pc = 0x31CB08u;
label_31cb08:
    // 0x31cb08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cb0c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cb10: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31cb14: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x31cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x31cb18: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31cb1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31CB1Cu;
    {
        const bool branch_taken_0x31cb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB1Cu;
        // 0x31cb20: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb1c) {
            ctx->pc = 0x31CB60u;
            goto label_31cb60;
        }
    }
    ctx->pc = 0x31CB24u;
label_31cb24:
    // 0x31cb24: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CB24u;
    SET_GPR_U32(ctx, 31, 0x31CB2Cu);
    ctx->pc = 0x31CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB24u;
    // 0x31cb28: 0x26852010  addiu       $a1, $s4, 0x2010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CB24u, 0x31CB2Cu)) {
        return;
    }
    ctx->pc = 0x31CB2Cu;
label_31cb2c:
    // 0x31cb2c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cb30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cb34: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31cb38: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31cb3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31cb40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31CB40u;
    {
        const bool branch_taken_0x31cb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB40u;
        // 0x31cb44: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb40) {
            ctx->pc = 0x31CB60u;
            goto label_31cb60;
        }
    }
    ctx->pc = 0x31CB48u;
label_31cb48:
    // 0x31cb48: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31CB48u;
    {
        const bool branch_taken_0x31cb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cb48) {
            ctx->pc = 0x31CB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CB48u;
            // 0x31cb4c: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CB50u;
            goto label_31cb50;
        }
    }
    ctx->pc = 0x31CB50u;
label_31cb50:
    // 0x31cb50: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31cb50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31cb54: 0x26852010  addiu       $a1, $s4, 0x2010
    ctx->pc = 0x31cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
    // 0x31cb58: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31CB58u;
    SET_GPR_U32(ctx, 31, 0x31CB60u);
    ctx->pc = 0x31CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB58u;
    // 0x31cb5c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31CB58u, 0x31CB60u)) {
        return;
    }
    ctx->pc = 0x31CB60u;
label_31cb60:
    // 0x31cb60: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x31cb60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x31cb64: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x31cb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31cb68: 0x5040ffdd  beql        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x31CB68u;
    {
        const bool branch_taken_0x31cb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cb68) {
            ctx->pc = 0x31CB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CB68u;
            // 0x31cb6c: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31cae0;
        }
    }
    ctx->pc = 0x31CB70u;
label_31cb70:
    // 0x31cb70: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31cb70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31cb74: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31cb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31cb78: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31CB78u;
    {
        const bool branch_taken_0x31cb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB78u;
        // 0x31cb7c: 0x109040  sll         $s2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb78) {
            ctx->pc = 0x31CBE0u;
            goto label_31cbe0;
        }
    }
    ctx->pc = 0x31CB80u;
    // 0x31cb80: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31cb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cb84: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x31cb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31cb88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31CB88u;
    {
        const bool branch_taken_0x31cb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB88u;
        // 0x31cb8c: 0x26852010  addiu       $a1, $s4, 0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb88) {
            ctx->pc = 0x31CBB8u;
            goto label_31cbb8;
        }
    }
    ctx->pc = 0x31CB90u;
    // 0x31cb90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cb94: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CB94u;
    SET_GPR_U32(ctx, 31, 0x31CB9Cu);
    ctx->pc = 0x31CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB94u;
    // 0x31cb98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CB94u, 0x31CB9Cu)) {
        return;
    }
    ctx->pc = 0x31CB9Cu;
label_31cb9c:
    // 0x31cb9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cba0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cba4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31cba8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31cbac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31cbb0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31CBB0u;
    {
        const bool branch_taken_0x31cbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBB0u;
        // 0x31cbb4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cbb0) {
            ctx->pc = 0x31CC04u;
            goto label_31cc04;
        }
    }
    ctx->pc = 0x31CBB8u;
label_31cbb8:
    // 0x31cbb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cbbc: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CBBCu;
    SET_GPR_U32(ctx, 31, 0x31CBC4u);
    ctx->pc = 0x31CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CBBCu;
    // 0x31cbc0: 0x26852010  addiu       $a1, $s4, 0x2010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CBBCu, 0x31CBC4u)) {
        return;
    }
    ctx->pc = 0x31CBC4u;
label_31cbc4:
    // 0x31cbc4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cbc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cbcc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31cbd0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31cbd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31cbd8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31CBD8u;
    {
        const bool branch_taken_0x31cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBD8u;
        // 0x31cbdc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cbd8) {
            ctx->pc = 0x31CC04u;
            goto label_31cc04;
        }
    }
    ctx->pc = 0x31CBE0u;
label_31cbe0:
    // 0x31cbe0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31cbe4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31CBE4u;
    {
        const bool branch_taken_0x31cbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cbe4) {
            ctx->pc = 0x31CBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CBE4u;
            // 0x31cbe8: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CBF8u;
            goto label_31cbf8;
        }
    }
    ctx->pc = 0x31CBECu;
    // 0x31cbec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cbf0: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31cbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31cbf4: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31cbf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31cbf8:
    // 0x31cbf8: 0x26852010  addiu       $a1, $s4, 0x2010
    ctx->pc = 0x31cbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8208));
    // 0x31cbfc: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31CBFCu;
    SET_GPR_U32(ctx, 31, 0x31CC04u);
    ctx->pc = 0x31CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CBFCu;
    // 0x31cc00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31CBFCu, 0x31CC04u)) {
        return;
    }
    ctx->pc = 0x31CC04u;
label_31cc04:
    // 0x31cc04: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31cc04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31cc08: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31cc0c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31CC0Cu;
    {
        const bool branch_taken_0x31cc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC0Cu;
        // 0x31cc10: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc0c) {
            ctx->pc = 0x31CC80u;
            goto label_31cc80;
        }
    }
    ctx->pc = 0x31CC14u;
    // 0x31cc14: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31cc14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cc18: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31cc1c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x31cc1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31cc20: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31CC20u;
    {
        const bool branch_taken_0x31cc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC20u;
        // 0x31cc24: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc20) {
            ctx->pc = 0x31CC58u;
            goto label_31cc58;
        }
    }
    ctx->pc = 0x31CC28u;
    // 0x31cc28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cc2c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CC2Cu;
    SET_GPR_U32(ctx, 31, 0x31CC34u);
    ctx->pc = 0x31CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC2Cu;
    // 0x31cc30: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CC2Cu, 0x31CC34u)) {
        return;
    }
    ctx->pc = 0x31CC34u;
label_31cc34:
    // 0x31cc34: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x31cc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x31cc38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cc3c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x31cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cc40: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x31cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31cc44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31cc48: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x31cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31cc4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31cc50: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31CC50u;
    {
        const bool branch_taken_0x31cc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC50u;
        // 0x31cc54: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc50) {
            ctx->pc = 0x31CCA4u;
            goto label_31cca4;
        }
    }
    ctx->pc = 0x31CC58u;
label_31cc58:
    // 0x31cc58: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cc5c: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CC5Cu;
    SET_GPR_U32(ctx, 31, 0x31CC64u);
    ctx->pc = 0x31CC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC5Cu;
    // 0x31cc60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CC5Cu, 0x31CC64u)) {
        return;
    }
    ctx->pc = 0x31CC64u;
label_31cc64:
    // 0x31cc64: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cc68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cc6c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31cc70: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31cc74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31cc78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31CC78u;
    {
        const bool branch_taken_0x31cc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC78u;
        // 0x31cc7c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cc78) {
            ctx->pc = 0x31CCA4u;
            goto label_31cca4;
        }
    }
    ctx->pc = 0x31CC80u;
label_31cc80:
    // 0x31cc80: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31cc84: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31CC84u;
    {
        const bool branch_taken_0x31cc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cc84) {
            ctx->pc = 0x31CC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CC84u;
            // 0x31cc88: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CC98u;
            goto label_31cc98;
        }
    }
    ctx->pc = 0x31CC8Cu;
    // 0x31cc8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cc90: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31cc90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31cc94: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31cc94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31cc98:
    // 0x31cc98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x31cc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cc9c: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31CC9Cu;
    SET_GPR_U32(ctx, 31, 0x31CCA4u);
    ctx->pc = 0x31CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC9Cu;
    // 0x31cca0: 0x8fa60064  lw          $a2, 0x64($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31CC9Cu, 0x31CCA4u)) {
        return;
    }
    ctx->pc = 0x31CCA4u;
label_31cca4:
    // 0x31cca4: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x31cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x31cca8: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x31CCA8u;
    {
        const bool branch_taken_0x31cca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCA8u;
        // 0x31ccac: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cca8) {
            ctx->pc = 0x31CDF4u;
            goto label_31cdf4;
        }
    }
    ctx->pc = 0x31CCB0u;
    // 0x31ccb0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x31ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31ccb4: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x31ccb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31ccb8: 0x1a00004e  blez        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x31CCB8u;
    {
        const bool branch_taken_0x31ccb8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x31CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCB8u;
        // 0x31ccbc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ccb8) {
            ctx->pc = 0x31CDF4u;
            goto label_31cdf4;
        }
    }
    ctx->pc = 0x31CCC0u;
    // 0x31ccc0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31CCC0u;
    {
        const bool branch_taken_0x31ccc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCC0u;
        // 0x31ccc4: 0x3c17006b  lui         $s7, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ccc0) {
            ctx->pc = 0x31CD60u;
            goto label_31cd60;
        }
    }
    ctx->pc = 0x31CCC8u;
    // 0x31ccc8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31ccc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cccc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31ccccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31ccd0:
    // 0x31ccd0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31ccd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31ccd4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x31CCD4u;
    {
        const bool branch_taken_0x31ccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ccd4) {
            ctx->pc = 0x31CCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CCD4u;
            // 0x31ccd8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CD38u;
            goto label_31cd38;
        }
    }
    ctx->pc = 0x31CCDCu;
    // 0x31ccdc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31ccdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cce0: 0x2cc20021  sltiu       $v0, $a2, 0x21
    ctx->pc = 0x31cce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x31cce4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31CCE4u;
    {
        const bool branch_taken_0x31cce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CCE4u;
        // 0x31cce8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cce4) {
            ctx->pc = 0x31CD14u;
            goto label_31cd14;
        }
    }
    ctx->pc = 0x31CCECu;
    // 0x31ccec: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0
    ctx->pc = 0x31ccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
    // 0x31ccf0: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CCF0u;
    SET_GPR_U32(ctx, 31, 0x31CCF8u);
    ctx->pc = 0x31CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CCF0u;
    // 0x31ccf4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CCF0u, 0x31CCF8u)) {
        return;
    }
    ctx->pc = 0x31CCF8u;
label_31ccf8:
    // 0x31ccf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31ccfc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cd00: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31cd04: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x31cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x31cd08: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31cd0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31CD0Cu;
    {
        const bool branch_taken_0x31cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD0Cu;
        // 0x31cd10: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd0c) {
            ctx->pc = 0x31CD50u;
            goto label_31cd50;
        }
    }
    ctx->pc = 0x31CD14u;
label_31cd14:
    // 0x31cd14: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CD14u;
    SET_GPR_U32(ctx, 31, 0x31CD1Cu);
    ctx->pc = 0x31CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD14u;
    // 0x31cd18: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CD14u, 0x31CD1Cu)) {
        return;
    }
    ctx->pc = 0x31CD1Cu;
label_31cd1c:
    // 0x31cd1c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cd20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cd24: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31cd28: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31cd2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31cd30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31CD30u;
    {
        const bool branch_taken_0x31cd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD30u;
        // 0x31cd34: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd30) {
            ctx->pc = 0x31CD50u;
            goto label_31cd50;
        }
    }
    ctx->pc = 0x31CD38u;
label_31cd38:
    // 0x31cd38: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31CD38u;
    {
        const bool branch_taken_0x31cd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cd38) {
            ctx->pc = 0x31CD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CD38u;
            // 0x31cd3c: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CD40u;
            goto label_31cd40;
        }
    }
    ctx->pc = 0x31CD40u;
label_31cd40:
    // 0x31cd40: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31cd40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31cd44: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0
    ctx->pc = 0x31cd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
    // 0x31cd48: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31CD48u;
    SET_GPR_U32(ctx, 31, 0x31CD50u);
    ctx->pc = 0x31CD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD48u;
    // 0x31cd4c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31CD48u, 0x31CD50u)) {
        return;
    }
    ctx->pc = 0x31CD50u;
label_31cd50:
    // 0x31cd50: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x31cd50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x31cd54: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x31cd54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31cd58: 0x5040ffdd  beql        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x31CD58u;
    {
        const bool branch_taken_0x31cd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cd58) {
            ctx->pc = 0x31CD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CD58u;
            // 0x31cd5c: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ccd0;
        }
    }
    ctx->pc = 0x31CD60u;
label_31cd60:
    // 0x31cd60: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31cd60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31cd64: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31cd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31cd68: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x31CD68u;
    {
        const bool branch_taken_0x31cd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD68u;
        // 0x31cd6c: 0x109040  sll         $s2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd68) {
            ctx->pc = 0x31CDD0u;
            goto label_31cdd0;
        }
    }
    ctx->pc = 0x31CD70u;
    // 0x31cd70: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x31cd70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cd74: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x31cd74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x31cd78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31CD78u;
    {
        const bool branch_taken_0x31cd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD78u;
        // 0x31cd7c: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd78) {
            ctx->pc = 0x31CDA8u;
            goto label_31cda8;
        }
    }
    ctx->pc = 0x31CD80u;
    // 0x31cd80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cd84: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CD84u;
    SET_GPR_U32(ctx, 31, 0x31CD8Cu);
    ctx->pc = 0x31CD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD84u;
    // 0x31cd88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CD84u, 0x31CD8Cu)) {
        return;
    }
    ctx->pc = 0x31CD8Cu;
label_31cd8c:
    // 0x31cd8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cd90: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x31cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cd94: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31cd98: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31cd9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x31cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x31cda0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31CDA0u;
    {
        const bool branch_taken_0x31cda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDA0u;
        // 0x31cda4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cda0) {
            ctx->pc = 0x31CDF4u;
            goto label_31cdf4;
        }
    }
    ctx->pc = 0x31CDA8u;
label_31cda8:
    // 0x31cda8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cdac: 0xc0c83aa  jal         func_320EA8
    ctx->pc = 0x31CDACu;
    SET_GPR_U32(ctx, 31, 0x31CDB4u);
    ctx->pc = 0x31CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDACu;
    // 0x31cdb0: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320EA8u, 0x31CDACu, 0x31CDB4u)) {
        return;
    }
    ctx->pc = 0x31CDB4u;
label_31cdb4:
    // 0x31cdb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31cdb8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31cdbc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31cdc0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x31cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x31cdc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31cdc8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31CDC8u;
    {
        const bool branch_taken_0x31cdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDC8u;
        // 0x31cdcc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cdc8) {
            ctx->pc = 0x31CDF4u;
            goto label_31cdf4;
        }
    }
    ctx->pc = 0x31CDD0u;
label_31cdd0:
    // 0x31cdd0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31cdd4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31CDD4u;
    {
        const bool branch_taken_0x31cdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cdd4) {
            ctx->pc = 0x31CDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CDD4u;
            // 0x31cdd8: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CDE8u;
            goto label_31cde8;
        }
    }
    ctx->pc = 0x31CDDCu;
    // 0x31cddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cde0: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x31cde0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x31cde4: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31cde4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_31cde8:
    // 0x31cde8: 0x26e51ff0  addiu       $a1, $s7, 0x1FF0
    ctx->pc = 0x31cde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8176));
    // 0x31cdec: 0xc0c6b14  jal         func_31AC50
    ctx->pc = 0x31CDECu;
    SET_GPR_U32(ctx, 31, 0x31CDF4u);
    ctx->pc = 0x31CDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CDECu;
    // 0x31cdf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AC50u, 0x31CDECu, 0x31CDF4u)) {
        return;
    }
    ctx->pc = 0x31CDF4u;
label_31cdf4:
    // 0x31cdf4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x31cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31cdf8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31cdfc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x31cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31ce00: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x31ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x31ce04: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x31ce04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x31ce08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31ce0c: 0x1000fc62  b           . + 4 + (-0x39E << 2)
    ctx->pc = 0x31CE0Cu;
    {
        const bool branch_taken_0x31ce0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE0Cu;
        // 0x31ce10: 0xafa4006c  sw          $a0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce0c) {
            ctx->pc = 0x31BF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bf98;
        }
    }
    ctx->pc = 0x31CE14u;
label_31ce14:
    // 0x31ce14: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31ce14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31ce18:
    // 0x31ce18: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x31ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x31ce1c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31CE1Cu;
    {
        const bool branch_taken_0x31ce1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE1Cu;
        // 0x31ce20: 0x8fa2006c  lw          $v0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ce1c) {
            ctx->pc = 0x31CE3Cu;
            goto label_31ce3c;
        }
    }
    ctx->pc = 0x31CE24u;
    // 0x31ce24: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x31ce24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31ce28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ce28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ce2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce30: 0xc0c6ad2  jal         func_31AB48
    ctx->pc = 0x31CE30u;
    SET_GPR_U32(ctx, 31, 0x31CE38u);
    ctx->pc = 0x31CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CE30u;
    // 0x31ce34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31AB48u, 0x31CE30u, 0x31CE38u)) {
        return;
    }
    ctx->pc = 0x31CE38u;
label_31ce38:
    // 0x31ce38: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x31ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_31ce3c:
    // 0x31ce3c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x31ce3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31ce40: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x31ce40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31ce44: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x31ce44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31ce48: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x31ce48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31ce4c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x31ce4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31ce50: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x31ce50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31ce54: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x31ce54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31ce58: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x31ce58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31ce5c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x31ce5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31ce60: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31ce60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31ce64: 0x3e00008  jr          $ra
    ctx->pc = 0x31CE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CE64u;
        // 0x31ce68: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CE6Cu;
    // 0x31ce6c: 0x0  nop
    ctx->pc = 0x31ce6cu;
    // NOP
    ctx->pc = 0x31ce70u;
}
