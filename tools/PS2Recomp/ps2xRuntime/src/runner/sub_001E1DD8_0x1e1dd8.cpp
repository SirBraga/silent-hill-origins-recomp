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

// Function: sub_001E1DD8
// Address: 0x1e1dd8 - 0x1e1f10
void sub_001E1DD8_0x1e1dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1DD8_0x1e1dd8");
#endif

    switch (ctx->pc) {
        case 0x1e1dd8u: goto label_1e1dd8;
        case 0x1e1ddcu: goto label_1e1ddc;
        case 0x1e1de0u: goto label_1e1de0;
        case 0x1e1de4u: goto label_1e1de4;
        case 0x1e1de8u: goto label_1e1de8;
        case 0x1e1decu: goto label_1e1dec;
        case 0x1e1df0u: goto label_1e1df0;
        case 0x1e1df4u: goto label_1e1df4;
        case 0x1e1df8u: goto label_1e1df8;
        case 0x1e1dfcu: goto label_1e1dfc;
        case 0x1e1e00u: goto label_1e1e00;
        case 0x1e1e04u: goto label_1e1e04;
        case 0x1e1e08u: goto label_1e1e08;
        case 0x1e1e0cu: goto label_1e1e0c;
        case 0x1e1e10u: goto label_1e1e10;
        case 0x1e1e14u: goto label_1e1e14;
        case 0x1e1e18u: goto label_1e1e18;
        case 0x1e1e1cu: goto label_1e1e1c;
        case 0x1e1e20u: goto label_1e1e20;
        case 0x1e1e24u: goto label_1e1e24;
        case 0x1e1e28u: goto label_1e1e28;
        case 0x1e1e2cu: goto label_1e1e2c;
        case 0x1e1e30u: goto label_1e1e30;
        case 0x1e1e34u: goto label_1e1e34;
        case 0x1e1e38u: goto label_1e1e38;
        case 0x1e1e3cu: goto label_1e1e3c;
        case 0x1e1e40u: goto label_1e1e40;
        case 0x1e1e44u: goto label_1e1e44;
        case 0x1e1e48u: goto label_1e1e48;
        case 0x1e1e4cu: goto label_1e1e4c;
        case 0x1e1e50u: goto label_1e1e50;
        case 0x1e1e54u: goto label_1e1e54;
        case 0x1e1e58u: goto label_1e1e58;
        case 0x1e1e5cu: goto label_1e1e5c;
        case 0x1e1e60u: goto label_1e1e60;
        case 0x1e1e64u: goto label_1e1e64;
        case 0x1e1e68u: goto label_1e1e68;
        case 0x1e1e6cu: goto label_1e1e6c;
        case 0x1e1e70u: goto label_1e1e70;
        case 0x1e1e74u: goto label_1e1e74;
        case 0x1e1e78u: goto label_1e1e78;
        case 0x1e1e7cu: goto label_1e1e7c;
        case 0x1e1e80u: goto label_1e1e80;
        case 0x1e1e84u: goto label_1e1e84;
        case 0x1e1e88u: goto label_1e1e88;
        case 0x1e1e8cu: goto label_1e1e8c;
        case 0x1e1e90u: goto label_1e1e90;
        case 0x1e1e94u: goto label_1e1e94;
        case 0x1e1e98u: goto label_1e1e98;
        case 0x1e1e9cu: goto label_1e1e9c;
        case 0x1e1ea0u: goto label_1e1ea0;
        case 0x1e1ea4u: goto label_1e1ea4;
        case 0x1e1ea8u: goto label_1e1ea8;
        case 0x1e1eacu: goto label_1e1eac;
        case 0x1e1eb0u: goto label_1e1eb0;
        case 0x1e1eb4u: goto label_1e1eb4;
        case 0x1e1eb8u: goto label_1e1eb8;
        case 0x1e1ebcu: goto label_1e1ebc;
        case 0x1e1ec0u: goto label_1e1ec0;
        case 0x1e1ec4u: goto label_1e1ec4;
        case 0x1e1ec8u: goto label_1e1ec8;
        case 0x1e1eccu: goto label_1e1ecc;
        case 0x1e1ed0u: goto label_1e1ed0;
        case 0x1e1ed4u: goto label_1e1ed4;
        case 0x1e1ed8u: goto label_1e1ed8;
        case 0x1e1edcu: goto label_1e1edc;
        case 0x1e1ee0u: goto label_1e1ee0;
        case 0x1e1ee4u: goto label_1e1ee4;
        case 0x1e1ee8u: goto label_1e1ee8;
        case 0x1e1eecu: goto label_1e1eec;
        case 0x1e1ef0u: goto label_1e1ef0;
        case 0x1e1ef4u: goto label_1e1ef4;
        case 0x1e1ef8u: goto label_1e1ef8;
        case 0x1e1efcu: goto label_1e1efc;
        case 0x1e1f00u: goto label_1e1f00;
        case 0x1e1f04u: goto label_1e1f04;
        case 0x1e1f08u: goto label_1e1f08;
        case 0x1e1f0cu: goto label_1e1f0c;
        default: break;
    }

    ctx->pc = 0x1e1dd8u;

