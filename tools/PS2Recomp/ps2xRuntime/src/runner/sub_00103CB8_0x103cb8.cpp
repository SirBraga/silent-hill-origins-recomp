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

// Function: sub_00103CB8
// Address: 0x103cb8 - 0x103e60
void sub_00103CB8_0x103cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103CB8_0x103cb8");
#endif

    switch (ctx->pc) {
        case 0x103cd4u: goto label_103cd4;
        case 0x103ce8u: goto label_103ce8;
        case 0x103d00u: goto label_103d00;
        case 0x103d6cu: goto label_103d6c;
        case 0x103e3cu: goto label_103e3c;
        default: break;
    }

    ctx->pc = 0x103cb8u;

    // 0x103cb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x103cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x103cbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x103cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x103cc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x103cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x103cc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x103cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103ccc: 0xc04ed0e  jal         func_13B438
    ctx->pc = 0x103CCCu;
    SET_GPR_U32(ctx, 31, 0x103CD4u);
    ctx->pc = 0x103CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CCCu;
    // 0x103cd0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B438u, 0x103CCCu, 0x103CD4u)) {
        return;
    }
    ctx->pc = 0x103CD4u;
label_103cd4:
    // 0x103cd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x103cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x103cd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x103cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103cdc: 0x8c464208  lw          $a2, 0x4208($v0)
    ctx->pc = 0x103cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4208u));
    // 0x103ce0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x103CE0u;
    SET_GPR_U32(ctx, 31, 0x103CE8u);
    ctx->pc = 0x103CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CE0u;
    // 0x103ce4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x103CE0u, 0x103CE8u)) {
        return;
    }
    ctx->pc = 0x103CE8u;
label_103ce8:
    // 0x103ce8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x103ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103cec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103cf0: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x103CF0u;
    {
        const bool branch_taken_0x103cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CF0u;
        // 0x103cf4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103cf0) {
            ctx->pc = 0x103E50u;
            goto label_103e50;
        }
    }
    ctx->pc = 0x103CF8u;
    // 0x103cf8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x103cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103cfc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x103cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_103d00:
    // 0x103d00: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x103d00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x103d04: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x103D04u;
    {
        const bool branch_taken_0x103d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D04u;
        // 0x103d08: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d04) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103D0Cu;
    // 0x103d0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x103d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x103d10: 0x244295b0  addiu       $v0, $v0, -0x6A50
    ctx->pc = 0x103d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940080));
    // 0x103d14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103d18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x103d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103d1c: 0x800008  jr          $a0
    ctx->pc = 0x103D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103D24u: goto label_103d24;
            case 0x103D34u: goto label_103d34;
            case 0x103D44u: goto label_103d44;
            case 0x103D54u: goto label_103d54;
            case 0x103D74u: goto label_103d74;
            case 0x103D94u: goto label_103d94;
            case 0x103DB4u: goto label_103db4;
            case 0x103DD4u: goto label_103dd4;
            case 0x103DF4u: goto label_103df4;
            case 0x103E04u: goto label_103e04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x103D24u;
label_103d24:
    // 0x103d24: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x103d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d28: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x103d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x103d2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x103D2Cu;
    {
        const bool branch_taken_0x103d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D2Cu;
        // 0x103d30: 0x262500dc  addiu       $a1, $s1, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d2c) {
            ctx->pc = 0x103D60u;
            goto label_103d60;
        }
    }
    ctx->pc = 0x103D34u;
label_103d34:
    // 0x103d34: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x103d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d38: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x103d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x103d3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x103D3Cu;
    {
        const bool branch_taken_0x103d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D3Cu;
        // 0x103d40: 0x262500e4  addiu       $a1, $s1, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d3c) {
            ctx->pc = 0x103D60u;
            goto label_103d60;
        }
    }
    ctx->pc = 0x103D44u;
label_103d44:
    // 0x103d44: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x103d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d48: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x103d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x103d4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x103D4Cu;
    {
        const bool branch_taken_0x103d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D4Cu;
        // 0x103d50: 0x262500ec  addiu       $a1, $s1, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d4c) {
            ctx->pc = 0x103D60u;
            goto label_103d60;
        }
    }
    ctx->pc = 0x103D54u;
label_103d54:
    // 0x103d54: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x103d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d58: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x103d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x103d5c: 0x262500f4  addiu       $a1, $s1, 0xF4
    ctx->pc = 0x103d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
label_103d60:
    // 0x103d60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d64: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x103D64u;
    SET_GPR_U32(ctx, 31, 0x103D6Cu);
    ctx->pc = 0x103D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D64u;
    // 0x103d68: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x103D64u, 0x103D6Cu)) {
        return;
    }
    ctx->pc = 0x103D6Cu;
label_103d6c:
    // 0x103d6c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x103D6Cu;
    {
        const bool branch_taken_0x103d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D6Cu;
        // 0x103d70: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d6c) {
            ctx->pc = 0x103E24u;
            goto label_103e24;
        }
    }
    ctx->pc = 0x103D74u;
