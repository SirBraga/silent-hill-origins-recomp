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

// Function: sub_001BB8B0
// Address: 0x1bb8b0 - 0x1bbab0
void sub_001BB8B0_0x1bb8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB8B0_0x1bb8b0");
#endif

    switch (ctx->pc) {
        case 0x1bb8f0u: goto label_1bb8f0;
        case 0x1bb930u: goto label_1bb930;
        case 0x1bb968u: goto label_1bb968;
        case 0x1bb9c0u: goto label_1bb9c0;
        case 0x1bb9f0u: goto label_1bb9f0;
        case 0x1bba2cu: goto label_1bba2c;
        case 0x1bba70u: goto label_1bba70;
        default: break;
    }

    ctx->pc = 0x1bb8b0u;

    // 0x1bb8b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bb8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bb8b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1bb8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1bb8b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1bb8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1bb8bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bb8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bb8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1bb8c4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1bb8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1bb8c8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1bb8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1bb8cc: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1BB8CCu;
    {
        const bool branch_taken_0x1bb8cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8CCu;
        // 0x1bb8d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8cc) {
            ctx->pc = 0x1BB9A8u;
            goto label_1bb9a8;
        }
    }
    ctx->pc = 0x1BB8D4u;
    // 0x1bb8d4: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1bb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1bb8d8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1bb8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb8dc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1bb8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bb8e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB8E0u;
    {
        const bool branch_taken_0x1bb8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8E0u;
        // 0x1bb8e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8e0) {
            ctx->pc = 0x1BB908u;
            goto label_1bb908;
        }
    }
    ctx->pc = 0x1BB8E8u;
    // 0x1bb8e8: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1bb8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1bb8ec: 0x0  nop
    ctx->pc = 0x1bb8ecu;
    // NOP
label_1bb8f0:
    // 0x1bb8f0: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB8F0u;
    {
        const bool branch_taken_0x1bb8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bb8f0) {
            ctx->pc = 0x1BB90Cu;
            goto label_1bb90c;
        }
    }
    ctx->pc = 0x1BB8F8u;
    // 0x1bb8f8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1bb8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bb8fc: 0x0  nop
    ctx->pc = 0x1bb8fcu;
    // NOP
    // 0x1bb900: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BB900u;
    {
        const bool branch_taken_0x1bb900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB900u;
        // 0x1bb904: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb900) {
            ctx->pc = 0x1BB8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb8f0;
        }
    }
    ctx->pc = 0x1BB908u;
label_1bb908:
    // 0x1bb908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb90c:
    // 0x1bb90c: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB90Cu;
    {
        const bool branch_taken_0x1bb90c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB90Cu;
        // 0x1bb910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb90c) {
            ctx->pc = 0x1BB918u;
            goto label_1bb918;
        }
    }
    ctx->pc = 0x1BB914u;
    // 0x1bb914: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bb914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1bb918:
    // 0x1bb918: 0x10a0005d  beqz        $a1, . + 4 + (0x5D << 2)
    ctx->pc = 0x1BB918u;
    {
        const bool branch_taken_0x1bb918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB918u;
        // 0x1bb91c: 0x28e20006  slti        $v0, $a3, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb918) {
            ctx->pc = 0x1BBA90u;
            goto label_1bba90;
        }
    }
    ctx->pc = 0x1BB920u;
    // 0x1bb920: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1BB920u;
    {
        const bool branch_taken_0x1bb920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB920u;
        // 0x1bb924: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb920) {
            ctx->pc = 0x1BBA90u;
            goto label_1bba90;
        }
    }
    ctx->pc = 0x1BB928u;
    // 0x1bb928: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1bb928u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb92c: 0x0  nop
    ctx->pc = 0x1bb92cu;
    // NOP
label_1bb930:
    // 0x1bb930: 0x54e30016  bnel        $a3, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BB930u;
    {
        const bool branch_taken_0x1bb930 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb930) {
            ctx->pc = 0x1BB934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB930u;
            // 0x1bb934: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB98Cu;
            goto label_1bb98c;
        }
    }
    ctx->pc = 0x1BB938u;
    // 0x1bb938: 0x10a00055  beqz        $a1, . + 4 + (0x55 << 2)
    ctx->pc = 0x1BB938u;
    {
        const bool branch_taken_0x1bb938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB938u;
        // 0x1bb93c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb938) {
            ctx->pc = 0x1BBA90u;
            goto label_1bba90;
        }
    }
    ctx->pc = 0x1BB940u;
    // 0x1bb940: 0xae340354  sw          $s4, 0x354($s1)
    ctx->pc = 0x1bb940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 852), GPR_U32(ctx, 20));
    // 0x1bb944: 0xae200358  sw          $zero, 0x358($s1)
    ctx->pc = 0x1bb944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 0));
    // 0x1bb948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bb948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb94c: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x1bb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x1bb950: 0x2632036c  addiu       $s2, $s1, 0x36C
    ctx->pc = 0x1bb950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
    // 0x1bb954: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bb954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bb958: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1BB958u;
    {
        const bool branch_taken_0x1bb958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB958u;
        // 0x1bb95c: 0x26260368  addiu       $a2, $s1, 0x368 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb958) {
            ctx->pc = 0x1BBA20u;
            goto label_1bba20;
        }
    }
    ctx->pc = 0x1BB960u;
    // 0x1bb960: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bb960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bb964: 0x0  nop
    ctx->pc = 0x1bb964u;
    // NOP
