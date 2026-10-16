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

// Function: sub_002E8E00
// Address: 0x2e8e00 - 0x2e9080
void sub_002E8E00_0x2e8e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8E00_0x2e8e00");
#endif

    switch (ctx->pc) {
        case 0x2e8e64u: goto label_2e8e64;
        case 0x2e8f18u: goto label_2e8f18;
        case 0x2e8f48u: goto label_2e8f48;
        case 0x2e8fe8u: goto label_2e8fe8;
        case 0x2e904cu: goto label_2e904c;
        default: break;
    }

    ctx->pc = 0x2e8e00u;

    // 0x2e8e00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2e8e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2e8e04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e8e08: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2e8e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x2e8e0c: 0x8f84907c  lw          $a0, -0x6F84($gp)
    ctx->pc = 0x2e8e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
    // 0x2e8e10: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2e8e10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e14: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2e8e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2e8e18: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2e8e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2e8e1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e8e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e20: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2e8e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2e8e24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e8e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e28: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2e8e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2e8e2c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e8e2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e8e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e8e34: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e8e34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e38: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2e8e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x2e8e3c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2e8e3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8e40: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2e8e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2e8e44: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2e8e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2e8e48: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2e8e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x2e8e4c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e8e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e8e50: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2e8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2e8e54: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x2e8e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x2e8e58: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x2e8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x2e8e5c: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2E8E5Cu;
    SET_GPR_U32(ctx, 31, 0x2E8E64u);
    ctx->pc = 0x2E8E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8E5Cu;
    // 0x2e8e60: 0xafab0014  sw          $t3, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2E8E5Cu, 0x2E8E64u)) {
        return;
    }
    ctx->pc = 0x2E8E64u;
label_2e8e64:
    // 0x2e8e64: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2e8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e8e68: 0x2443fffd  addiu       $v1, $v0, -0x3
    ctx->pc = 0x2e8e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x2e8e6c: 0x2c620017  sltiu       $v0, $v1, 0x17
    ctx->pc = 0x2e8e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x2e8e70: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E8E70u;
    {
        const bool branch_taken_0x2e8e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8E70u;
        // 0x2e8e74: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8e70) {
            ctx->pc = 0x2E8ED8u;
            goto label_2e8ed8;
        }
    }
    ctx->pc = 0x2E8E78u;
    // 0x2e8e78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e8e7c: 0x2442fd70  addiu       $v0, $v0, -0x290
    ctx->pc = 0x2e8e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966640));
    // 0x2e8e80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e8e84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e8e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e8e88: 0x800008  jr          $a0
    ctx->pc = 0x2E8E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E8E90u: goto label_2e8e90;
            case 0x2E8EB8u: goto label_2e8eb8;
            case 0x2E8ED8u: goto label_2e8ed8;
            case 0x2E8EECu: goto label_2e8eec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8E88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E8E90u;
label_2e8e90:
    // 0x2e8e90: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x2e8e90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8e94: 0x8f838c60  lw          $v1, -0x73A0($gp)
    ctx->pc = 0x2e8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x2e8e98: 0x2f1102b  sltu        $v0, $s7, $s1
    ctx->pc = 0x2e8e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e8e9c: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x2e8e9cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e8ea0: 0x2e2880b  movn        $s1, $s7, $v0
    ctx->pc = 0x2e8ea0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 23));
    // 0x2e8ea4: 0x8fb40004  lw          $s4, 0x4($sp)
    ctx->pc = 0x2e8ea4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e8ea8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8EA8u;
    {
        const bool branch_taken_0x2e8ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EA8u;
        // 0x2e8eac: 0x8f938c68  lw          $s3, -0x7398($gp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ea8) {
            ctx->pc = 0x2E8EC4u;
            goto label_2e8ec4;
        }
    }
    ctx->pc = 0x2E8EB0u;
    // 0x2e8eb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8EB0u;
    {
        const bool branch_taken_0x2e8eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EB0u;
        // 0x2e8eb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8eb0) {
            ctx->pc = 0x2E8ECCu;
            goto label_2e8ecc;
        }
    }
    ctx->pc = 0x2E8EB8u;
label_2e8eb8:
    // 0x2e8eb8: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x2e8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x2e8ebc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8EBCu;
    {
        const bool branch_taken_0x2e8ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EBCu;
        // 0x2e8ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ebc) {
            ctx->pc = 0x2E8ECCu;
            goto label_2e8ecc;
        }
    }
    ctx->pc = 0x2E8EC4u;
label_2e8ec4:
    // 0x2e8ec4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8EC4u;
    {
        const bool branch_taken_0x2e8ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8EC4u;
        // 0x2e8ec8: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ec4) {
            ctx->pc = 0x2E8EECu;
            goto label_2e8eec;
        }
    }
    ctx->pc = 0x2E8ECCu;
