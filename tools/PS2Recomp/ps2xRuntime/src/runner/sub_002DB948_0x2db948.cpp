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

// Function: sub_002DB948
// Address: 0x2db948 - 0x2dbaa0
void sub_002DB948_0x2db948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB948_0x2db948");
#endif

    switch (ctx->pc) {
        case 0x2db974u: goto label_2db974;
        case 0x2db988u: goto label_2db988;
        case 0x2db9b0u: goto label_2db9b0;
        case 0x2db9c8u: goto label_2db9c8;
        case 0x2db9dcu: goto label_2db9dc;
        case 0x2dba28u: goto label_2dba28;
        case 0x2dba38u: goto label_2dba38;
        case 0x2dba48u: goto label_2dba48;
        case 0x2dba58u: goto label_2dba58;
        case 0x2dba6cu: goto label_2dba6c;
        default: break;
    }

    ctx->pc = 0x2db948u;

    // 0x2db948: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2db948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2db94c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2db94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2db950: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2db950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2db954: 0x24847c98  addiu       $a0, $a0, 0x7C98
    ctx->pc = 0x2db954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31896));
    // 0x2db958: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2db958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2db95c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2db95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2db960: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2db960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2db964: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2db964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2db968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db96c: 0xc0b6fe8  jal         func_2DBFA0
    ctx->pc = 0x2DB96Cu;
    SET_GPR_U32(ctx, 31, 0x2DB974u);
    ctx->pc = 0x2DB970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB96Cu;
    // 0x2db970: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBFA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBFA0u, 0x2DB96Cu, 0x2DB974u)) {
        return;
    }
    ctx->pc = 0x2DB974u;
label_2db974:
    // 0x2db974: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2db974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2db978: 0x245240e8  addiu       $s2, $v0, 0x40E8
    ctx->pc = 0x2db978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16616));
    // 0x2db97c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2db97cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db980: 0x26530004  addiu       $s3, $s2, 0x4
    ctx->pc = 0x2db980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2db984: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2db984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2db988:
    // 0x2db988: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2db988u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2db98c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x2db98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2db990: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2db990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2db994: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2db994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2db998: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2db998u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db99c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2db99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db9a0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2db9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2db9a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2db9a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9a8: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2DB9A8u;
    SET_GPR_U32(ctx, 31, 0x2DB9B0u);
    ctx->pc = 0x2DB9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB9A8u;
    // 0x2db9ac: 0x35290803  ori         $t1, $t1, 0x803 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2051);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2DB9A8u, 0x2DB9B0u)) {
        return;
    }
    ctx->pc = 0x2DB9B0u;
label_2db9b0:
    // 0x2db9b0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB9B0u;
    {
        const bool branch_taken_0x2db9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db9b0) {
            ctx->pc = 0x2DB9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB9B0u;
            // 0x2db9b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB9E8u;
            goto label_2db9e8;
        }
    }
    ctx->pc = 0x2DB9B8u;
    // 0x2db9b8: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2DB9B8u;
    {
        const bool branch_taken_0x2db9b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db9b8) {
            ctx->pc = 0x2DB9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB9B8u;
            // 0x2db9bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB9E8u;
            goto label_2db9e8;
        }
    }
    ctx->pc = 0x2DB9C0u;
    // 0x2db9c0: 0x269140e8  addiu       $s1, $s4, 0x40E8
    ctx->pc = 0x2db9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16616));
    // 0x2db9c4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2db9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2db9c8:
    // 0x2db9c8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2db9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2db9cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2db9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db9d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2db9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2db9d4: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DB9D4u;
    SET_GPR_U32(ctx, 31, 0x2DB9DCu);
    ctx->pc = 0x2DB9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB9D4u;
    // 0x2db9d8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DB9D4u, 0x2DB9DCu)) {
        return;
    }
    ctx->pc = 0x2DB9DCu;
