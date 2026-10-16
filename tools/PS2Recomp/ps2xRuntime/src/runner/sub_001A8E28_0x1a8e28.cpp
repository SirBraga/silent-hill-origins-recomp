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

// Function: sub_001A8E28
// Address: 0x1a8e28 - 0x1a9010
void sub_001A8E28_0x1a8e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8E28_0x1a8e28");
#endif

    switch (ctx->pc) {
        case 0x1a8e28u: goto label_1a8e28;
        case 0x1a8e2cu: goto label_1a8e2c;
        case 0x1a8e30u: goto label_1a8e30;
        case 0x1a8e34u: goto label_1a8e34;
        case 0x1a8e38u: goto label_1a8e38;
        case 0x1a8e3cu: goto label_1a8e3c;
        case 0x1a8e40u: goto label_1a8e40;
        case 0x1a8e44u: goto label_1a8e44;
        case 0x1a8e48u: goto label_1a8e48;
        case 0x1a8e4cu: goto label_1a8e4c;
        case 0x1a8e50u: goto label_1a8e50;
        case 0x1a8e54u: goto label_1a8e54;
        case 0x1a8e58u: goto label_1a8e58;
        case 0x1a8e5cu: goto label_1a8e5c;
        case 0x1a8e60u: goto label_1a8e60;
        case 0x1a8e64u: goto label_1a8e64;
        case 0x1a8e68u: goto label_1a8e68;
        case 0x1a8e6cu: goto label_1a8e6c;
        case 0x1a8e70u: goto label_1a8e70;
        case 0x1a8e74u: goto label_1a8e74;
        case 0x1a8e78u: goto label_1a8e78;
        case 0x1a8e7cu: goto label_1a8e7c;
        case 0x1a8e80u: goto label_1a8e80;
        case 0x1a8e84u: goto label_1a8e84;
        case 0x1a8e88u: goto label_1a8e88;
        case 0x1a8e8cu: goto label_1a8e8c;
        case 0x1a8e90u: goto label_1a8e90;
        case 0x1a8e94u: goto label_1a8e94;
        case 0x1a8e98u: goto label_1a8e98;
        case 0x1a8e9cu: goto label_1a8e9c;
        case 0x1a8ea0u: goto label_1a8ea0;
        case 0x1a8ea4u: goto label_1a8ea4;
        case 0x1a8ea8u: goto label_1a8ea8;
        case 0x1a8eacu: goto label_1a8eac;
        case 0x1a8eb0u: goto label_1a8eb0;
        case 0x1a8eb4u: goto label_1a8eb4;
        case 0x1a8eb8u: goto label_1a8eb8;
        case 0x1a8ebcu: goto label_1a8ebc;
        case 0x1a8ec0u: goto label_1a8ec0;
        case 0x1a8ec4u: goto label_1a8ec4;
        case 0x1a8ec8u: goto label_1a8ec8;
        case 0x1a8eccu: goto label_1a8ecc;
        case 0x1a8ed0u: goto label_1a8ed0;
        case 0x1a8ed4u: goto label_1a8ed4;
        case 0x1a8ed8u: goto label_1a8ed8;
        case 0x1a8edcu: goto label_1a8edc;
        case 0x1a8ee0u: goto label_1a8ee0;
        case 0x1a8ee4u: goto label_1a8ee4;
        case 0x1a8ee8u: goto label_1a8ee8;
        case 0x1a8eecu: goto label_1a8eec;
        case 0x1a8ef0u: goto label_1a8ef0;
        case 0x1a8ef4u: goto label_1a8ef4;
        case 0x1a8ef8u: goto label_1a8ef8;
        case 0x1a8efcu: goto label_1a8efc;
        case 0x1a8f00u: goto label_1a8f00;
        case 0x1a8f04u: goto label_1a8f04;
        case 0x1a8f08u: goto label_1a8f08;
        case 0x1a8f0cu: goto label_1a8f0c;
        case 0x1a8f10u: goto label_1a8f10;
        case 0x1a8f14u: goto label_1a8f14;
        case 0x1a8f18u: goto label_1a8f18;
        case 0x1a8f1cu: goto label_1a8f1c;
        case 0x1a8f20u: goto label_1a8f20;
        case 0x1a8f24u: goto label_1a8f24;
        case 0x1a8f28u: goto label_1a8f28;
        case 0x1a8f2cu: goto label_1a8f2c;
        case 0x1a8f30u: goto label_1a8f30;
        case 0x1a8f34u: goto label_1a8f34;
        case 0x1a8f38u: goto label_1a8f38;
        case 0x1a8f3cu: goto label_1a8f3c;
        case 0x1a8f40u: goto label_1a8f40;
        case 0x1a8f44u: goto label_1a8f44;
        case 0x1a8f48u: goto label_1a8f48;
        case 0x1a8f4cu: goto label_1a8f4c;
        case 0x1a8f50u: goto label_1a8f50;
        case 0x1a8f54u: goto label_1a8f54;
        case 0x1a8f58u: goto label_1a8f58;
        case 0x1a8f5cu: goto label_1a8f5c;
        case 0x1a8f60u: goto label_1a8f60;
        case 0x1a8f64u: goto label_1a8f64;
        case 0x1a8f68u: goto label_1a8f68;
        case 0x1a8f6cu: goto label_1a8f6c;
        case 0x1a8f70u: goto label_1a8f70;
        case 0x1a8f74u: goto label_1a8f74;
        case 0x1a8f78u: goto label_1a8f78;
        case 0x1a8f7cu: goto label_1a8f7c;
        case 0x1a8f80u: goto label_1a8f80;
        case 0x1a8f84u: goto label_1a8f84;
        case 0x1a8f88u: goto label_1a8f88;
        case 0x1a8f8cu: goto label_1a8f8c;
        case 0x1a8f90u: goto label_1a8f90;
        case 0x1a8f94u: goto label_1a8f94;
        case 0x1a8f98u: goto label_1a8f98;
        case 0x1a8f9cu: goto label_1a8f9c;
        case 0x1a8fa0u: goto label_1a8fa0;
        case 0x1a8fa4u: goto label_1a8fa4;
        case 0x1a8fa8u: goto label_1a8fa8;
        case 0x1a8facu: goto label_1a8fac;
        case 0x1a8fb0u: goto label_1a8fb0;
        case 0x1a8fb4u: goto label_1a8fb4;
        case 0x1a8fb8u: goto label_1a8fb8;
        case 0x1a8fbcu: goto label_1a8fbc;
        case 0x1a8fc0u: goto label_1a8fc0;
        case 0x1a8fc4u: goto label_1a8fc4;
        case 0x1a8fc8u: goto label_1a8fc8;
        case 0x1a8fccu: goto label_1a8fcc;
        case 0x1a8fd0u: goto label_1a8fd0;
        case 0x1a8fd4u: goto label_1a8fd4;
        case 0x1a8fd8u: goto label_1a8fd8;
        case 0x1a8fdcu: goto label_1a8fdc;
        case 0x1a8fe0u: goto label_1a8fe0;
        case 0x1a8fe4u: goto label_1a8fe4;
        case 0x1a8fe8u: goto label_1a8fe8;
        case 0x1a8fecu: goto label_1a8fec;
        case 0x1a8ff0u: goto label_1a8ff0;
        case 0x1a8ff4u: goto label_1a8ff4;
        case 0x1a8ff8u: goto label_1a8ff8;
        case 0x1a8ffcu: goto label_1a8ffc;
        case 0x1a9000u: goto label_1a9000;
        case 0x1a9004u: goto label_1a9004;
        case 0x1a9008u: goto label_1a9008;
        case 0x1a900cu: goto label_1a900c;
        default: break;
    }

    ctx->pc = 0x1a8e28u;