label_1e1dd8:
    // 0x1e1dd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e1dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e1ddc:
    // 0x1e1ddc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1e1de0:
    // 0x1e1de0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1e1de4:
    // 0x1e1de4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e1de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e1de8:
    // 0x1e1de8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1e1de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1e1dec:
    // 0x1e1dec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e1decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1df0:
    // 0x1e1df0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1e1df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1e1df4:
    // 0x1e1df4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e1df4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1df8:
    // 0x1e1df8: 0x8c44e6d8  lw          $a0, -0x1928($v0)
    ctx->pc = 0x1e1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960856)));
label_1e1dfc:
    // 0x1e1dfc: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1e1dfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e00:
    // 0x1e1e00: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1e1e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1e1e04:
    // 0x1e1e04: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1e1e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1e1e08:
    // 0x1e1e08: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1e1e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1e1e0c:
    // 0x1e1e0c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e1e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e1e10:
    // 0x1e1e10: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1e1e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1e1e14:
    // 0x1e1e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1e18:
    // 0x1e1e18: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_1e1e1c:
    if (ctx->pc == 0x1E1E1Cu) {
        ctx->pc = 0x1E1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E18u;
        // 0x1e1e1c: 0x8c65e6e8  lw          $a1, -0x1918($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E20u;
        goto label_1e1e20;
    }
    ctx->pc = 0x1E1E18u;
    {
        const bool branch_taken_0x1e1e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E18u;
        // 0x1e1e1c: 0x8c65e6e8  lw          $a1, -0x1918($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e18) {
            ctx->pc = 0x1E1E54u;
            goto label_1e1e54;
        }
    }
    ctx->pc = 0x1E1E20u;
label_1e1e20:
    // 0x1e1e20: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e1e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e1e24:
    // 0x1e1e24: 0x0  nop
    ctx->pc = 0x1e1e24u;
    // NOP
label_1e1e28:
    // 0x1e1e28: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1e1e2c:
    if (ctx->pc == 0x1E1E2Cu) {
        ctx->pc = 0x1E1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E28u;
        // 0x1e1e2c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E30u;
        goto label_1e1e30;
    }
    ctx->pc = 0x1E1E28u;
    {
        const bool branch_taken_0x1e1e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e28) {
            ctx->pc = 0x1E1E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1E28u;
            // 0x1e1e2c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1E4Cu;
            goto label_1e1e4c;
        }
    }
    ctx->pc = 0x1E1E30u;
label_1e1e30:
    // 0x1e1e30: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1e1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e1e34:
    // 0x1e1e34: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1e1e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1e1e38:
    // 0x1e1e38: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1e1e3c:
    if (ctx->pc == 0x1E1E3Cu) {
        ctx->pc = 0x1E1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E38u;
        // 0x1e1e3c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E40u;
        goto label_1e1e40;
    }
    ctx->pc = 0x1E1E38u;
    {
        const bool branch_taken_0x1e1e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e38) {
            ctx->pc = 0x1E1E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1E38u;
            // 0x1e1e3c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1E4Cu;
            goto label_1e1e4c;
        }
    }
    ctx->pc = 0x1E1E40u;
label_1e1e40:
    // 0x1e1e40: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1e1e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e44:
    // 0x1e1e44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e1e44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e48:
    // 0x1e1e48: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1e4c:
    // 0x1e1e4c: 0x5480fff6  bnel        $a0, $zero, . + 4 + (-0xA << 2)
label_1e1e50:
    if (ctx->pc == 0x1E1E50u) {
        ctx->pc = 0x1E1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E4Cu;
        // 0x1e1e50: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E54u;
        goto label_1e1e54;
    }
    ctx->pc = 0x1E1E4Cu;
    {
        const bool branch_taken_0x1e1e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e4c) {
            ctx->pc = 0x1E1E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1E4Cu;
            // 0x1e1e50: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1e28;
        }
    }
    ctx->pc = 0x1E1E54u;
label_1e1e54:
    // 0x1e1e54: 0x12800022  beqz        $s4, . + 4 + (0x22 << 2)