label_103d74:
    // 0x103d74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x103d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x103d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x103d7c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103D7Cu;
    {
        const bool branch_taken_0x103d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D7Cu;
        // 0x103d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d7c) {
            ctx->pc = 0x103D8Cu;
            goto label_103d8c;
        }
    }
    ctx->pc = 0x103D84u;
    // 0x103d84: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x103D84u;
    {
        const bool branch_taken_0x103d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D84u;
        // 0x103d88: 0xae220104  sw          $v0, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d84) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103D8Cu;
label_103d8c:
    // 0x103d8c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x103D8Cu;
    {
        const bool branch_taken_0x103d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D8Cu;
        // 0x103d90: 0xae200104  sw          $zero, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d8c) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103D94u;
label_103d94:
    // 0x103d94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x103d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x103d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x103d9c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103D9Cu;
    {
        const bool branch_taken_0x103d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D9Cu;
        // 0x103da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d9c) {
            ctx->pc = 0x103DACu;
            goto label_103dac;
        }
    }
    ctx->pc = 0x103DA4u;
    // 0x103da4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x103DA4u;
    {
        const bool branch_taken_0x103da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DA4u;
        // 0x103da8: 0xae220108  sw          $v0, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103da4) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103DACu;
label_103dac:
    // 0x103dac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x103DACu;
    {
        const bool branch_taken_0x103dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DACu;
        // 0x103db0: 0xae200108  sw          $zero, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dac) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103DB4u;
label_103db4:
    // 0x103db4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x103db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103db8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x103db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x103dbc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103DBCu;
    {
        const bool branch_taken_0x103dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DBCu;
        // 0x103dc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dbc) {
            ctx->pc = 0x103DCCu;
            goto label_103dcc;
        }
    }
    ctx->pc = 0x103DC4u;
    // 0x103dc4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x103DC4u;
    {
        const bool branch_taken_0x103dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DC4u;
        // 0x103dc8: 0xae22010c  sw          $v0, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dc4) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103DCCu;
label_103dcc:
    // 0x103dcc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x103DCCu;
    {
        const bool branch_taken_0x103dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DCCu;
        // 0x103dd0: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dcc) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103DD4u;
label_103dd4:
    // 0x103dd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x103dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103dd8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x103dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x103ddc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103DDCu;
    {
        const bool branch_taken_0x103ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DDCu;
        // 0x103de0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ddc) {
            ctx->pc = 0x103DECu;
            goto label_103dec;
        }
    }
    ctx->pc = 0x103DE4u;
    // 0x103de4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x103DE4u;
    {
        const bool branch_taken_0x103de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DE4u;
        // 0x103de8: 0xae220100  sw          $v0, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103de4) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103DECu;
label_103dec:
    // 0x103dec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x103DECu;
    {
        const bool branch_taken_0x103dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DECu;
        // 0x103df0: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dec) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103DF4u;
label_103df4:
    // 0x103df4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x103df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103df8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x103df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x103dfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x103DFCu;
    {
        const bool branch_taken_0x103dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DFCu;
        // 0x103e00: 0xae2200fc  sw          $v0, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dfc) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103E04u;
label_103e04:
    // 0x103e04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x103e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103e08: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x103e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x103e0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103E0Cu;
    {
        const bool branch_taken_0x103e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E0Cu;
        // 0x103e10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e0c) {
            ctx->pc = 0x103E1Cu;
            goto label_103e1c;
        }
    }
    ctx->pc = 0x103E14u;
    // 0x103e14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x103E14u;
    {
        const bool branch_taken_0x103e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E14u;
        // 0x103e18: 0xae220110  sw          $v0, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e14) {
            ctx->pc = 0x103E20u;
            goto label_103e20;
        }
    }
    ctx->pc = 0x103E1Cu;
label_103e1c:
    // 0x103e1c: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x103e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
label_103e20:
    // 0x103e20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x103e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_103e24:
    // 0x103e24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x103e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103e2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103e30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x103e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x103e34: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x103E34u;
    SET_GPR_U32(ctx, 31, 0x103E3Cu);
    ctx->pc = 0x103E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E34u;
    // 0x103e38: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x103E34u, 0x103E3Cu)) {
        return;
    }
    ctx->pc = 0x103E3Cu;
label_103e3c:
    // 0x103e3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x103e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103e40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x103e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103e44: 0x5460ffae  bnel        $v1, $zero, . + 4 + (-0x52 << 2)
    ctx->pc = 0x103E44u;
    {
        const bool branch_taken_0x103e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x103e44) {
            ctx->pc = 0x103E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103E44u;
            // 0x103e48: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103d00;
        }
    }
    ctx->pc = 0x103E4Cu;
    // 0x103e4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x103e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_103e50:
    // 0x103e50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x103e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103e54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103e58: 0x3e00008  jr          $ra
    ctx->pc = 0x103E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E58u;
        // 0x103e5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103E60u;
}
