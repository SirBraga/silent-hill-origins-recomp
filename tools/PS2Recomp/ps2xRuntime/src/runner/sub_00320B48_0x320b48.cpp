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

// Function: sub_00320B48
// Address: 0x320b48 - 0x320cc8
void sub_00320B48_0x320b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320B48_0x320b48");
#endif

    switch (ctx->pc) {
        case 0x320b7cu: goto label_320b7c;
        case 0x320be4u: goto label_320be4;
        case 0x320c48u: goto label_320c48;
        case 0x320c90u: goto label_320c90;
        default: break;
    }

    ctx->pc = 0x320b48u;

    // 0x320b48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x320b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x320b4c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x320b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x320b50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x320b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b54: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x320b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x320b58: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x320b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x320b5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x320b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320b60: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x320b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x320b64: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x320b64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b68: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x320b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x320b6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x320b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x320b70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x320b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x320b74: 0xc0c7f7c  jal         func_31FDF0
    ctx->pc = 0x320B74u;
    SET_GPR_U32(ctx, 31, 0x320B7Cu);
    ctx->pc = 0x320B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320B74u;
    // 0x320b78: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FDF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FDF0u, 0x320B74u, 0x320B7Cu)) {
        return;
    }
    ctx->pc = 0x320B7Cu;
label_320b7c:
    // 0x320b7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x320b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b80: 0x10283f  dsra32      $a1, $s0, 0
    ctx->pc = 0x320b80u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x320b84: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x320b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x320b88: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x320b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x320b8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x320b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x320b90: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x320b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x320b94: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x320b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x320b98: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x320b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x320b9c: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x320b9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x320ba0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x320ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x320ba4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x320ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x320ba8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x320ba8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x320bac: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x320bacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x320bb0: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x320bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x320bb4: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x320bb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x320bb8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x320BB8u;
    {
        const bool branch_taken_0x320bb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BB8u;
        // 0x320bbc: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320bb8) {
            ctx->pc = 0x320BCCu;
            goto label_320bcc;
        }
    }
    ctx->pc = 0x320BC0u;
    // 0x320bc0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x320bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x320bc4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x320bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x320bc8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x320bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_320bcc:
    // 0x320bcc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x320bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x320bd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x320bd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x320bd4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x320BD4u;
    {
        const bool branch_taken_0x320bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BD4u;
        // 0x320bd8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320bd4) {
            ctx->pc = 0x320C3Cu;
            goto label_320c3c;
        }
    }
    ctx->pc = 0x320BDCu;
    // 0x320bdc: 0xc0c8066  jal         func_320198
    ctx->pc = 0x320BDCu;
    SET_GPR_U32(ctx, 31, 0x320BE4u);
    ctx->pc = 0x320BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320BDCu;
    // 0x320be0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320198u, 0x320BDCu, 0x320BE4u)) {
        return;
    }
    ctx->pc = 0x320BE4u;
label_320be4:
    // 0x320be4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x320be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320be8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x320BE8u;
    {
        const bool branch_taken_0x320be8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BE8u;
        // 0x320bec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320be8) {
            ctx->pc = 0x320C14u;
            goto label_320c14;
        }
    }
    ctx->pc = 0x320BF0u;
    // 0x320bf0: 0x52023  negu        $a0, $a1
    ctx->pc = 0x320bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x320bf4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x320bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320bf8: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x320bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x320bfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x320bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x320c00: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x320c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x320c04: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x320c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x320c08: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x320c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x320c0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x320C0Cu;
    {
        const bool branch_taken_0x320c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C0Cu;
        // 0x320c10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c0c) {
            ctx->pc = 0x320C1Cu;
            goto label_320c1c;
        }
    }
    ctx->pc = 0x320C14u;
label_320c14:
    // 0x320c14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x320c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320c18: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x320c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_320c1c:
    // 0x320c1c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x320c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x320c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320c24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320c28: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x320c28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x320c2c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x320c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x320c30: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x320c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320c34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x320C34u;
    {
        const bool branch_taken_0x320c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C34u;
        // 0x320c38: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c34) {
            ctx->pc = 0x320C5Cu;
            goto label_320c5c;
        }
    }
    ctx->pc = 0x320C3Cu;
label_320c3c:
    // 0x320c3c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x320c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x320c40: 0xc0c8066  jal         func_320198
    ctx->pc = 0x320C40u;
    SET_GPR_U32(ctx, 31, 0x320C48u);
    ctx->pc = 0x320C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320C40u;
    // 0x320c44: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320198u, 0x320C40u, 0x320C48u)) {
        return;
    }
    ctx->pc = 0x320C48u;
label_320c48:
    // 0x320c48: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x320c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x320c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320c50: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x320c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x320c54: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x320c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320c58: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x320c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_320c5c:
    // 0x320c5c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x320C5Cu;
    {
        const bool branch_taken_0x320c5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C5Cu;
        // 0x320c60: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c5c) {
            ctx->pc = 0x320C78u;
            goto label_320c78;
        }
    }
    ctx->pc = 0x320C64u;
    // 0x320c64: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x320c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x320c68: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x320c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x320c6c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x320c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x320c70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x320C70u;
    {
        const bool branch_taken_0x320c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C70u;
        // 0x320c74: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c70) {
            ctx->pc = 0x320C98u;
            goto label_320c98;
        }
    }
    ctx->pc = 0x320C78u;
label_320c78:
    // 0x320c78: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x320c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x320c7c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x320c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x320c80: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x320c80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x320c84: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x320c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x320c88: 0xc0c8044  jal         func_320110
    ctx->pc = 0x320C88u;
    SET_GPR_U32(ctx, 31, 0x320C90u);
    ctx->pc = 0x320C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320C88u;
    // 0x320c8c: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x320110u, 0x320C88u, 0x320C90u)) {
        return;
    }
    ctx->pc = 0x320C90u;
label_320c90:
    // 0x320c90: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x320c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x320c94: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x320c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_320c98:
    // 0x320c98: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x320c98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x320c9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x320c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320ca0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x320ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x320ca4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x320ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x320ca8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x320ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x320cac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x320cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320cb0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x320cb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320cb4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x320cb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320cb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x320cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x320CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CBCu;
        // 0x320cc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320CC4u;
    // 0x320cc4: 0x0  nop
    ctx->pc = 0x320cc4u;
    // NOP
    ctx->pc = 0x320cc8u;
}
