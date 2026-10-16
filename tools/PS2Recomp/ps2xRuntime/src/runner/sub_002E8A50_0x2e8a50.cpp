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

// Function: sub_002E8A50
// Address: 0x2e8a50 - 0x2e8c50
void sub_002E8A50_0x2e8a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8A50_0x2e8a50");
#endif

    switch (ctx->pc) {
        case 0x2e8a78u: goto label_2e8a78;
        case 0x2e8a84u: goto label_2e8a84;
        case 0x2e8aa0u: goto label_2e8aa0;
        case 0x2e8ab4u: goto label_2e8ab4;
        case 0x2e8ac4u: goto label_2e8ac4;
        case 0x2e8af4u: goto label_2e8af4;
        case 0x2e8b04u: goto label_2e8b04;
        case 0x2e8b0cu: goto label_2e8b0c;
        case 0x2e8b1cu: goto label_2e8b1c;
        case 0x2e8b2cu: goto label_2e8b2c;
        case 0x2e8b34u: goto label_2e8b34;
        case 0x2e8b3cu: goto label_2e8b3c;
        case 0x2e8b70u: goto label_2e8b70;
        case 0x2e8b80u: goto label_2e8b80;
        case 0x2e8b88u: goto label_2e8b88;
        case 0x2e8b90u: goto label_2e8b90;
        case 0x2e8be8u: goto label_2e8be8;
        case 0x2e8bf8u: goto label_2e8bf8;
        case 0x2e8c00u: goto label_2e8c00;
        case 0x2e8c08u: goto label_2e8c08;
        case 0x2e8c30u: goto label_2e8c30;
        default: break;
    }

    ctx->pc = 0x2e8a50u;

    // 0x2e8a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e8a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e8a54: 0xaf848c5c  sw          $a0, -0x73A4($gp)
    ctx->pc = 0x2e8a54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937692), GPR_U32(ctx, 4));
    // 0x2e8a58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e8a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e8a5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e8a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e8a60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e8a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e8a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e8a68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e8a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8a70: 0xc0c8484  jal         func_321210
    ctx->pc = 0x2E8A70u;
    SET_GPR_U32(ctx, 31, 0x2E8A78u);
    ctx->pc = 0x2E8A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A70u;
    // 0x2e8a74: 0xaf858c64  sw          $a1, -0x739C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937700), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321210u, 0x2E8A70u, 0x2E8A78u)) {
        return;
    }
    ctx->pc = 0x2E8A78u;
label_2e8a78:
    // 0x2e8a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e8a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a7c: 0xc0c846c  jal         func_3211B0
    ctx->pc = 0x2E8A7Cu;
    SET_GPR_U32(ctx, 31, 0x2E8A84u);
    ctx->pc = 0x2E8A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A7Cu;
    // 0x2e8a80: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3211B0u, 0x2E8A7Cu, 0x2E8A84u)) {
        return;
    }
    ctx->pc = 0x2E8A84u;
label_2e8a84:
    // 0x2e8a84: 0xaf808c70  sw          $zero, -0x7390($gp)
    ctx->pc = 0x2e8a84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 0));
    // 0x2e8a88: 0x27849078  addiu       $a0, $gp, -0x6F88
    ctx->pc = 0x2e8a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938744));
    // 0x2e8a8c: 0xaf828c54  sw          $v0, -0x73AC($gp)
    ctx->pc = 0x2e8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 2));
    // 0x2e8a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8a94: 0xaf808c74  sw          $zero, -0x738C($gp)
    ctx->pc = 0x2e8a94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 0));
    // 0x2e8a98: 0xc0c4828  jal         func_3120A0
    ctx->pc = 0x2E8A98u;
    SET_GPR_U32(ctx, 31, 0x2E8AA0u);
    ctx->pc = 0x2E8A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8A98u;
    // 0x2e8a9c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3120A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3120A0u, 0x2E8A98u, 0x2E8AA0u)) {
        return;
    }
    ctx->pc = 0x2E8AA0u;
label_2e8aa0:
    // 0x2e8aa0: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2E8AA0u;
    {
        const bool branch_taken_0x2e8aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AA0u;
        // 0x2e8aa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8aa0) {
            ctx->pc = 0x2E8C30u;
            goto label_2e8c30;
        }
    }
    ctx->pc = 0x2E8AA8u;
    // 0x2e8aa8: 0x2784907c  addiu       $a0, $gp, -0x6F84
    ctx->pc = 0x2e8aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938748));
    // 0x2e8aac: 0xc0c4828  jal         func_3120A0
    ctx->pc = 0x2E8AACu;
    SET_GPR_U32(ctx, 31, 0x2E8AB4u);
    ctx->pc = 0x2E8AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AACu;
    // 0x2e8ab0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3120A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3120A0u, 0x2E8AACu, 0x2E8AB4u)) {
        return;
    }
    ctx->pc = 0x2E8AB4u;