label_2e8ecc:
    // 0x2e8ecc: 0xaf828c60  sw          $v0, -0x73A0($gp)
    ctx->pc = 0x2e8eccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
    // 0x2e8ed0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E8ED0u;
    {
        const bool branch_taken_0x2e8ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8ED0u;
        // 0x2e8ed4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ed0) {
            ctx->pc = 0x2E8EF0u;
            goto label_2e8ef0;
        }
    }
    ctx->pc = 0x2E8ED8u;
label_2e8ed8:
    // 0x2e8ed8: 0x3c15000f  lui         $s5, 0xF
    ctx->pc = 0x2e8ed8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)15 << 16));
    // 0x2e8edc: 0x8fb40004  lw          $s4, 0x4($sp)
    ctx->pc = 0x2e8edcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e8ee0: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x2e8ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8ee4: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x2e8ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8ee8: 0x36b5fc00  ori         $s5, $s5, 0xFC00
    ctx->pc = 0x2e8ee8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64512);
label_2e8eec:
    // 0x2e8eec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e8eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e8ef0:
    // 0x2e8ef0: 0x16c2000c  bne         $s6, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E8EF0u;
    {
        const bool branch_taken_0x2e8ef0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e8ef0) {
            ctx->pc = 0x2E8F24u;
            goto label_2e8f24;
        }
    }
    ctx->pc = 0x2E8EF8u;
    // 0x2e8ef8: 0x8f828c7c  lw          $v0, -0x7384($gp)
    ctx->pc = 0x2e8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
    // 0x2e8efc: 0x8f838c80  lw          $v1, -0x7380($gp)
    ctx->pc = 0x2e8efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x2e8f00: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2e8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2e8f04: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2e8f04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8f08: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8F08u;
    {
        const bool branch_taken_0x2e8f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F08u;
        // 0x2e8f0c: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f08) {
            ctx->pc = 0x2E8F24u;
            goto label_2e8f24;
        }
    }
    ctx->pc = 0x2E8F10u;
    // 0x2e8f10: 0xc0c4f0a  jal         func_313C28
    ctx->pc = 0x2E8F10u;
    SET_GPR_U32(ctx, 31, 0x2E8F18u);
    ctx->pc = 0x2E8F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F10u;
    // 0x2e8f14: 0x2484fd20  addiu       $a0, $a0, -0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313C28u, 0x2E8F10u, 0x2E8F18u)) {
        return;
    }
    ctx->pc = 0x2E8F18u;
label_2e8f18:
    // 0x2e8f18: 0x8f838c7c  lw          $v1, -0x7384($gp)
    ctx->pc = 0x2e8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937724)));
    // 0x2e8f1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e8f20: 0xaf838c7c  sw          $v1, -0x7384($gp)
    ctx->pc = 0x2e8f20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 3));
label_2e8f24:
    // 0x2e8f24: 0x12c00047  beqz        $s6, . + 4 + (0x47 << 2)
    ctx->pc = 0x2E8F24u;
    {
        const bool branch_taken_0x2e8f24 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F24u;
        // 0x2e8f28: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f24) {
            ctx->pc = 0x2E9044u;
            goto label_2e9044;
        }
    }
    ctx->pc = 0x2E8F2Cu;
    // 0x2e8f2c: 0x27928c78  addiu       $s2, $gp, -0x7388
    ctx->pc = 0x2e8f2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937720));
    // 0x2e8f30: 0x245ec400  addiu       $fp, $v0, -0x3C00
    ctx->pc = 0x2e8f30u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x2e8f34: 0x27848c80  addiu       $a0, $gp, -0x7380
    ctx->pc = 0x2e8f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x2e8f38: 0x3ac20002  xori        $v0, $s6, 0x2
    ctx->pc = 0x2e8f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)2);
    // 0x2e8f3c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2e8f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8f40: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x2e8f40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4));
    // 0x2e8f44: 0x0  nop
    ctx->pc = 0x2e8f44u;
    // NOP
label_2e8f48:
    // 0x2e8f48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e8f4c: 0x16ca0004  bne         $s6, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8F4Cu;
    {
        const bool branch_taken_0x2e8f4c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 10));
        ctx->pc = 0x2E8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F4Cu;
        // 0x2e8f50: 0x3043007f  andi        $v1, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f4c) {
            ctx->pc = 0x2E8F60u;
            goto label_2e8f60;
        }
    }
    ctx->pc = 0x2E8F54u;
    // 0x2e8f54: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x2e8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e8f58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8F58u;
    {
        const bool branch_taken_0x2e8f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F58u;
        // 0x2e8f5c: 0x5e2821  addu        $a1, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f58) {
            ctx->pc = 0x2E8F74u;
            goto label_2e8f74;
        }
    }
    ctx->pc = 0x2E8F60u;
