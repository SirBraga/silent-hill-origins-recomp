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

// Function: sub_001980B0
// Address: 0x1980b0 - 0x198198
void sub_001980B0_0x1980b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001980B0_0x1980b0");
#endif

    switch (ctx->pc) {
        case 0x198114u: goto label_198114;
        case 0x198150u: goto label_198150;
        case 0x198154u: goto label_198154;
        case 0x198184u: goto label_198184;
        default: break;
    }

    ctx->pc = 0x1980b0u;

    // 0x1980b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1980b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1980b4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1980b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1980b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1980b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1980bc: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1980bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980c0: 0x248411d1  addiu       $a0, $a0, 0x11D1
    ctx->pc = 0x1980c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4561));
    // 0x1980c4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1980c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1980c8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1980c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1980cc: 0x3842002f  xori        $v0, $v0, 0x2F
    ctx->pc = 0x1980ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)47);
    // 0x1980d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1980d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1980d4: 0x3863002f  xori        $v1, $v1, 0x2F
    ctx->pc = 0x1980d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)47);
    // 0x1980d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1980d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1980dc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1980dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1980e0: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x1980e0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1980e4: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x1980e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1980e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1980e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980ec: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1980ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1980f0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1980f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1980f4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1980f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1980f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1980F8u;
    {
        const bool branch_taken_0x1980f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1980FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980F8u;
        // 0x1980fc: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980f8) {
            ctx->pc = 0x198110u;
            goto label_198110;
        }
    }
    ctx->pc = 0x198100u;
    // 0x198100: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x198100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x198104: 0x5502000e  bnel        $t0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x198104u;
    {
        const bool branch_taken_0x198104 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x198104) {
            ctx->pc = 0x198108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198104u;
            // 0x198108: 0x81240000  lb          $a0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198140u;
            goto label_198140;
        }
    }
    ctx->pc = 0x19810Cu;
    // 0x19810c: 0x0  nop
    ctx->pc = 0x19810cu;
    // NOP
label_198110:
    // 0x198110: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x198110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_198114:
    // 0x198114: 0x254311d1  addiu       $v1, $t2, 0x11D1
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4561));
    // 0x198118: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x198118u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19811c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19811cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x198120: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x198120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198124: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x198124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x198128: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198128u;
    {
        const bool branch_taken_0x198128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198128) {
            ctx->pc = 0x19812Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198128u;
            // 0x19812c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198114u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198114;
        }
    }
    ctx->pc = 0x198130u;
    // 0x198130: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x198130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x198134: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x198134u;
    {
        const bool branch_taken_0x198134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x198134) {
            ctx->pc = 0x198138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198134u;
            // 0x198138: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198114u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198114;
        }
    }
    ctx->pc = 0x19813Cu;
    // 0x19813c: 0x81240000  lb          $a0, 0x0($t1)
    ctx->pc = 0x19813cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_198140:
    // 0x198140: 0x254311d1  addiu       $v1, $t2, 0x11D1
    ctx->pc = 0x198140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4561));
    // 0x198144: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x198144u;
    {
        const bool branch_taken_0x198144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198144u;
        // 0x198148: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198144) {
            ctx->pc = 0x198158u;
            goto label_198158;
        }
    }
    ctx->pc = 0x19814Cu;
    // 0x19814c: 0x0  nop
    ctx->pc = 0x19814cu;
    // NOP
label_198150:
    // 0x198150: 0x254311d1  addiu       $v1, $t2, 0x11D1
    ctx->pc = 0x198150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4561));
label_198154:
    // 0x198154: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x198154u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_198158:
    // 0x198158: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x198158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19815c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x19815cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198160: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x198160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x198164: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198164u;
    {
        const bool branch_taken_0x198164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198164u;
        // 0x198168: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198164) {
            ctx->pc = 0x198150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198150;
        }
    }
    ctx->pc = 0x19816Cu;
    // 0x19816c: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x19816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x198170: 0x1082fff8  beq         $a0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x198170u;
    {
        const bool branch_taken_0x198170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x198174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198170u;
        // 0x198174: 0x254311d1  addiu       $v1, $t2, 0x11D1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4561));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198170) {
            ctx->pc = 0x198154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198154;
        }
    }
    ctx->pc = 0x198178u;
    // 0x198178: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x198178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19817c: 0xc0c4b78  jal         func_312DE0
    ctx->pc = 0x19817Cu;
    SET_GPR_U32(ctx, 31, 0x198184u);
    ctx->pc = 0x198180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19817Cu;
    // 0x198180: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x19817Cu, 0x198184u)) {
        return;
    }
    ctx->pc = 0x198184u;
label_198184:
    // 0x198184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198188: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x198188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19818c: 0x3e00008  jr          $ra
    ctx->pc = 0x19818Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19818Cu;
        // 0x198190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19818Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198194u;
    // 0x198194: 0x0  nop
    ctx->pc = 0x198194u;
    // NOP
    ctx->pc = 0x198198u;
}