label_2e8ab4:
    // 0x2e8ab4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8AB4u;
    {
        const bool branch_taken_0x2e8ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AB4u;
        // 0x2e8ab8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ab4) {
            ctx->pc = 0x2E8ACCu;
            goto label_2e8acc;
        }
    }
    ctx->pc = 0x2E8ABCu;
    // 0x2e8abc: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x2E8ABCu;
    SET_GPR_U32(ctx, 31, 0x2E8AC4u);
    ctx->pc = 0x2E8AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8ABCu;
    // 0x2e8ac0: 0x8f849078  lw          $a0, -0x6F88($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x2E8ABCu, 0x2E8AC4u)) {
        return;
    }
    ctx->pc = 0x2E8AC4u;
label_2e8ac4:
    // 0x2e8ac4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2E8AC4u;
    {
        const bool branch_taken_0x2e8ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AC4u;
        // 0x2e8ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ac4) {
            ctx->pc = 0x2E8C34u;
            goto label_2e8c34;
        }
    }
    ctx->pc = 0x2E8ACCu;
label_2e8acc:
    // 0x2e8acc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2e8accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2e8ad0: 0x24518bc0  addiu       $s1, $v0, -0x7440
    ctx->pc = 0x2e8ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937536));
    // 0x2e8ad4: 0x24638c00  addiu       $v1, $v1, -0x7400
    ctx->pc = 0x2e8ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937600));
    // 0x2e8ad8: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2e8ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2e8adc: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2e8adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2e8ae0: 0x24a59220  addiu       $a1, $a1, -0x6DE0
    ctx->pc = 0x2e8ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    // 0x2e8ae4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e8ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8aec: 0xc0c483a  jal         func_3120E8
    ctx->pc = 0x2E8AECu;
    SET_GPR_U32(ctx, 31, 0x2E8AF4u);
    ctx->pc = 0x2E8AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AECu;
    // 0x2e8af0: 0x24070800  addiu       $a3, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3120E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3120E8u, 0x2E8AECu, 0x2E8AF4u)) {
        return;
    }
    ctx->pc = 0x2E8AF4u;
label_2e8af4:
    // 0x2e8af4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E8AF4u;
    {
        const bool branch_taken_0x2e8af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8AF4u;
        // 0x2e8af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8af4) {
            ctx->pc = 0x2E8B14u;
            goto label_2e8b14;
        }
    }
    ctx->pc = 0x2E8AFCu;
    // 0x2e8afc: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x2E8AFCu;
    SET_GPR_U32(ctx, 31, 0x2E8B04u);
    ctx->pc = 0x2E8B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8AFCu;
    // 0x2e8b00: 0x8f84907c  lw          $a0, -0x6F84($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x2E8AFCu, 0x2E8B04u)) {
        return;
    }
    ctx->pc = 0x2E8B04u;
label_2e8b04:
    // 0x2e8b04: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x2E8B04u;
    SET_GPR_U32(ctx, 31, 0x2E8B0Cu);
    ctx->pc = 0x2E8B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B04u;
    // 0x2e8b08: 0x8f849078  lw          $a0, -0x6F88($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x2E8B04u, 0x2E8B0Cu)) {
        return;
    }
    ctx->pc = 0x2E8B0Cu;
label_2e8b0c:
    // 0x2e8b0c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2E8B0Cu;
    {
        const bool branch_taken_0x2e8b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B0Cu;
        // 0x2e8b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b0c) {
            ctx->pc = 0x2E8C34u;
            goto label_2e8c34;
        }
    }
    ctx->pc = 0x2E8B14u;
label_2e8b14:
    // 0x2e8b14: 0xc0c4872  jal         func_3121C8
    ctx->pc = 0x2E8B14u;
    SET_GPR_U32(ctx, 31, 0x2E8B1Cu);
    ctx->pc = 0x2E8B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B14u;
    // 0x2e8b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3121C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3121C8u, 0x2E8B14u, 0x2E8B1Cu)) {
        return;
    }
    ctx->pc = 0x2E8B1Cu;
