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

// Function: sub_001E9F70
// Address: 0x1e9f70 - 0x1ea058
void sub_001E9F70_0x1e9f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9F70_0x1e9f70");
#endif

    switch (ctx->pc) {
        case 0x1e9f70u: goto label_1e9f70;
        case 0x1e9f74u: goto label_1e9f74;
        case 0x1e9f78u: goto label_1e9f78;
        case 0x1e9f7cu: goto label_1e9f7c;
        case 0x1e9f80u: goto label_1e9f80;
        case 0x1e9f84u: goto label_1e9f84;
        case 0x1e9f88u: goto label_1e9f88;
        case 0x1e9f8cu: goto label_1e9f8c;
        case 0x1e9f90u: goto label_1e9f90;
        case 0x1e9f94u: goto label_1e9f94;
        case 0x1e9f98u: goto label_1e9f98;
        case 0x1e9f9cu: goto label_1e9f9c;
        case 0x1e9fa0u: goto label_1e9fa0;
        case 0x1e9fa4u: goto label_1e9fa4;
        case 0x1e9fa8u: goto label_1e9fa8;
        case 0x1e9facu: goto label_1e9fac;
        case 0x1e9fb0u: goto label_1e9fb0;
        case 0x1e9fb4u: goto label_1e9fb4;
        case 0x1e9fb8u: goto label_1e9fb8;
        case 0x1e9fbcu: goto label_1e9fbc;
        case 0x1e9fc0u: goto label_1e9fc0;
        case 0x1e9fc4u: goto label_1e9fc4;
        case 0x1e9fc8u: goto label_1e9fc8;
        case 0x1e9fccu: goto label_1e9fcc;
        case 0x1e9fd0u: goto label_1e9fd0;
        case 0x1e9fd4u: goto label_1e9fd4;
        case 0x1e9fd8u: goto label_1e9fd8;
        case 0x1e9fdcu: goto label_1e9fdc;
        case 0x1e9fe0u: goto label_1e9fe0;
        case 0x1e9fe4u: goto label_1e9fe4;
        case 0x1e9fe8u: goto label_1e9fe8;
        case 0x1e9fecu: goto label_1e9fec;
        case 0x1e9ff0u: goto label_1e9ff0;
        case 0x1e9ff4u: goto label_1e9ff4;
        case 0x1e9ff8u: goto label_1e9ff8;
        case 0x1e9ffcu: goto label_1e9ffc;
        case 0x1ea000u: goto label_1ea000;
        case 0x1ea004u: goto label_1ea004;
        case 0x1ea008u: goto label_1ea008;
        case 0x1ea00cu: goto label_1ea00c;
        case 0x1ea010u: goto label_1ea010;
        case 0x1ea014u: goto label_1ea014;
        case 0x1ea018u: goto label_1ea018;
        case 0x1ea01cu: goto label_1ea01c;
        case 0x1ea020u: goto label_1ea020;
        case 0x1ea024u: goto label_1ea024;
        case 0x1ea028u: goto label_1ea028;
        case 0x1ea02cu: goto label_1ea02c;
        case 0x1ea030u: goto label_1ea030;
        case 0x1ea034u: goto label_1ea034;
        case 0x1ea038u: goto label_1ea038;
        case 0x1ea03cu: goto label_1ea03c;
        case 0x1ea040u: goto label_1ea040;
        case 0x1ea044u: goto label_1ea044;
        case 0x1ea048u: goto label_1ea048;
        case 0x1ea04cu: goto label_1ea04c;
        case 0x1ea050u: goto label_1ea050;
        case 0x1ea054u: goto label_1ea054;
        default: break;
    }

    ctx->pc = 0x1e9f70u;

label_1e9f70:
    // 0x1e9f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9f74:
    // 0x1e9f74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e9f78:
    // 0x1e9f78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e9f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e9f7c:
    // 0x1e9f7c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1e9f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1e9f80:
    // 0x1e9f80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e9f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9f84:
    // 0x1e9f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e9f88:
    // 0x1e9f88: 0xc0932d4  jal         func_24CB50
label_1e9f8c:
    if (ctx->pc == 0x1E9F8Cu) {
        ctx->pc = 0x1E9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F88u;
        // 0x1e9f8c: 0x82800b  movn        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9F90u;
        goto label_1e9f90;
    }
    ctx->pc = 0x1E9F88u;
    SET_GPR_U32(ctx, 31, 0x1E9F90u);
    ctx->pc = 0x1E9F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F88u;
    // 0x1e9f8c: 0x82800b  movn        $s0, $a0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1E9F88u, 0x1E9F90u)) {
        return;
    }
    ctx->pc = 0x1E9F90u;
label_1e9f90:
    // 0x1e9f90: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1e9f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e9f94:
    // 0x1e9f94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9f98:
    // 0x1e9f98: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1e9f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1e9f9c:
    // 0x1e9f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fa0:
    // 0x1e9fa0: 0x40f809  jalr        $v0
label_1e9fa4:
    if (ctx->pc == 0x1E9FA4u) {
        ctx->pc = 0x1E9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FA0u;
        // 0x1e9fa4: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9FA8u;
        goto label_1e9fa8;
    }
    ctx->pc = 0x1E9FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9FA8u);
        ctx->pc = 0x1E9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FA0u;
        // 0x1e9fa4: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9FA0u, 0x1E9FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9FA8u;
label_1e9fa8:
    // 0x1e9fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e9fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fac:
    // 0x1e9fac: 0x50a00026  beql        $a1, $zero, . + 4 + (0x26 << 2)