label_1a8e28:
    // 0x1a8e28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a8e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a8e2c:
    // 0x1a8e2c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a8e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1a8e30:
    // 0x1a8e30: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a8e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1a8e34:
    // 0x1a8e34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a8e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e38:
    // 0x1a8e38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a8e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1a8e3c:
    // 0x1a8e3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a8e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e40:
    // 0x1a8e40: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1a8e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1a8e44:
    // 0x1a8e44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a8e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e48:
    // 0x1a8e48: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a8e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1a8e4c:
    // 0x1a8e4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a8e50:
    // 0x1a8e50: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1a8e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a8e54:
    // 0x1a8e54: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1a8e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a8e58:
    // 0x1a8e58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a8e5c:
    // 0x1a8e5c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1a8e5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1a8e60:
    // 0x1a8e60: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1a8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1a8e64:
    // 0x1a8e64: 0x40f809  jalr        $v0
label_1a8e68:
    if (ctx->pc == 0x1A8E68u) {
        ctx->pc = 0x1A8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E64u;
        // 0x1a8e68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E6Cu;
        goto label_1a8e6c;
    }
    ctx->pc = 0x1A8E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8E6Cu);
        ctx->pc = 0x1A8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E64u;
        // 0x1a8e68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8E64u, 0x1A8E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8E6Cu;