label_2e8b1c:
    // 0x2e8b1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8B1Cu;
    {
        const bool branch_taken_0x2e8b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B1Cu;
        // 0x2e8b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b1c) {
            ctx->pc = 0x2E8B44u;
            goto label_2e8b44;
        }
    }
    ctx->pc = 0x2E8B24u;
    // 0x2e8b24: 0xc0c4812  jal         func_312048
    ctx->pc = 0x2E8B24u;
    SET_GPR_U32(ctx, 31, 0x2E8B2Cu);
    ctx->pc = 0x2E8B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B24u;
    // 0x2e8b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312048u, 0x2E8B24u, 0x2E8B2Cu)) {
        return;
    }
    ctx->pc = 0x2E8B2Cu;
label_2e8b2c:
    // 0x2e8b2c: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x2E8B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E8B34u);
    ctx->pc = 0x2E8B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B2Cu;
    // 0x2e8b30: 0x8f84907c  lw          $a0, -0x6F84($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x2E8B2Cu, 0x2E8B34u)) {
        return;
    }
    ctx->pc = 0x2E8B34u;
label_2e8b34:
    // 0x2e8b34: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x2E8B34u;
    SET_GPR_U32(ctx, 31, 0x2E8B3Cu);
    ctx->pc = 0x2E8B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B34u;
    // 0x2e8b38: 0x8f849078  lw          $a0, -0x6F88($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x2E8B34u, 0x2E8B3Cu)) {
        return;
    }
    ctx->pc = 0x2E8B3Cu;
label_2e8b3c:
    // 0x2e8b3c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2E8B3Cu;
    {
        const bool branch_taken_0x2e8b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B3Cu;
        // 0x2e8b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b3c) {
            ctx->pc = 0x2E8C34u;
            goto label_2e8c34;
        }
    }
    ctx->pc = 0x2E8B44u;
label_2e8b44:
    // 0x2e8b44: 0xaf808c6c  sw          $zero, -0x7394($gp)
    ctx->pc = 0x2e8b44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937708), GPR_U32(ctx, 0));
    // 0x2e8b48: 0xaf828c58  sw          $v0, -0x73A8($gp)
    ctx->pc = 0x2e8b48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937688), GPR_U32(ctx, 2));
    // 0x2e8b4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e8b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8b5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e8b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e8b60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e8b64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8b68: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2E8B68u;
    SET_GPR_U32(ctx, 31, 0x2E8B70u);
    ctx->pc = 0x2E8B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B68u;
    // 0x2e8b6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2E8B68u, 0x2E8B70u)) {
        return;
    }
    ctx->pc = 0x2E8B70u;
label_2e8b70:
    // 0x2e8b70: 0x8f828c6c  lw          $v0, -0x7394($gp)
    ctx->pc = 0x2e8b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x2e8b74: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E8B74u;
    {
        const bool branch_taken_0x2e8b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B74u;
        // 0x2e8b78: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b74) {
            ctx->pc = 0x2E8BA8u;
            goto label_2e8ba8;
        }
    }
    ctx->pc = 0x2E8B7Cu;
    // 0x2e8b7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8b80:
    // 0x2e8b80: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x2E8B80u;
    SET_GPR_U32(ctx, 31, 0x2E8B88u);
    ctx->pc = 0x2E8B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B80u;
    // 0x2e8b84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x2E8B80u, 0x2E8B88u)) {
        return;
    }
    ctx->pc = 0x2E8B88u;
label_2e8b88:
    // 0x2e8b88: 0xc0a534a  jal         func_294D28
    ctx->pc = 0x2E8B88u;
    SET_GPR_U32(ctx, 31, 0x2E8B90u);
    ctx->pc = 0x2E8B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8B88u;
    // 0x2e8b8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294D28u, 0x2E8B88u, 0x2E8B90u)) {
        return;
    }
    ctx->pc = 0x2E8B90u;
label_2e8b90:
    // 0x2e8b90: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x2e8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x2e8b94: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8B94u;
    {
        const bool branch_taken_0x2e8b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8B94u;
        // 0x2e8b98: 0x2e020258  sltiu       $v0, $s0, 0x258 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)600) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8b94) {
            ctx->pc = 0x2E8BA4u;
            goto label_2e8ba4;
        }
    }
    ctx->pc = 0x2E8B9Cu;
    // 0x2e8b9c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E8B9Cu;
    {
        const bool branch_taken_0x2e8b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8b9c) {
            ctx->pc = 0x2E8BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8B9Cu;
            // 0x2e8ba0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8b80;
        }
    }
    ctx->pc = 0x2E8BA4u;