label_1bb968:
    // 0x1bb968: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1bb968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1bb96c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BB96Cu;
    {
        const bool branch_taken_0x1bb96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB96Cu;
        // 0x1bb970: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb96c) {
            ctx->pc = 0x1BBA4Cu;
            goto label_1bba4c;
        }
    }
    ctx->pc = 0x1BB974u;
    // 0x1bb974: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1bb974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1bb978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bb978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb97c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BB97Cu;
    {
        const bool branch_taken_0x1bb97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb97c) {
            ctx->pc = 0x1BB980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB97Cu;
            // 0x1bb980: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BB984u;
    // 0x1bb984: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1BB984u;
    {
        const bool branch_taken_0x1bb984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB984u;
        // 0x1bb988: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb984) {
            ctx->pc = 0x1BBA4Cu;
            goto label_1bba4c;
        }
    }
    ctx->pc = 0x1BB98Cu;
label_1bb98c:
    // 0x1bb98c: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1BB98Cu;
    {
        const bool branch_taken_0x1bb98c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB98Cu;
        // 0x1bb990: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb98c) {
            ctx->pc = 0x1BBA90u;
            goto label_1bba90;
        }
    }
    ctx->pc = 0x1BB994u;
    // 0x1bb994: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x1bb994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1bb998: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1BB998u;
    {
        const bool branch_taken_0x1bb998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB998u;
        // 0x1bb99c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb998) {
            ctx->pc = 0x1BB930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb930;
        }
    }
    ctx->pc = 0x1BB9A0u;
    // 0x1bb9a0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1BB9A0u;
    {
        const bool branch_taken_0x1bb9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9A0u;
        // 0x1bb9a4: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9a0) {
            ctx->pc = 0x1BBA98u;
            goto label_1bba98;
        }
    }
    ctx->pc = 0x1BB9A8u;
label_1bb9a8:
    // 0x1bb9a8: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x1bb9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x1bb9ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bb9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb9b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1bb9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bb9b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB9B4u;
    {
        const bool branch_taken_0x1bb9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9B4u;
        // 0x1bb9b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9b4) {
            ctx->pc = 0x1BB9D8u;
            goto label_1bb9d8;
        }
    }
    ctx->pc = 0x1BB9BCu;
    // 0x1bb9bc: 0x8e250320  lw          $a1, 0x320($s1)
    ctx->pc = 0x1bb9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_1bb9c0:
    // 0x1bb9c0: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB9C0u;
    {
        const bool branch_taken_0x1bb9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bb9c0) {
            ctx->pc = 0x1BB9DCu;
            goto label_1bb9dc;
        }
    }
    ctx->pc = 0x1BB9C8u;
    // 0x1bb9c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1bb9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bb9cc: 0x0  nop
    ctx->pc = 0x1bb9ccu;
    // NOP
    // 0x1bb9d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BB9D0u;
    {
        const bool branch_taken_0x1bb9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9D0u;
        // 0x1bb9d4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9d0) {
            ctx->pc = 0x1BB9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb9c0;
        }
    }
    ctx->pc = 0x1BB9D8u;
label_1bb9d8:
    // 0x1bb9d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9dc:
    // 0x1bb9dc: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB9DCu;
    {
        const bool branch_taken_0x1bb9dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9DCu;
        // 0x1bb9e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9dc) {
            ctx->pc = 0x1BB9E8u;
            goto label_1bb9e8;
        }
    }
    ctx->pc = 0x1BB9E4u;
    // 0x1bb9e4: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1bb9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bb9e8:
    // 0x1bb9e8: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BB9E8u;
    {
        const bool branch_taken_0x1bb9e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9E8u;
        // 0x1bb9ec: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9e8) {
            ctx->pc = 0x1BBA90u;
            goto label_1bba90;
        }
    }
    ctx->pc = 0x1BB9F0u;