label_2db9dc:
    // 0x2db9dc: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB9DCu;
    {
        const bool branch_taken_0x2db9dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9DCu;
        // 0x2db9e0: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9dc) {
            ctx->pc = 0x2DB9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db9c8;
        }
    }
    ctx->pc = 0x2DB9E4u;
    // 0x2db9e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2db9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2db9e8:
    // 0x2db9e8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x2db9e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2db9ec: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2DB9ECu;
    {
        const bool branch_taken_0x2db9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9ECu;
        // 0x2db9f0: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9ec) {
            ctx->pc = 0x2DB988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db988;
        }
    }
    ctx->pc = 0x2DB9F4u;
    // 0x2db9f4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2db9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2db9f8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2db9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db9fc: 0x24527ca8  addiu       $s2, $v0, 0x7CA8
    ctx->pc = 0x2db9fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 31912));
    // 0x2dba00: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2dba00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2dba04: 0xaf808fe0  sw          $zero, -0x7020($gp)
    ctx->pc = 0x2dba04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938592), GPR_U32(ctx, 0));
    // 0x2dba08: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2dba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2dba0c: 0xaf918b68  sw          $s1, -0x7498($gp)
    ctx->pc = 0x2dba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 17));
    // 0x2dba10: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2dba10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2dba14: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2dba14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2dba18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dba18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba1c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2dba1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba20: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2DBA20u;
    SET_GPR_U32(ctx, 31, 0x2DBA28u);
    ctx->pc = 0x2DBA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA20u;
    // 0x2dba24: 0x35290803  ori         $t1, $t1, 0x803 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2051);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2DBA20u, 0x2DBA28u)) {
        return;
    }
    ctx->pc = 0x2DBA28u;
label_2dba28:
    // 0x2dba28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBA28u;
    {
        const bool branch_taken_0x2dba28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dba28) {
            ctx->pc = 0x2DBA48u;
            goto label_2dba48;
        }
    }
    ctx->pc = 0x2DBA30u;
    // 0x2dba30: 0xc0b6f9a  jal         func_2DBE68
    ctx->pc = 0x2DBA30u;
    SET_GPR_U32(ctx, 31, 0x2DBA38u);
    ctx->pc = 0x2DBE68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DBE68u, 0x2DBA30u, 0x2DBA38u)) {
        return;
    }
    ctx->pc = 0x2DBA38u;
label_2dba38:
    // 0x2dba38: 0x10510010  beq         $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DBA38u;
    {
        const bool branch_taken_0x2dba38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2DBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA38u;
        // 0x2dba3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba38) {
            ctx->pc = 0x2DBA7Cu;
            goto label_2dba7c;
        }
    }
    ctx->pc = 0x2DBA40u;
    // 0x2dba40: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DBA40u;
    SET_GPR_U32(ctx, 31, 0x2DBA48u);
    ctx->pc = 0x2DBA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA40u;
    // 0x2dba44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DBA40u, 0x2DBA48u)) {
        return;
    }
    ctx->pc = 0x2DBA48u;
label_2dba48:
    // 0x2dba48: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DBA48u;
    {
        const bool branch_taken_0x2dba48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA48u;
        // 0x2dba4c: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba48) {
            ctx->pc = 0x2DBA74u;
            goto label_2dba74;
        }
    }
    ctx->pc = 0x2DBA50u;
    // 0x2dba50: 0x245140e8  addiu       $s1, $v0, 0x40E8
    ctx->pc = 0x2dba50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16616));
    // 0x2dba54: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2dba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2dba58:
    // 0x2dba58: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2dba58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2dba5c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2dba5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dba60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2dba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2dba64: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DBA64u;
    SET_GPR_U32(ctx, 31, 0x2DBA6Cu);
    ctx->pc = 0x2DBA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBA64u;
    // 0x2dba68: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DBA64u, 0x2DBA6Cu)) {
        return;
    }
    ctx->pc = 0x2DBA6Cu;
label_2dba6c:
    // 0x2dba6c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DBA6Cu;
    {
        const bool branch_taken_0x2dba6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA6Cu;
        // 0x2dba70: 0x2603ffff  addiu       $v1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba6c) {
            ctx->pc = 0x2DBA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dba58;
        }
    }
    ctx->pc = 0x2DBA74u;
label_2dba74:
    // 0x2dba74: 0xaf808b68  sw          $zero, -0x7498($gp)
    ctx->pc = 0x2dba74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 0));
    // 0x2dba78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dba78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dba7c:
    // 0x2dba7c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2dba7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dba80: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2dba80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dba84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dba84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dba88: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2dba88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dba8c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2dba8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dba90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dba94: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA94u;
        // 0x2dba98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBA9Cu;
    // 0x2dba9c: 0x0  nop
    ctx->pc = 0x2dba9cu;
    // NOP
    ctx->pc = 0x2dbaa0u;
}