label_2e8ba4:
    // 0x2e8ba4: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x2e8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_2e8ba8:
    // 0x2e8ba8: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E8BA8u;
    {
        const bool branch_taken_0x2e8ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8ba8) {
            ctx->pc = 0x2E8C28u;
            goto label_2e8c28;
        }
    }
    ctx->pc = 0x2E8BB0u;
    // 0x2e8bb0: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x2e8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x2e8bb4: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x2e8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x2e8bb8: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E8BB8u;
    {
        const bool branch_taken_0x2e8bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BB8u;
        // 0x2e8bbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8bb8) {
            ctx->pc = 0x2E8C28u;
            goto label_2e8c28;
        }
    }
    ctx->pc = 0x2E8BC0u;
    // 0x2e8bc0: 0xaf808c68  sw          $zero, -0x7398($gp)
    ctx->pc = 0x2e8bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 0));
    // 0x2e8bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bcc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e8bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8bd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e8bd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e8bd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e8bd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8bdc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2e8bdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8be0: 0xc0ba380  jal         func_2E8E00
    ctx->pc = 0x2E8BE0u;
    SET_GPR_U32(ctx, 31, 0x2E8BE8u);
    ctx->pc = 0x2E8BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8BE0u;
    // 0x2e8be4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8E00u, 0x2E8BE0u, 0x2E8BE8u)) {
        return;
    }
    ctx->pc = 0x2E8BE8u;
label_2e8be8:
    // 0x2e8be8: 0x8f828c68  lw          $v0, -0x7398($gp)
    ctx->pc = 0x2e8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x2e8bec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E8BECu;
    {
        const bool branch_taken_0x2e8bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8BECu;
        // 0x2e8bf0: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8bec) {
            ctx->pc = 0x2E8C20u;
            goto label_2e8c20;
        }
    }
    ctx->pc = 0x2E8BF4u;
    // 0x2e8bf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8bf8:
    // 0x2e8bf8: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x2E8BF8u;
    SET_GPR_U32(ctx, 31, 0x2E8C00u);
    ctx->pc = 0x2E8BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8BF8u;
    // 0x2e8bfc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x2E8BF8u, 0x2E8C00u)) {
        return;
    }
    ctx->pc = 0x2E8C00u;
label_2e8c00:
    // 0x2e8c00: 0xc0a534a  jal         func_294D28
    ctx->pc = 0x2E8C00u;
    SET_GPR_U32(ctx, 31, 0x2E8C08u);
    ctx->pc = 0x2E8C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8C00u;
    // 0x2e8c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294D28u, 0x2E8C00u, 0x2E8C08u)) {
        return;
    }
    ctx->pc = 0x2E8C08u;
label_2e8c08:
    // 0x2e8c08: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x2e8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x2e8c0c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8C0Cu;
    {
        const bool branch_taken_0x2e8c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C0Cu;
        // 0x2e8c10: 0x2e020258  sltiu       $v0, $s0, 0x258 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)600) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c0c) {
            ctx->pc = 0x2E8C1Cu;
            goto label_2e8c1c;
        }
    }
    ctx->pc = 0x2E8C14u;
    // 0x2e8c14: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E8C14u;
    {
        const bool branch_taken_0x2e8c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8c14) {
            ctx->pc = 0x2E8C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8C14u;
            // 0x2e8c18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8bf8;
        }
    }
    ctx->pc = 0x2E8C1Cu;
label_2e8c1c:
    // 0x2e8c1c: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x2e8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_2e8c20:
    // 0x2e8c20: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8C20u;
    {
        const bool branch_taken_0x2e8c20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C20u;
        // 0x2e8c24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8c20) {
            ctx->pc = 0x2E8C34u;
            goto label_2e8c34;
        }
    }
    ctx->pc = 0x2E8C28u;
label_2e8c28:
    // 0x2e8c28: 0xc0ba444  jal         func_2E9110
    ctx->pc = 0x2E8C28u;
    SET_GPR_U32(ctx, 31, 0x2E8C30u);
    ctx->pc = 0x2E9110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9110u, 0x2E8C28u, 0x2E8C30u)) {
        return;
    }
    ctx->pc = 0x2E8C30u;
label_2e8c30:
    // 0x2e8c30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8c34:
    // 0x2e8c34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e8c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8c38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e8c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8c3c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e8c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8c44: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C44u;
        // 0x2e8c48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8C4Cu;
    // 0x2e8c4c: 0x0  nop
    ctx->pc = 0x2e8c4cu;
    // NOP
    ctx->pc = 0x2e8c50u;
}