label_1a8e6c:
    // 0x1a8e6c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a8e6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e70:
    // 0x1a8e70: 0x1280005c  beqz        $s4, . + 4 + (0x5C << 2)
label_1a8e74:
    if (ctx->pc == 0x1A8E74u) {
        ctx->pc = 0x1A8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E70u;
        // 0x1a8e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E78u;
        goto label_1a8e78;
    }
    ctx->pc = 0x1A8E70u;
    {
        const bool branch_taken_0x1a8e70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E70u;
        // 0x1a8e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e70) {
            ctx->pc = 0x1A8FE4u;
            goto label_1a8fe4;
        }
    }
    ctx->pc = 0x1A8E78u;
label_1a8e78:
    // 0x1a8e78: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x1a8e78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a8e7c:
    // 0x1a8e7c: 0x0  nop
    ctx->pc = 0x1a8e7cu;
    // NOP
label_1a8e80:
    // 0x1a8e80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a8e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e84:
    // 0x1a8e84: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1a8e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a8e88:
    // 0x1a8e88: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a8e8c:
    // 0x1a8e8c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a8e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a8e90:
    // 0x1a8e90: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a8e94:
    // 0x1a8e94: 0x40f809  jalr        $v0
label_1a8e98:
    if (ctx->pc == 0x1A8E98u) {
        ctx->pc = 0x1A8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E94u;
        // 0x1a8e98: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E9Cu;
        goto label_1a8e9c;
    }
    ctx->pc = 0x1A8E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8E9Cu);
        ctx->pc = 0x1A8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E94u;
        // 0x1a8e98: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8E94u, 0x1A8E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8E9Cu;
label_1a8e9c:
    // 0x1a8e9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ea0:
    // 0x1a8ea0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1a8ea4:
    // 0x1a8ea4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a8ea8:
    if (ctx->pc == 0x1A8EA8u) {
        ctx->pc = 0x1A8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EA4u;
        // 0x1a8ea8: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EACu;
        goto label_1a8eac;
    }
    ctx->pc = 0x1A8EA4u;
    {
        const bool branch_taken_0x1a8ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ea4) {
            ctx->pc = 0x1A8EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8EA4u;
            // 0x1a8ea8: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8EBCu;
            goto label_1a8ebc;
        }
    }
    ctx->pc = 0x1A8EACu;
label_1a8eac:
    // 0x1a8eac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8eb0:
    // 0x1a8eb0: 0x50500048  beql        $v0, $s0, . + 4 + (0x48 << 2)
