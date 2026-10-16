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

// Function: sub_001ECA40
// Address: 0x1eca40 - 0x1ecb90
void sub_001ECA40_0x1eca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECA40_0x1eca40");
#endif

    switch (ctx->pc) {
        case 0x1eca80u: goto label_1eca80;
        case 0x1ecb08u: goto label_1ecb08;
        case 0x1ecb5cu: goto label_1ecb5c;
        default: break;
    }

    ctx->pc = 0x1eca40u;

    // 0x1eca40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eca44: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1eca44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1eca48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1eca4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eca50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eca50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca54: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1eca54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1eca58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1eca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eca5c: 0x823023  subu        $a2, $a0, $v0
    ctx->pc = 0x1eca5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eca60: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x1eca60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1eca64: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1ECA64u;
    {
        const bool branch_taken_0x1eca64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA64u;
        // 0x1eca68: 0x28820040  slti        $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca64) {
            ctx->pc = 0x1ECB44u;
            goto label_1ecb44;
        }
    }
    ctx->pc = 0x1ECA6Cu;
    // 0x1eca6c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1ECA6Cu;
    {
        const bool branch_taken_0x1eca6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA6Cu;
        // 0x1eca70: 0x3c090034  lui         $t1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca6c) {
            ctx->pc = 0x1ECB44u;
            goto label_1ecb44;
        }
    }
    ctx->pc = 0x1ECA74u;
    // 0x1eca74: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1eca74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x1eca78: 0x8d24e7a8  lw          $a0, -0x1858($t1)
    ctx->pc = 0x1eca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294961064)));
    // 0x1eca7c: 0x0  nop
    ctx->pc = 0x1eca7cu;
    // NOP
label_1eca80:
    // 0x1eca80: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECA80u;
    {
        const bool branch_taken_0x1eca80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eca80) {
            ctx->pc = 0x1ECA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECA80u;
            // 0x1eca84: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECA90u;
            goto label_1eca90;
        }
    }
    ctx->pc = 0x1ECA88u;
    // 0x1eca88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1ECA88u;
    {
        const bool branch_taken_0x1eca88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA88u;
        // 0x1eca8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca88) {
            ctx->pc = 0x1ECAC0u;
            goto label_1ecac0;
        }
    }
    ctx->pc = 0x1ECA90u;
label_1eca90:
    // 0x1eca90: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1eca90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1eca94: 0xad22e7a8  sw          $v0, -0x1858($t1)
    ctx->pc = 0x1eca94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294961064), GPR_U32(ctx, 2));
    // 0x1eca98: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1eca98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1eca9c: 0xac80020c  sw          $zero, 0x20C($a0)
    ctx->pc = 0x1eca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 0));
    // 0x1ecaa0: 0x8d03e7ac  lw          $v1, -0x1854($t0)
    ctx->pc = 0x1ecaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961068)));
    // 0x1ecaa4: 0x8ca2e7b0  lw          $v0, -0x1850($a1)
    ctx->pc = 0x1ecaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E7B0u));
    // 0x1ecaa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ecaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ecaac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ecaacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ecab0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ECAB0u;
    {
        const bool branch_taken_0x1ecab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAB0u;
        // 0x1ecab4: 0xad03e7ac  sw          $v1, -0x1854($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294961068), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecab0) {
            ctx->pc = 0x1ECABCu;
            goto label_1ecabc;
        }
    }
    ctx->pc = 0x1ECAB8u;
    // 0x1ecab8: 0xaca3e7b0  sw          $v1, -0x1850($a1)
    ctx->pc = 0x1ecab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961072), GPR_U32(ctx, 3));