label_1bb9f0:
    // 0x1bb9f0: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BB9F0u;
    {
        const bool branch_taken_0x1bb9f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9F0u;
        // 0x1bb9f4: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9f0) {
            ctx->pc = 0x1BBA80u;
            goto label_1bba80;
        }
    }
    ctx->pc = 0x1BB9F8u;
    // 0x1bb9f8: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1BB9F8u;
    {
        const bool branch_taken_0x1bb9f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9F8u;
        // 0x1bb9fc: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9f8) {
            ctx->pc = 0x1BBA90u;
            goto label_1bba90;
        }
    }
    ctx->pc = 0x1BBA00u;
    // 0x1bba00: 0xae340354  sw          $s4, 0x354($s1)
    ctx->pc = 0x1bba00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 852), GPR_U32(ctx, 20));
    // 0x1bba04: 0xae340358  sw          $s4, 0x358($s1)
    ctx->pc = 0x1bba04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 20));
    // 0x1bba08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bba0c: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x1bba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x1bba10: 0x2632036c  addiu       $s2, $s1, 0x36C
    ctx->pc = 0x1bba10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
    // 0x1bba14: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bba14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bba18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBA18u;
    {
        const bool branch_taken_0x1bba18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA18u;
        // 0x1bba1c: 0x26260368  addiu       $a2, $s1, 0x368 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba18) {
            ctx->pc = 0x1BBA28u;
            goto label_1bba28;
        }
    }
    ctx->pc = 0x1BBA20u;
label_1bba20:
    // 0x1bba20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BBA20u;
    {
        const bool branch_taken_0x1bba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA20u;
        // 0x1bba24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba20) {
            ctx->pc = 0x1BBA4Cu;
            goto label_1bba4c;
        }
    }
    ctx->pc = 0x1BBA28u;
label_1bba28:
    // 0x1bba28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bba28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1bba2c:
    // 0x1bba2c: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1bba2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1bba30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBA30u;
    {
        const bool branch_taken_0x1bba30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA30u;
        // 0x1bba34: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba30) {
            ctx->pc = 0x1BBA4Cu;
            goto label_1bba4c;
        }
    }
    ctx->pc = 0x1BBA38u;
    // 0x1bba38: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1bba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1bba3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bba40: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BBA40u;
    {
        const bool branch_taken_0x1bba40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba40) {
            ctx->pc = 0x1BBA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBA40u;
            // 0x1bba44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBA2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bba2c;
        }
    }
    ctx->pc = 0x1BBA48u;
    // 0x1bba48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bba48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bba4c:
    // 0x1bba4c: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x1bba4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1bba50: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x1bba50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x1bba54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bba54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bba58: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1bba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1bba5c: 0x3c013fc5  lui         $at, 0x3FC5
    ctx->pc = 0x1bba5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16325 << 16));
    // 0x1bba60: 0x3421abbf  ori         $at, $at, 0xABBF
    ctx->pc = 0x1bba60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43967);
    // 0x1bba64: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bba64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bba68: 0xc07c41e  jal         func_1F1078
    ctx->pc = 0x1BBA68u;
    SET_GPR_U32(ctx, 31, 0x1BBA70u);
    ctx->pc = 0x1BBA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBA68u;
    // 0x1bba6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F1078u, 0x1BBA68u, 0x1BBA70u)) {
        return;
    }
    ctx->pc = 0x1BBA70u;
label_1bba70:
    // 0x1bba70: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1bba70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1bba74: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x1bba74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x1bba78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBA78u;
    {
        const bool branch_taken_0x1bba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA78u;
        // 0x1bba7c: 0xae330350  sw          $s3, 0x350($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 848), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba78) {
            ctx->pc = 0x1BBA90u;
            goto label_1bba90;
        }
    }
    ctx->pc = 0x1BBA80u;
label_1bba80:
    // 0x1bba80: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBA80u;
    {
        const bool branch_taken_0x1bba80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA80u;
        // 0x1bba84: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba80) {
            ctx->pc = 0x1BBA90u;
            goto label_1bba90;
        }
    }
    ctx->pc = 0x1BBA88u;
    // 0x1bba88: 0x481ffd9  bgez        $a0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1BBA88u;
    {
        const bool branch_taken_0x1bba88 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x1bba88) {
            ctx->pc = 0x1BB9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb9f0;
        }
    }
    ctx->pc = 0x1BBA90u;
label_1bba90:
    // 0x1bba90: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1bba90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bba94: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1bba94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bba98:
    // 0x1bba98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bba98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bba9c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1bba9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbaa0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1bbaa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbaa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAA8u;
        // 0x1bbaac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBAB0u;
}