label_1a8eb4:
    if (ctx->pc == 0x1A8EB4u) {
        ctx->pc = 0x1A8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EB0u;
        // 0x1a8eb4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EB8u;
        goto label_1a8eb8;
    }
    ctx->pc = 0x1A8EB0u;
    {
        const bool branch_taken_0x1a8eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1a8eb0) {
            ctx->pc = 0x1A8EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8EB0u;
            // 0x1a8eb4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8FD4u;
            goto label_1a8fd4;
        }
    }
    ctx->pc = 0x1A8EB8u;
label_1a8eb8:
    // 0x1a8eb8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1a8eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1a8ebc:
    // 0x1a8ebc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a8ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ec0:
    // 0x1a8ec0: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x1a8ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_1a8ec4:
    // 0x1a8ec4: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x1a8ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a8ec8:
    // 0x1a8ec8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1a8ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a8ecc:
    // 0x1a8ecc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1a8eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a8ed0:
    // 0x1a8ed0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1a8ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1a8ed4:
    // 0x1a8ed4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1a8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1a8ed8:
    // 0x1a8ed8: 0x60f809  jalr        $v1
label_1a8edc:
    if (ctx->pc == 0x1A8EDCu) {
        ctx->pc = 0x1A8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ED8u;
        // 0x1a8edc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8EE0u;
        goto label_1a8ee0;
    }
    ctx->pc = 0x1A8ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8EE0u);
        ctx->pc = 0x1A8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ED8u;
        // 0x1a8edc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8ED8u, 0x1A8EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8EE0u;
label_1a8ee0:
    // 0x1a8ee0: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1a8ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8ee4:
    // 0x1a8ee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ee8:
    // 0x1a8ee8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a8ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a8eec:
    // 0x1a8eec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a8eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ef0:
    // 0x1a8ef0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a8ef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a8ef4:
    // 0x1a8ef4: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1a8ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1a8ef8:
    // 0x1a8ef8: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x1a8ef8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a8efc:
    // 0x1a8efc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1a8efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a8f00:
    // 0x1a8f00: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1a8f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a8f04:
    // 0x1a8f04: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a8f04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a8f08:
    // 0x1a8f08: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a8f0c:
    // 0x1a8f0c: 0x40f809  jalr        $v0
label_1a8f10:
    if (ctx->pc == 0x1A8F10u) {
        ctx->pc = 0x1A8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F0Cu;
        // 0x1a8f10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F14u;
        goto label_1a8f14;
    }
    ctx->pc = 0x1A8F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8F14u);
        ctx->pc = 0x1A8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F0Cu;
        // 0x1a8f10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8F0Cu, 0x1A8F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8F14u;
label_1a8f14:
    // 0x1a8f14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f18:
    // 0x1a8f18: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_1a8f1c:
    if (ctx->pc == 0x1A8F1Cu) {
        ctx->pc = 0x1A8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F18u;
        // 0x1a8f1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F20u;
        goto label_1a8f20;
    }
    ctx->pc = 0x1A8F18u;
    {
        const bool branch_taken_0x1a8f18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F18u;
        // 0x1a8f1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f18) {
            ctx->pc = 0x1A8FE4u;
            goto label_1a8fe4;
        }
    }
    ctx->pc = 0x1A8F20u;
label_1a8f20:
    // 0x1a8f20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a8f24:
    // 0x1a8f24: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1a8f28:
    if (ctx->pc == 0x1A8F28u) {
        ctx->pc = 0x1A8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F24u;
        // 0x1a8f28: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F2Cu;
        goto label_1a8f2c;
    }
    ctx->pc = 0x1A8F24u;
    {
        const bool branch_taken_0x1a8f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f24) {
            ctx->pc = 0x1A8F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8F24u;
            // 0x1a8f28: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8F3Cu;
            goto label_1a8f3c;
        }
    }
    ctx->pc = 0x1A8F2Cu;