label_1e9fb0:
    if (ctx->pc == 0x1E9FB0u) {
        ctx->pc = 0x1E9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FACu;
        // 0x1e9fb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9FB4u;
        goto label_1e9fb4;
    }
    ctx->pc = 0x1E9FACu;
    {
        const bool branch_taken_0x1e9fac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9fac) {
            ctx->pc = 0x1E9FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9FACu;
            // 0x1e9fb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA048u;
            goto label_1ea048;
        }
    }
    ctx->pc = 0x1E9FB4u;
label_1e9fb4:
    // 0x1e9fb4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1e9fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1e9fb8:
    // 0x1e9fb8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1e9fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1e9fbc:
    // 0x1e9fbc: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1e9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_1e9fc0:
    // 0x1e9fc0: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x1e9fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
label_1e9fc4:
    // 0x1e9fc4: 0xaca00058  sw          $zero, 0x58($a1)
    ctx->pc = 0x1e9fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 0));
label_1e9fc8:
    // 0x1e9fc8: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x1e9fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
label_1e9fcc:
    // 0x1e9fcc: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x1e9fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
label_1e9fd0:
    // 0x1e9fd0: 0xaca00064  sw          $zero, 0x64($a1)
    ctx->pc = 0x1e9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
label_1e9fd4:
    // 0x1e9fd4: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x1e9fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
label_1e9fd8:
    // 0x1e9fd8: 0xacb0006c  sw          $s0, 0x6C($a1)
    ctx->pc = 0x1e9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 16));
label_1e9fdc:
    // 0x1e9fdc: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
label_1e9fe0:
    if (ctx->pc == 0x1E9FE0u) {
        ctx->pc = 0x1E9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FDCu;
        // 0x1e9fe0: 0xaca00050  sw          $zero, 0x50($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9FE4u;
        goto label_1e9fe4;
    }
    ctx->pc = 0x1E9FDCu;
    {
        const bool branch_taken_0x1e9fdc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x1E9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FDCu;
        // 0x1e9fe0: 0xaca00050  sw          $zero, 0x50($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9fdc) {
            ctx->pc = 0x1E9FF0u;
            goto label_1e9ff0;
        }
    }
    ctx->pc = 0x1E9FE4u;
label_1e9fe4:
    // 0x1e9fe4: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1e9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1e9fe8:
    // 0x1e9fe8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e9fec:
    if (ctx->pc == 0x1E9FECu) {
        ctx->pc = 0x1E9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FE8u;
        // 0x1e9fec: 0xaca20070  sw          $v0, 0x70($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9FF0u;
        goto label_1e9ff0;
    }
    ctx->pc = 0x1E9FE8u;
    {
        const bool branch_taken_0x1e9fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FE8u;
        // 0x1e9fec: 0xaca20070  sw          $v0, 0x70($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9fe8) {
            ctx->pc = 0x1E9FF4u;
            goto label_1e9ff4;
        }
    }
    ctx->pc = 0x1E9FF0u;
label_1e9ff0:
    // 0x1e9ff0: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x1e9ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
label_1e9ff4:
    // 0x1e9ff4: 0x5a000014  blezl       $s0, . + 4 + (0x14 << 2)
label_1e9ff8:
    if (ctx->pc == 0x1E9FF8u) {
        ctx->pc = 0x1E9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FF4u;
        // 0x1e9ff8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9FFCu;
        goto label_1e9ffc;
    }
    ctx->pc = 0x1E9FF4u;
    {
        const bool branch_taken_0x1e9ff4 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x1e9ff4) {
            ctx->pc = 0x1E9FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9FF4u;
            // 0x1e9ff8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA048u;
            goto label_1ea048;
        }
    }
    ctx->pc = 0x1E9FFCu;
label_1e9ffc:
    // 0x1e9ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea000:
    // 0x1ea000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ea000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea004:
    // 0x1ea004: 0x0  nop
    ctx->pc = 0x1ea004u;
    // NOP
label_1ea008:
    // 0x1ea008: 0x8ca30070  lw          $v1, 0x70($a1)
    ctx->pc = 0x1ea008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_1ea00c:
    // 0x1ea00c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ea00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ea010:
    // 0x1ea010: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1ea010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1ea014:
    // 0x1ea014: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ea014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1ea018:
    // 0x1ea018: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x1ea018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_1ea01c:
    // 0x1ea01c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1ea01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1ea020:
    // 0x1ea020: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ea020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1ea024:
    // 0x1ea024: 0x8ca30070  lw          $v1, 0x70($a1)
    ctx->pc = 0x1ea024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_1ea028:
    // 0x1ea028: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1ea028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1ea02c:
    // 0x1ea02c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1ea02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1ea030:
    // 0x1ea030: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x1ea030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_1ea034:
    // 0x1ea034: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1ea034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1ea038:
    // 0x1ea038: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ea038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1ea03c:
    // 0x1ea03c: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
label_1ea040:
    if (ctx->pc == 0x1EA040u) {
        ctx->pc = 0x1EA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA03Cu;
        // 0x1ea040: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA044u;
        goto label_1ea044;
    }
    ctx->pc = 0x1EA03Cu;
    {
        const bool branch_taken_0x1ea03c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA03Cu;
        // 0x1ea040: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea03c) {
            ctx->pc = 0x1EA008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea008;
        }
    }
    ctx->pc = 0x1EA044u;
label_1ea044:
    // 0x1ea044: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ea044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea048:
    // 0x1ea048: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ea048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ea04c:
    // 0x1ea04c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea050:
    // 0x1ea050: 0x3e00008  jr          $ra
label_1ea054:
    if (ctx->pc == 0x1EA054u) {
        ctx->pc = 0x1EA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA050u;
        // 0x1ea054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA058u;
        goto label_fallthrough_0x1ea050;
    }
    ctx->pc = 0x1EA050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA050u;
        // 0x1ea054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ea050:
    ctx->pc = 0x1EA058u;
}