label_2e8f60:
    // 0x2e8f60: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e8f64: 0x2442ac00  addiu       $v0, $v0, -0x5400
    ctx->pc = 0x2e8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945792));
    // 0x2e8f68: 0x400013  mtlo        $v0
    ctx->pc = 0x2e8f68u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2e8f6c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2e8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e8f70: 0x70622800  madd        $a1, $v1, $v0
    ctx->pc = 0x2e8f70u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2e8f74:
    // 0x2e8f74: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2e8f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e8f78: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2e8f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f7c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2e8f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2e8f80: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x2e8f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x2e8f84: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x2e8f84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17));
    // 0x2e8f88: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2e8f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e8f8c: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x2e8f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x2e8f90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8f94: 0xacb70020  sw          $s7, 0x20($a1)
    ctx->pc = 0x2e8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 23));
    // 0x2e8f98: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x2e8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x2e8f9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e8f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8fa0: 0xaca40024  sw          $a0, 0x24($a1)
    ctx->pc = 0x2e8fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
    // 0x2e8fa4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2e8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e8fa8: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x2e8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x2e8fac: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2e8facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2e8fb0: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8FB0u;
    {
        const bool branch_taken_0x2e8fb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2E8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FB0u;
        // 0x2e8fb4: 0xaca40014  sw          $a0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fb0) {
            ctx->pc = 0x2E8FC4u;
            goto label_2e8fc4;
        }
    }
    ctx->pc = 0x2E8FB8u;
    // 0x2e8fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8fbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8FBCu;
    {
        const bool branch_taken_0x2e8fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FBCu;
        // 0x2e8fc0: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fbc) {
            ctx->pc = 0x2E8FC8u;
            goto label_2e8fc8;
        }
    }
    ctx->pc = 0x2E8FC4u;
label_2e8fc4:
    // 0x2e8fc4: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x2e8fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_2e8fc8:
    // 0x2e8fc8: 0x12ca0009  beq         $s6, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8FC8u;
    {
        const bool branch_taken_0x2e8fc8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 10));
        ctx->pc = 0x2E8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FC8u;
        // 0x2e8fcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fc8) {
            ctx->pc = 0x2E8FF0u;
            goto label_2e8ff0;
        }
    }
    ctx->pc = 0x2E8FD0u;
    // 0x2e8fd0: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x2e8fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
    // 0x2e8fd4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e8fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e8fd8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e8fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fdc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2e8fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fe0: 0xc0c9046  jal         func_324118
    ctx->pc = 0x2E8FE0u;
    SET_GPR_U32(ctx, 31, 0x2E8FE8u);
    ctx->pc = 0x2E8FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8FE0u;
    // 0x2e8fe4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324118u, 0x2E8FE0u, 0x2E8FE8u)) {
        return;
    }
    ctx->pc = 0x2E8FE8u;
label_2e8fe8:
    // 0x2e8fe8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E8FE8u;
    {
        const bool branch_taken_0x2e8fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FE8u;
        // 0x2e8fec: 0x7baa0020  lq          $t2, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fe8) {
            ctx->pc = 0x2E9024u;
            goto label_2e9024;
        }
    }
    ctx->pc = 0x2E8FF0u;
label_2e8ff0:
    // 0x2e8ff0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e8ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e8ff4: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x2e8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e8ff8: 0x2484c430  addiu       $a0, $a0, -0x3BD0
    ctx->pc = 0x2e8ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951984));
    // 0x2e8ffc: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2e8ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2e9000: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2e9000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e9004: 0x24a5c434  addiu       $a1, $a1, -0x3BCC
    ctx->pc = 0x2e9004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951988));
    // 0x2e9008: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x2e9008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x2e900c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x2e900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e9010: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2e9010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2e9014: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x2e9014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x2e9018: 0x2463c438  addiu       $v1, $v1, -0x3BC8
    ctx->pc = 0x2e9018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951992));
    // 0x2e901c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9020: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2e9020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2e9024:
    // 0x2e9024: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e9024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e9028: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x2e9028u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e902c: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x2e902cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2e9030: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2e9030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2e9034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e9034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e9038: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2e9038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2e903c: 0x1620ffc2  bnez        $s1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2E903Cu;
    {
        const bool branch_taken_0x2e903c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e903c) {
            ctx->pc = 0x2E8F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8f48;
        }
    }
    ctx->pc = 0x2E9044u;
label_2e9044:
    // 0x2e9044: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2E9044u;
    SET_GPR_U32(ctx, 31, 0x2E904Cu);
    ctx->pc = 0x2E9048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9044u;
    // 0x2e9048: 0x8f84907c  lw          $a0, -0x6F84($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2E9044u, 0x2E904Cu)) {
        return;
    }
    ctx->pc = 0x2E904Cu;
label_2e904c:
    // 0x2e904c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2e904cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e9050: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2e9050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e9054: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2e9054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e9058: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2e9058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e905c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2e905cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e9060: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2e9060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e9064: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e9064u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e9068: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2e9068u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e906c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2e906cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e9070: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e9070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9074: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9074u;
        // 0x2e9078: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E907Cu;
    // 0x2e907c: 0x0  nop
    ctx->pc = 0x2e907cu;
    // NOP
    ctx->pc = 0x2e9080u;
}