label_1e1e58:
    if (ctx->pc == 0x1E1E58u) {
        ctx->pc = 0x1E1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E54u;
        // 0x1e1e58: 0x8eb1e6d8  lw          $s1, -0x1928($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E5Cu;
        goto label_1e1e5c;
    }
    ctx->pc = 0x1E1E54u;
    {
        const bool branch_taken_0x1e1e54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E54u;
        // 0x1e1e58: 0x8eb1e6d8  lw          $s1, -0x1928($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e54) {
            ctx->pc = 0x1E1EE0u;
            goto label_1e1ee0;
        }
    }
    ctx->pc = 0x1E1E5Cu;
label_1e1e5c:
    // 0x1e1e5c: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_1e1e60:
    if (ctx->pc == 0x1E1E60u) {
        ctx->pc = 0x1E1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E5Cu;
        // 0x1e1e60: 0xaea0e6d8  sw          $zero, -0x1928($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294960856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E64u;
        goto label_1e1e64;
    }
    ctx->pc = 0x1E1E5Cu;
    {
        const bool branch_taken_0x1e1e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E5Cu;
        // 0x1e1e60: 0xaea0e6d8  sw          $zero, -0x1928($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294960856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e5c) {
            ctx->pc = 0x1E1ECCu;
            goto label_1e1ecc;
        }
    }
    ctx->pc = 0x1E1E64u;
label_1e1e64:
    // 0x1e1e64: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1e1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_1e1e68:
    // 0x1e1e68: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1e1e68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
label_1e1e6c:
    // 0x1e1e6c: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x1e1e6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_1e1e70:
    // 0x1e1e70: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1e1e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e74:
    // 0x1e1e74: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1e1e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e78:
    // 0x1e1e78: 0x1614000f  bne         $s0, $s4, . + 4 + (0xF << 2)
label_1e1e7c:
    if (ctx->pc == 0x1E1E7Cu) {
        ctx->pc = 0x1E1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E78u;
        // 0x1e1e7c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E80u;
        goto label_1e1e80;
    }
    ctx->pc = 0x1E1E78u;
    {
        const bool branch_taken_0x1e1e78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x1E1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E78u;
        // 0x1e1e7c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e78) {
            ctx->pc = 0x1E1EB8u;
            goto label_1e1eb8;
        }
    }
    ctx->pc = 0x1E1E80u;
label_1e1e80:
    // 0x1e1e80: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1e1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e1e84:
    // 0x1e1e84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e1e88:
    if (ctx->pc == 0x1E1E88u) {
        ctx->pc = 0x1E1E8Cu;
        goto label_1e1e8c;
    }
    ctx->pc = 0x1E1E84u;
    {
        const bool branch_taken_0x1e1e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e84) {
            ctx->pc = 0x1E1EA0u;
            goto label_1e1ea0;
        }
    }
    ctx->pc = 0x1E1E8Cu;
label_1e1e8c:
    // 0x1e1e8c: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x1e1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_1e1e90:
    // 0x1e1e90: 0x40f809  jalr        $v0
label_1e1e94:
    if (ctx->pc == 0x1E1E94u) {
        ctx->pc = 0x1E1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E90u;
        // 0x1e1e94: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E98u;
        goto label_1e1e98;
    }
    ctx->pc = 0x1E1E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1E98u);
        ctx->pc = 0x1E1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E90u;
        // 0x1e1e94: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1E90u, 0x1E1E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1E98u;
label_1e1e98:
    // 0x1e1e98: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e1e9c:
    if (ctx->pc == 0x1E1E9Cu) {
        ctx->pc = 0x1E1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E98u;
        // 0x1e1e9c: 0x8e62e6dc  lw          $v0, -0x1924($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EA0u;
        goto label_1e1ea0;
    }
    ctx->pc = 0x1E1E98u;
    {
        const bool branch_taken_0x1e1e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E98u;
        // 0x1e1e9c: 0x8e62e6dc  lw          $v0, -0x1924($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e98) {
            ctx->pc = 0x1E1EACu;
            goto label_1e1eac;
        }
    }
    ctx->pc = 0x1E1EA0u;
label_1e1ea0:
    // 0x1e1ea0: 0xc080d12  jal         func_203448
label_1e1ea4:
    if (ctx->pc == 0x1E1EA4u) {
        ctx->pc = 0x1E1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EA0u;
        // 0x1e1ea4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EA8u;
        goto label_1e1ea8;
    }
    ctx->pc = 0x1E1EA0u;
    SET_GPR_U32(ctx, 31, 0x1E1EA8u);
    ctx->pc = 0x1E1EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1EA0u;
    // 0x1e1ea4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203448u, 0x1E1EA0u, 0x1E1EA8u)) {
        return;
    }
    ctx->pc = 0x1E1EA8u;