label_1a8f2c:
    // 0x1a8f2c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a8f30:
    // 0x1a8f30: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1a8f34:
    if (ctx->pc == 0x1A8F34u) {
        ctx->pc = 0x1A8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F30u;
        // 0x1a8f34: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F38u;
        goto label_1a8f38;
    }
    ctx->pc = 0x1A8F30u;
    {
        const bool branch_taken_0x1a8f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f30) {
            ctx->pc = 0x1A8F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8F30u;
            // 0x1a8f34: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8F54u;
            goto label_1a8f54;
        }
    }
    ctx->pc = 0x1A8F38u;
label_1a8f38:
    // 0x1a8f38: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a8f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8f3c:
    // 0x1a8f3c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a8f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8f40:
    // 0x1a8f40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a8f40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a8f44:
    // 0x1a8f44: 0x0  nop
    ctx->pc = 0x1a8f44u;
    // NOP
label_1a8f48:
    // 0x1a8f48: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
label_1a8f4c:
    if (ctx->pc == 0x1A8F4Cu) {
        ctx->pc = 0x1A8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F48u;
        // 0x1a8f4c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F50u;
        goto label_1a8f50;
    }
    ctx->pc = 0x1A8F48u;
    {
        const bool branch_taken_0x1a8f48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8f48) {
            ctx->pc = 0x1A8F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8F48u;
            // 0x1a8f4c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8FD4u;
            goto label_1a8fd4;
        }
    }
    ctx->pc = 0x1A8F50u;
label_1a8f50:
    // 0x1a8f50: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1a8f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1a8f54:
    // 0x1a8f54: 0x2624002c  addiu       $a0, $s1, 0x2C
    ctx->pc = 0x1a8f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_1a8f58:
    // 0x1a8f58: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a8f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8f5c:
    // 0x1a8f5c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1a8f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1a8f60:
    // 0x1a8f60: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1a8f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8f64:
    // 0x1a8f64: 0xc06a4da  jal         func_1A9368
label_1a8f68:
    if (ctx->pc == 0x1A8F68u) {
        ctx->pc = 0x1A8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F64u;
        // 0x1a8f68: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F6Cu;
        goto label_1a8f6c;
    }
    ctx->pc = 0x1A8F64u;
    SET_GPR_U32(ctx, 31, 0x1A8F6Cu);
    ctx->pc = 0x1A8F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F64u;
    // 0x1a8f68: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9368u, 0x1A8F64u, 0x1A8F6Cu)) {
        return;
    }
    ctx->pc = 0x1A8F6Cu;
label_1a8f6c:
    // 0x1a8f6c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a8f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8f70:
    // 0x1a8f70: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a8f74:
    // 0x1a8f74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a8f74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a8f78:
    // 0x1a8f78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a8f7c:
    if (ctx->pc == 0x1A8F7Cu) {
        ctx->pc = 0x1A8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F78u;
        // 0x1a8f7c: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F80u;
        goto label_1a8f80;
    }
    ctx->pc = 0x1A8F78u;
    {
        const bool branch_taken_0x1a8f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F78u;
        // 0x1a8f7c: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f78) {
            ctx->pc = 0x1A8F84u;
            goto label_1a8f84;
        }
    }
    ctx->pc = 0x1A8F80u;
label_1a8f80:
    // 0x1a8f80: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a8f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1a8f84:
    // 0x1a8f84: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a8f88:
    // 0x1a8f88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a8f8c:
    if (ctx->pc == 0x1A8F8Cu) {
        ctx->pc = 0x1A8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F88u;
        // 0x1a8f8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8F90u;
        goto label_1a8f90;
    }
    ctx->pc = 0x1A8F88u;
    {
        const bool branch_taken_0x1a8f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F88u;
        // 0x1a8f8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8f88) {
            ctx->pc = 0x1A8FB0u;
            goto label_1a8fb0;
        }
    }
    ctx->pc = 0x1A8F90u;
