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

// Function: sub_00197DC8
// Address: 0x197dc8 - 0x197f00
void sub_00197DC8_0x197dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197DC8_0x197dc8");
#endif

    switch (ctx->pc) {
        case 0x197df8u: goto label_197df8;
        case 0x197e10u: goto label_197e10;
        case 0x197e18u: goto label_197e18;
        case 0x197e2cu: goto label_197e2c;
        case 0x197e68u: goto label_197e68;
        case 0x197e7cu: goto label_197e7c;
        case 0x197e98u: goto label_197e98;
        case 0x197eacu: goto label_197eac;
        case 0x197ec4u: goto label_197ec4;
        default: break;
    }

    ctx->pc = 0x197dc8u;

    // 0x197dc8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x197dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x197dcc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x197dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x197dd0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x197dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x197dd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x197dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197dd8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x197dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x197ddc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x197ddcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197de0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x197de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x197de4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x197de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x197de8: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
    ctx->pc = 0x197DE8u;
    {
        const bool branch_taken_0x197de8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DE8u;
        // 0x197dec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197de8) {
            ctx->pc = 0x197ED8u;
            goto label_197ed8;
        }
    }
    ctx->pc = 0x197DF0u;
    // 0x197df0: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x197DF0u;
    SET_GPR_U32(ctx, 31, 0x197DF8u);
    ctx->pc = 0x197DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DF0u;
    // 0x197df4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x197DF0u, 0x197DF8u)) {
        return;
    }
    ctx->pc = 0x197DF8u;
label_197df8:
    // 0x197df8: 0x2413005f  addiu       $s3, $zero, 0x5F
    ctx->pc = 0x197df8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x197dfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x197dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x197e00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197E04u;
    {
        const bool branch_taken_0x197e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E04u;
        // 0x197e08: 0x247211d1  addiu       $s2, $v1, 0x11D1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4561));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e04) {
            ctx->pc = 0x197E1Cu;
            goto label_197e1c;
        }
    }
    ctx->pc = 0x197E0Cu;
    // 0x197e0c: 0x0  nop
    ctx->pc = 0x197e0cu;
    // NOP
label_197e10:
    // 0x197e10: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x197E10u;
    SET_GPR_U32(ctx, 31, 0x197E18u);
    ctx->pc = 0x197E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E10u;
    // 0x197e14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x197E10u, 0x197E18u)) {
        return;
    }
    ctx->pc = 0x197E18u;
label_197e18:
    // 0x197e18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197e1c:
    // 0x197e1c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x197E1Cu;
    {
        const bool branch_taken_0x197e1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E1Cu;
        // 0x197e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e1c) {
            ctx->pc = 0x197ED8u;
            goto label_197ed8;
        }
    }
    ctx->pc = 0x197E24u;
    // 0x197e24: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x197E24u;
    SET_GPR_U32(ctx, 31, 0x197E2Cu);
    ctx->pc = 0x197E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E24u;
    // 0x197e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x197E24u, 0x197E2Cu)) {
        return;
    }
    ctx->pc = 0x197E2Cu;
label_197e2c:
    // 0x197e2c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x197e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x197e30: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x197E30u;
    {
        const bool branch_taken_0x197e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197e30) {
            ctx->pc = 0x197E58u;
            goto label_197e58;
        }
    }
    ctx->pc = 0x197E38u;
    // 0x197e38: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x197e38u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197e3c: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x197e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x197e40: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197e44: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x197e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x197e48: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x197E48u;
    {
        const bool branch_taken_0x197e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197e48) {
            ctx->pc = 0x197E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197e10;
        }
    }
    ctx->pc = 0x197E50u;
    // 0x197e50: 0x10b3ffef  beq         $a1, $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x197E50u;
    {
        const bool branch_taken_0x197e50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x197e50) {
            ctx->pc = 0x197E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197e10;
        }
    }
    ctx->pc = 0x197E58u;