label_1e1ea8:
    // 0x1e1ea8: 0x8e62e6dc  lw          $v0, -0x1924($s3)
    ctx->pc = 0x1e1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960860)));
label_1e1eac:
    // 0x1e1eac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e1eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e1eb0:
    // 0x1e1eb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e1eb4:
    if (ctx->pc == 0x1E1EB4u) {
        ctx->pc = 0x1E1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EB0u;
        // 0x1e1eb4: 0xae70e6dc  sw          $s0, -0x1924($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294960860), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EB8u;
        goto label_1e1eb8;
    }
    ctx->pc = 0x1E1EB0u;
    {
        const bool branch_taken_0x1e1eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EB0u;
        // 0x1e1eb4: 0xae70e6dc  sw          $s0, -0x1924($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294960860), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1eb0) {
            ctx->pc = 0x1E1EC4u;
            goto label_1e1ec4;
        }
    }
    ctx->pc = 0x1E1EB8u;
label_1e1eb8:
    // 0x1e1eb8: 0x8e42e6d8  lw          $v0, -0x1928($s2)
    ctx->pc = 0x1e1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960856)));
label_1e1ebc:
    // 0x1e1ebc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e1ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e1ec0:
    // 0x1e1ec0: 0xae50e6d8  sw          $s0, -0x1928($s2)
    ctx->pc = 0x1e1ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960856), GPR_U32(ctx, 16));
label_1e1ec4:
    // 0x1e1ec4: 0x1620ffec  bnez        $s1, . + 4 + (-0x14 << 2)
label_1e1ec8:
    if (ctx->pc == 0x1E1EC8u) {
        ctx->pc = 0x1E1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EC4u;
        // 0x1e1ec8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1ECCu;
        goto label_1e1ecc;
    }
    ctx->pc = 0x1E1EC4u;
    {
        const bool branch_taken_0x1e1ec4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EC4u;
        // 0x1e1ec8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ec4) {
            ctx->pc = 0x1E1E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1e78;
        }
    }
    ctx->pc = 0x1E1ECCu;
label_1e1ecc:
    // 0x1e1ecc: 0x8ea2e6d8  lw          $v0, -0x1928($s5)
    ctx->pc = 0x1e1eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960856)));
label_1e1ed0:
    // 0x1e1ed0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1e1ed4:
    if (ctx->pc == 0x1E1ED4u) {
        ctx->pc = 0x1E1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1ED0u;
        // 0x1e1ed4: 0xaee0e6e8  sw          $zero, -0x1918($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294960872), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1ED8u;
        goto label_1e1ed8;
    }
    ctx->pc = 0x1E1ED0u;
    {
        const bool branch_taken_0x1e1ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ed0) {
            ctx->pc = 0x1E1ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1ED0u;
            // 0x1e1ed4: 0xaee0e6e8  sw          $zero, -0x1918($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294960872), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1ED8u;
            goto label_1e1ed8;
        }
    }
    ctx->pc = 0x1E1ED8u;
label_1e1ed8:
    // 0x1e1ed8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e1edc:
    if (ctx->pc == 0x1E1EDCu) {
        ctx->pc = 0x1E1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1ED8u;
        // 0x1e1edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EE0u;
        goto label_1e1ee0;
    }
    ctx->pc = 0x1E1ED8u;
    {
        const bool branch_taken_0x1e1ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1ED8u;
        // 0x1e1edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ed8) {
            ctx->pc = 0x1E1EE4u;
            goto label_1e1ee4;
        }
    }
    ctx->pc = 0x1E1EE0u;
label_1e1ee0:
    // 0x1e1ee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e1ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1ee4:
    // 0x1e1ee4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1e1ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e1ee8:
    // 0x1e1ee8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1e1ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e1eec:
    // 0x1e1eec: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1e1eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e1ef0:
    // 0x1e1ef0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e1ef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e1ef4:
    // 0x1e1ef4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e1ef4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e1ef8:
    // 0x1e1ef8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1e1ef8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e1efc:
    // 0x1e1efc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1e1efcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1f00:
    // 0x1e1f00: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1e1f00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1f04:
    // 0x1e1f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1f08:
    // 0x1e1f08: 0x3e00008  jr          $ra
label_1e1f0c:
    if (ctx->pc == 0x1E1F0Cu) {
        ctx->pc = 0x1E1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F08u;
        // 0x1e1f0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F10u;
        goto label_fallthrough_0x1e1f08;
    }
    ctx->pc = 0x1E1F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F08u;
        // 0x1e1f0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1f08:
    ctx->pc = 0x1E1F10u;
}
