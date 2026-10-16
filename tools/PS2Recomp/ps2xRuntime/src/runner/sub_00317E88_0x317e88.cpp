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

// Function: sub_00317E88
// Address: 0x317e88 - 0x317f90
void sub_00317E88_0x317e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317E88_0x317e88");
#endif

    switch (ctx->pc) {
        case 0x317ed8u: goto label_317ed8;
        case 0x317ee8u: goto label_317ee8;
        case 0x317f10u: goto label_317f10;
        case 0x317f48u: goto label_317f48;
        default: break;
    }

    ctx->pc = 0x317e88u;

    // 0x317e88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x317e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x317e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x317e90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x317e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x317e94: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x317e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x317e98: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x317e98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317e9c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x317e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x317ea0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x317ea0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317ea4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x317ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x317ea8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x317ea8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317eac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x317eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x317eb0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x317eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x317eb4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x317eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x317eb8: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x317EB8u;
    {
        const bool branch_taken_0x317eb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x317EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EB8u;
        // 0x317ebc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317eb8) {
            ctx->pc = 0x317EF0u;
            goto label_317ef0;
        }
    }
    ctx->pc = 0x317EC0u;
    // 0x317ec0: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x317ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x317ec4: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x317ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x317ec8: 0x26318fe8  addiu       $s1, $s1, -0x7018
    ctx->pc = 0x317ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938600));
    // 0x317ecc: 0x8e067060  lw          $a2, 0x7060($s0)
    ctx->pc = 0x317eccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x687060u));
    // 0x317ed0: 0xc0c863a  jal         func_3218E8
    ctx->pc = 0x317ED0u;
    SET_GPR_U32(ctx, 31, 0x317ED8u);
    ctx->pc = 0x317ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317ED0u;
    // 0x317ed4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3218E8u, 0x317ED0u, 0x317ED8u)) {
        return;
    }
    ctx->pc = 0x317ED8u;
label_317ed8:
    // 0x317ed8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x317ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x317edc: 0xae007060  sw          $zero, 0x7060($s0)
    ctx->pc = 0x317edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28768), GPR_U32(ctx, 0));
    // 0x317ee0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x317EE0u;
    {
        const bool branch_taken_0x317ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EE0u;
        // 0x317ee4: 0xac717064  sw          $s1, 0x7064($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28772), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ee0) {
            ctx->pc = 0x317F68u;
            goto label_317f68;
        }
    }
    ctx->pc = 0x317EE8u;
label_317ee8:
    // 0x317ee8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x317EE8u;
    {
        const bool branch_taken_0x317ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EE8u;
        // 0x317eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ee8) {
            ctx->pc = 0x317F68u;
            goto label_317f68;
        }
    }
    ctx->pc = 0x317EF0u;
label_317ef0:
    // 0x317ef0: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x317EF0u;
    {
        const bool branch_taken_0x317ef0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x317EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317EF0u;
        // 0x317ef4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ef0) {
            ctx->pc = 0x317F64u;
            goto label_317f64;
        }
    }
    ctx->pc = 0x317EF8u;
    // 0x317ef8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x317ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x317efc: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x317efcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x317f00: 0x24558fe8  addiu       $s5, $v0, -0x7018
    ctx->pc = 0x317f00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938600));
    // 0x317f04: 0x3c120068  lui         $s2, 0x68
    ctx->pc = 0x317f04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
    // 0x317f08: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x317f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x317f0c: 0x0  nop
    ctx->pc = 0x317f0cu;
    // NOP
label_317f10:
    // 0x317f10: 0x8e247064  lw          $a0, 0x7064($s1)
    ctx->pc = 0x317f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28772)));
    // 0x317f14: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x317f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x317f18: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x317f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x317f1c: 0x8e427060  lw          $v0, 0x7060($s2)
    ctx->pc = 0x317f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28768)));
    // 0x317f20: 0x8e237064  lw          $v1, 0x7064($s1)
    ctx->pc = 0x317f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28772)));
    // 0x317f24: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x317f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x317f28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x317f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x317f2c: 0xae467060  sw          $a2, 0x7060($s2)
    ctx->pc = 0x317f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28768), GPR_U32(ctx, 6));
    // 0x317f30: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x317f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x317f34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x317F34u;
    {
        const bool branch_taken_0x317f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F34u;
        // 0x317f38: 0xae237064  sw          $v1, 0x7064($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f34) {
            ctx->pc = 0x317F54u;
            goto label_317f54;
        }
    }
    ctx->pc = 0x317F3Cu;
    // 0x317f3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x317f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317f40: 0xc0c863a  jal         func_3218E8
    ctx->pc = 0x317F40u;
    SET_GPR_U32(ctx, 31, 0x317F48u);
    ctx->pc = 0x317F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317F40u;
    // 0x317f44: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3218E8u, 0x317F40u, 0x317F48u)) {
        return;
    }
    ctx->pc = 0x317F48u;
label_317f48:
    // 0x317f48: 0xae357064  sw          $s5, 0x7064($s1)
    ctx->pc = 0x317f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28772), GPR_U32(ctx, 21));
    // 0x317f4c: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x317F4Cu;
    {
        const bool branch_taken_0x317f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F4Cu;
        // 0x317f50: 0xae407060  sw          $zero, 0x7060($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f4c) {
            ctx->pc = 0x317EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317ee8;
        }
    }
    ctx->pc = 0x317F54u;
label_317f54:
    // 0x317f54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x317f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x317f58: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x317f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x317f5c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x317F5Cu;
    {
        const bool branch_taken_0x317f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F5Cu;
        // 0x317f60: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f5c) {
            ctx->pc = 0x317F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317f10;
        }
    }
    ctx->pc = 0x317F64u;
label_317f64:
    // 0x317f64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x317f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_317f68:
    // 0x317f68: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x317f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x317f6c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x317f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x317f70: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x317f70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x317f74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x317f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x317f78: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x317f78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317f7c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x317f7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317f80: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x317f80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317f88: 0x3e00008  jr          $ra
    ctx->pc = 0x317F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F88u;
        // 0x317f8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317F90u;
}