label_197e58:
    // 0x197e58: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x197E58u;
    {
        const bool branch_taken_0x197e58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E58u;
        // 0x197e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e58) {
            ctx->pc = 0x197ED8u;
            goto label_197ed8;
        }
    }
    ctx->pc = 0x197E60u;
    // 0x197e60: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x197E60u;
    SET_GPR_U32(ctx, 31, 0x197E68u);
    ctx->pc = 0x197E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E60u;
    // 0x197e64: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x197E60u, 0x197E68u)) {
        return;
    }
    ctx->pc = 0x197E68u;
label_197e68:
    // 0x197e68: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x197e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197e6c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x197E6Cu;
    {
        const bool branch_taken_0x197e6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E6Cu;
        // 0x197e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e6c) {
            ctx->pc = 0x197ED8u;
            goto label_197ed8;
        }
    }
    ctx->pc = 0x197E74u;
    // 0x197e74: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x197E74u;
    SET_GPR_U32(ctx, 31, 0x197E7Cu);
    ctx->pc = 0x197E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E74u;
    // 0x197e78: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x197E74u, 0x197E7Cu)) {
        return;
    }
    ctx->pc = 0x197E7Cu;
label_197e7c:
    // 0x197e7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e80: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x197E80u;
    {
        const bool branch_taken_0x197e80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E80u;
        // 0x197e84: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e80) {
            ctx->pc = 0x197ED8u;
            goto label_197ed8;
        }
    }
    ctx->pc = 0x197E88u;
    // 0x197e88: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x197e88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x197e8c: 0x24a59cf8  addiu       $a1, $a1, -0x6308
    ctx->pc = 0x197e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941944));
    // 0x197e90: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x197E90u;
    SET_GPR_U32(ctx, 31, 0x197E98u);
    ctx->pc = 0x197E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E90u;
    // 0x197e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x197E90u, 0x197E98u)) {
        return;
    }
    ctx->pc = 0x197E98u;
label_197e98:
    // 0x197e98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x197E98u;
    {
        const bool branch_taken_0x197e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E98u;
        // 0x197e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e98) {
            ctx->pc = 0x197EBCu;
            goto label_197ebc;
        }
    }
    ctx->pc = 0x197EA0u;
    // 0x197ea0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x197ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ea4: 0xc0c5c80  jal         func_317200
    ctx->pc = 0x197EA4u;
    SET_GPR_U32(ctx, 31, 0x197EACu);
    ctx->pc = 0x197EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197EA4u;
    // 0x197ea8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317200u, 0x197EA4u, 0x197EACu)) {
        return;
    }
    ctx->pc = 0x197EACu;
label_197eac:
    // 0x197eac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x197eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x197eb0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x197eb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x197eb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x197EB4u;
    {
        const bool branch_taken_0x197eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EB4u;
        // 0x197eb8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197eb4) {
            ctx->pc = 0x197EC8u;
            goto label_197ec8;
        }
    }
    ctx->pc = 0x197EBCu;
label_197ebc:
    // 0x197ebc: 0xc0c53de  jal         func_314F78
    ctx->pc = 0x197EBCu;
    SET_GPR_U32(ctx, 31, 0x197EC4u);
    ctx->pc = 0x197EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197EBCu;
    // 0x197ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314F78u, 0x197EBCu, 0x197EC4u)) {
        return;
    }
    ctx->pc = 0x197EC4u;
label_197ec4:
    // 0x197ec4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x197ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_197ec8:
    // 0x197ec8: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x197ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x197ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197ed0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197ED0u;
    {
        const bool branch_taken_0x197ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197ED0u;
        // 0x197ed4: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ed0) {
            ctx->pc = 0x197EDCu;
            goto label_197edc;
        }
    }
    ctx->pc = 0x197ED8u;
label_197ed8:
    // 0x197ed8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197edc:
    // 0x197edc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x197edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197ee0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x197ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197ee4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x197ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197ee8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197ee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197eec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x197eecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197ef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x197ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x197EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EF4u;
        // 0x197ef8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197EFCu;
    // 0x197efc: 0x0  nop
    ctx->pc = 0x197efcu;
    // NOP
    ctx->pc = 0x197f00u;
}