label_1ecabc:
    // 0x1ecabc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ecabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ecac0:
    // 0x1ecac0: 0x50a00019  beql        $a1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1ECAC0u;
    {
        const bool branch_taken_0x1ecac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecac0) {
            ctx->pc = 0x1ECAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECAC0u;
            // 0x1ecac4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECB28u;
            goto label_1ecb28;
        }
    }
    ctx->pc = 0x1ECAC8u;
    // 0x1ecac8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ecac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ecacc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ecaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ecad0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1ecad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ecad4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1ecad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ecad8: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x1ecad8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ecadc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECADCu;
    {
        const bool branch_taken_0x1ecadc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECADCu;
        // 0x1ecae0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecadc) {
            ctx->pc = 0x1ECAF4u;
            goto label_1ecaf4;
        }
    }
    ctx->pc = 0x1ECAE4u;
    // 0x1ecae4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1ecae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ecae8: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x1ecae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x1ecaec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1ECAECu;
    {
        const bool branch_taken_0x1ecaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAECu;
        // 0x1ecaf0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecaec) {
            ctx->pc = 0x1ECB28u;
            goto label_1ecb28;
        }
    }
    ctx->pc = 0x1ECAF4u;
label_1ecaf4:
    // 0x1ecaf4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ecaf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecaf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ecaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ecafc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ECAFCu;
    {
        const bool branch_taken_0x1ecafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAFCu;
        // 0x1ecb00: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecafc) {
            ctx->pc = 0x1ECB20u;
            goto label_1ecb20;
        }
    }
    ctx->pc = 0x1ECB04u;
    // 0x1ecb04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ecb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ecb08:
    // 0x1ecb08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ecb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ecb0c: 0x0  nop
    ctx->pc = 0x1ecb0cu;
    // NOP
    // 0x1ecb10: 0x0  nop
    ctx->pc = 0x1ecb10u;
    // NOP
    // 0x1ecb14: 0x0  nop
    ctx->pc = 0x1ecb14u;
    // NOP
    // 0x1ecb18: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ECB18u;
    {
        const bool branch_taken_0x1ecb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb18) {
            ctx->pc = 0x1ECB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECB18u;
            // 0x1ecb1c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecb08;
        }
    }
    ctx->pc = 0x1ECB20u;
label_1ecb20:
    // 0x1ecb20: 0xac64020c  sw          $a0, 0x20C($v1)
    ctx->pc = 0x1ecb20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 4));
    // 0x1ecb24: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1ecb24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1ecb28:
    // 0x1ecb28: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1ecb28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1ecb2c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECB2Cu;
    {
        const bool branch_taken_0x1ecb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb2c) {
            ctx->pc = 0x1ECB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECB2Cu;
            // 0x1ecb30: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECB4Cu;
            goto label_1ecb4c;
        }
    }
    ctx->pc = 0x1ECB34u;
    // 0x1ecb34: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ecb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ecb38: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1ecb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1ecb3c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1ECB3Cu;
    {
        const bool branch_taken_0x1ecb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB3Cu;
        // 0x1ecb40: 0x8d24e7a8  lw          $a0, -0x1858($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294961064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb3c) {
            ctx->pc = 0x1ECA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eca80;
        }
    }
    ctx->pc = 0x1ECB44u;
label_1ecb44:
    // 0x1ecb44: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1ecb44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1ecb48: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1ecb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ecb4c:
    // 0x1ecb4c: 0xc2380b  movn        $a3, $a2, $v0
    ctx->pc = 0x1ecb4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6));
    // 0x1ecb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb54: 0xc07b37e  jal         func_1ECDF8
    ctx->pc = 0x1ECB54u;
    SET_GPR_U32(ctx, 31, 0x1ECB5Cu);
    ctx->pc = 0x1ECB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB54u;
    // 0x1ecb58: 0xae07001c  sw          $a3, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECDF8u, 0x1ECB54u, 0x1ECB5Cu)) {
        return;
    }
    ctx->pc = 0x1ECB5Cu;
label_1ecb5c:
    // 0x1ecb5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ecb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ecb60: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1ecb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ecb64: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1ecb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1ecb68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ecb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ecb6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecb70: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1ecb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1ecb74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ecb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ecb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB7Cu;
        // 0x1ecb80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECB84u;
    // 0x1ecb84: 0x0  nop
    ctx->pc = 0x1ecb84u;
    // NOP
    // 0x1ecb88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ecb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ecb8c: 0x0  nop
    ctx->pc = 0x1ecb8cu;
    // NOP
    ctx->pc = 0x1ecb90u;
}
