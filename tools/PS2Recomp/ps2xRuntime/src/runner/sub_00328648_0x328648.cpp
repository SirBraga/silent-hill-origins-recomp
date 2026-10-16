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

// Function: sub_00328648
// Address: 0x328648 - 0x328710
void sub_00328648_0x328648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328648_0x328648");
#endif

    switch (ctx->pc) {
        case 0x328678u: goto label_328678;
        case 0x328690u: goto label_328690;
        case 0x328698u: goto label_328698;
        case 0x3286a0u: goto label_3286a0;
        case 0x3286acu: goto label_3286ac;
        case 0x3286b8u: goto label_3286b8;
        case 0x3286c0u: goto label_3286c0;
        case 0x3286c8u: goto label_3286c8;
        case 0x3286d8u: goto label_3286d8;
        case 0x3286ecu: goto label_3286ec;
        default: break;
    }

    ctx->pc = 0x328648u;

    // 0x328648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x328648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32864c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x32864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x328650: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x328650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x328654: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x328654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x328658: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x328658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32865c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32865cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328660: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x328660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x328664: 0x24508938  addiu       $s0, $v0, -0x76C8
    ctx->pc = 0x328664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936888));
    // 0x328668: 0x8c448938  lw          $a0, -0x76C8($v0)
    ctx->pc = 0x328668u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x688938u));
    // 0x32866c: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x32866cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x328670: 0xc0ca18e  jal         func_328638
    ctx->pc = 0x328670u;
    SET_GPR_U32(ctx, 31, 0x328678u);
    ctx->pc = 0x328674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328670u;
    // 0x328674: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328638u, 0x328670u, 0x328678u)) {
        return;
    }
    ctx->pc = 0x328678u;
label_328678:
    // 0x328678: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x328678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x32867c: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x32867cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x328680: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x328680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x328684: 0x24a585b8  addiu       $a1, $a1, -0x7A48
    ctx->pc = 0x328684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935992));
    // 0x328688: 0xc0ca178  jal         func_3285E0
    ctx->pc = 0x328688u;
    SET_GPR_U32(ctx, 31, 0x328690u);
    ctx->pc = 0x32868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328688u;
    // 0x32868c: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3285E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3285E0u, 0x328688u, 0x328690u)) {
        return;
    }
    ctx->pc = 0x328690u;
label_328690:
    // 0x328690: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x328690u;
    SET_GPR_U32(ctx, 31, 0x328698u);
    ctx->pc = 0x328694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328690u;
    // 0x328694: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x328690u, 0x328698u)) {
        return;
    }
    ctx->pc = 0x328698u;
label_328698:
    // 0x328698: 0xc0c8568  jal         func_3215A0
    ctx->pc = 0x328698u;
    SET_GPR_U32(ctx, 31, 0x3286A0u);
    ctx->pc = 0x32869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328698u;
    // 0x32869c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x328698u, 0x3286A0u)) {
        return;
    }
    ctx->pc = 0x3286A0u;
label_3286a0:
    // 0x3286a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3286a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3286a4: 0xc0ca18e  jal         func_328638
    ctx->pc = 0x3286A4u;
    SET_GPR_U32(ctx, 31, 0x3286ACu);
    ctx->pc = 0x3286A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286A4u;
    // 0x3286a8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328638u, 0x3286A4u, 0x3286ACu)) {
        return;
    }
    ctx->pc = 0x3286ACu;
label_3286ac:
    // 0x3286ac: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3286acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3286b0: 0xc0ca18e  jal         func_328638
    ctx->pc = 0x3286B0u;
    SET_GPR_U32(ctx, 31, 0x3286B8u);
    ctx->pc = 0x3286B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286B0u;
    // 0x3286b4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328638u, 0x3286B0u, 0x3286B8u)) {
        return;
    }
    ctx->pc = 0x3286B8u;
label_3286b8:
    // 0x3286b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3286b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3286bc: 0x0  nop
    ctx->pc = 0x3286bcu;
    // NOP
label_3286c0:
    // 0x3286c0: 0xc0ca18a  jal         func_328628
    ctx->pc = 0x3286C0u;
    SET_GPR_U32(ctx, 31, 0x3286C8u);
    ctx->pc = 0x3286C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286C0u;
    // 0x3286c4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328628u, 0x3286C0u, 0x3286C8u)) {
        return;
    }
    ctx->pc = 0x3286C8u;
label_3286c8:
    // 0x3286c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3286c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3286cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3286ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3286d0: 0xc0ca18e  jal         func_328638
    ctx->pc = 0x3286D0u;
    SET_GPR_U32(ctx, 31, 0x3286D8u);
    ctx->pc = 0x3286D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286D0u;
    // 0x3286d4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328638u, 0x3286D0u, 0x3286D8u)) {
        return;
    }
    ctx->pc = 0x3286D8u;
label_3286d8:
    // 0x3286d8: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x3286d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3286dc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3286DCu;
    {
        const bool branch_taken_0x3286dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3286dc) {
            ctx->pc = 0x3286E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3286DCu;
            // 0x3286e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3286C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3286c0;
        }
    }
    ctx->pc = 0x3286E4u;
    // 0x3286e4: 0xc0ca18a  jal         func_328628
    ctx->pc = 0x3286E4u;
    SET_GPR_U32(ctx, 31, 0x3286ECu);
    ctx->pc = 0x3286E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286E4u;
    // 0x3286e8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328628u, 0x3286E4u, 0x3286ECu)) {
        return;
    }
    ctx->pc = 0x3286ECu;
label_3286ec:
    // 0x3286ec: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3286ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3286f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3286f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3286f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3286f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3286f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3286f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3286fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3286fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328700: 0xac628930  sw          $v0, -0x76D0($v1)
    ctx->pc = 0x328700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x688930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x688930u, _value); } while (0);
    // 0x328704: 0x3e00008  jr          $ra
    ctx->pc = 0x328704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328704u;
        // 0x328708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32870Cu;
    // 0x32870c: 0x0  nop
    ctx->pc = 0x32870cu;
    // NOP
    ctx->pc = 0x328710u;
}