label_1a8f90:
    // 0x1a8f90: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x1a8f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1a8f94:
    // 0x1a8f94: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a8f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a8f98:
    // 0x1a8f98: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1a8f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1a8f9c:
    // 0x1a8f9c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1a8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a8fa0:
    // 0x1a8fa0: 0x60f809  jalr        $v1
label_1a8fa4:
    if (ctx->pc == 0x1A8FA4u) {
        ctx->pc = 0x1A8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FA0u;
        // 0x1a8fa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8FA8u;
        goto label_1a8fa8;
    }
    ctx->pc = 0x1A8FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8FA8u);
        ctx->pc = 0x1A8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FA0u;
        // 0x1a8fa4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8FA0u, 0x1A8FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8FA8u;
label_1a8fa8:
    // 0x1a8fa8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a8fac:
    if (ctx->pc == 0x1A8FACu) {
        ctx->pc = 0x1A8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FA8u;
        // 0x1a8fac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8FB0u;
        goto label_1a8fb0;
    }
    ctx->pc = 0x1A8FA8u;
    {
        const bool branch_taken_0x1a8fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FA8u;
        // 0x1a8fac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8fa8) {
            ctx->pc = 0x1A8FD4u;
            goto label_1a8fd4;
        }
    }
    ctx->pc = 0x1A8FB0u;
label_1a8fb0:
    // 0x1a8fb0: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x1a8fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1a8fb4:
    // 0x1a8fb4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a8fb8:
    // 0x1a8fb8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a8fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1a8fbc:
    // 0x1a8fbc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1a8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a8fc0:
    // 0x1a8fc0: 0x60f809  jalr        $v1
label_1a8fc4:
    if (ctx->pc == 0x1A8FC4u) {
        ctx->pc = 0x1A8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FC0u;
        // 0x1a8fc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8FC8u;
        goto label_1a8fc8;
    }
    ctx->pc = 0x1A8FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8FC8u);
        ctx->pc = 0x1A8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FC0u;
        // 0x1a8fc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8FC0u, 0x1A8FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8FC8u;
label_1a8fc8:
    // 0x1a8fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8fcc:
    // 0x1a8fcc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a8fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1a8fd0:
    // 0x1a8fd0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a8fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a8fd4:
    // 0x1a8fd4: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x1a8fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_1a8fd8:
    // 0x1a8fd8: 0x5440ffa9  bnel        $v0, $zero, . + 4 + (-0x57 << 2)
label_1a8fdc:
    if (ctx->pc == 0x1A8FDCu) {
        ctx->pc = 0x1A8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8FD8u;
        // 0x1a8fdc: 0x8e270014  lw          $a3, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8FE0u;
        goto label_1a8fe0;
    }
    ctx->pc = 0x1A8FD8u;
    {
        const bool branch_taken_0x1a8fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8fd8) {
            ctx->pc = 0x1A8FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8FD8u;
            // 0x1a8fdc: 0x8e270014  lw          $a3, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8e80;
        }
    }
    ctx->pc = 0x1A8FE0u;
label_1a8fe0:
    // 0x1a8fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8fe4:
    // 0x1a8fe4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a8fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a8fe8:
    // 0x1a8fe8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1a8fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1a8fec:
    // 0x1a8fec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a8fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a8ff0:
    // 0x1a8ff0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a8ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a8ff4:
    // 0x1a8ff4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a8ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a8ff8:
    // 0x1a8ff8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1a8ff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8ffc:
    // 0x1a8ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9000:
    // 0x1a9000: 0x3e00008  jr          $ra
label_1a9004:
    if (ctx->pc == 0x1A9004u) {
        ctx->pc = 0x1A9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9000u;
        // 0x1a9004: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9008u;
        goto label_1a9008;
    }
    ctx->pc = 0x1A9000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9000u;
        // 0x1a9004: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9008u;
label_1a9008:
    // 0x1a9008: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a9008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a900c:
    // 0x1a900c: 0x0  nop
    ctx->pc = 0x1a900cu;
    // NOP
    ctx->pc = 0x1a9010u;
}
