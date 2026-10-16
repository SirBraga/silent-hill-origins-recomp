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

// Function: sub_00322160
// Address: 0x322160 - 0x322228
void sub_00322160_0x322160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322160_0x322160");
#endif

    switch (ctx->pc) {
        case 0x3221b0u: goto label_3221b0;
        case 0x3221d0u: goto label_3221d0;
        case 0x3221e4u: goto label_3221e4;
        case 0x3221f8u: goto label_3221f8;
        case 0x322208u: goto label_322208;
        case 0x322210u: goto label_322210;
        default: break;
    }

    ctx->pc = 0x322160u;

    // 0x322160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x322160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x322164: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x322164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x322168: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x322168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32216c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32216cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322170: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x322170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x322174: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x322174u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x322178: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x322178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x32217c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x322180: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x322180u;
    {
        const bool branch_taken_0x322180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322180) {
            ctx->pc = 0x322184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322180u;
            // 0x322184: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322194u;
            goto label_322194;
        }
    }
    ctx->pc = 0x322188u;
    // 0x322188: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x322188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32218c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x32218Cu;
    {
        const bool branch_taken_0x32218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32218Cu;
        // 0x322190: 0x34428008  ori         $v0, $v0, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32218c) {
            ctx->pc = 0x322214u;
            goto label_322214;
        }
    }
    ctx->pc = 0x322194u;
label_322194:
    // 0x322194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322198: 0x24422500  addiu       $v0, $v0, 0x2500
    ctx->pc = 0x322198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9472));
    // 0x32219c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x32219cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3221a0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3221a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3221a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3221a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3221a8: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x3221A8u;
    SET_GPR_U32(ctx, 31, 0x3221B0u);
    ctx->pc = 0x3221ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3221A8u;
    // 0x3221ac: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x3221A8u, 0x3221B0u)) {
        return;
    }
    ctx->pc = 0x3221B0u;
label_3221b0:
    // 0x3221b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3221b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3221b4: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3221B4u;
    {
        const bool branch_taken_0x3221b4 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3221B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221B4u;
        // 0x3221b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221b4) {
            ctx->pc = 0x3221C8u;
            goto label_3221c8;
        }
    }
    ctx->pc = 0x3221BCu;
    // 0x3221bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3221bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3221c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3221C0u;
    {
        const bool branch_taken_0x3221c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3221C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221C0u;
        // 0x3221c4: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221c0) {
            ctx->pc = 0x322214u;
            goto label_322214;
        }
    }
    ctx->pc = 0x3221C8u;
label_3221c8:
    // 0x3221c8: 0xc0ca014  jal         func_328050
    ctx->pc = 0x3221C8u;
    SET_GPR_U32(ctx, 31, 0x3221D0u);
    ctx->pc = 0x3221CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3221C8u;
    // 0x3221cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328050u, 0x3221C8u, 0x3221D0u)) {
        return;
    }
    ctx->pc = 0x3221D0u;
label_3221d0:
    // 0x3221d0: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x3221d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x3221d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3221d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3221d8: 0x24a523a0  addiu       $a1, $a1, 0x23A0
    ctx->pc = 0x3221d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9120));
    // 0x3221dc: 0xc0ca060  jal         func_328180
    ctx->pc = 0x3221DCu;
    SET_GPR_U32(ctx, 31, 0x3221E4u);
    ctx->pc = 0x3221E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3221DCu;
    // 0x3221e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328180u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328180u, 0x3221DCu, 0x3221E4u)) {
        return;
    }
    ctx->pc = 0x3221E4u;
label_3221e4:
    // 0x3221e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3221e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3221e8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3221E8u;
    {
        const bool branch_taken_0x3221e8 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x3221e8) {
            ctx->pc = 0x322200u;
            goto label_322200;
        }
    }
    ctx->pc = 0x3221F0u;
    // 0x3221f0: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x3221F0u;
    SET_GPR_U32(ctx, 31, 0x3221F8u);
    ctx->pc = 0x3221F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3221F0u;
    // 0x3221f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x3221F0u, 0x3221F8u)) {
        return;
    }
    ctx->pc = 0x3221F8u;
label_3221f8:
    // 0x3221f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3221F8u;
    {
        const bool branch_taken_0x3221f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3221FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221F8u;
        // 0x3221fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221f8) {
            ctx->pc = 0x322214u;
            goto label_322214;
        }
    }
    ctx->pc = 0x322200u;
label_322200:
    // 0x322200: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x322200u;
    SET_GPR_U32(ctx, 31, 0x322208u);
    ctx->pc = 0x322204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322200u;
    // 0x322204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x322200u, 0x322208u)) {
        return;
    }
    ctx->pc = 0x322208u;
label_322208:
    // 0x322208: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x322208u;
    SET_GPR_U32(ctx, 31, 0x322210u);
    ctx->pc = 0x32220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322208u;
    // 0x32220c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x322208u, 0x322210u)) {
        return;
    }
    ctx->pc = 0x322210u;
label_322210:
    // 0x322210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x322210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322214:
    // 0x322214: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x322214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322218: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x322218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32221c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x32221cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322220: 0x3e00008  jr          $ra
    ctx->pc = 0x322220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322220u;
        // 0x322224: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322228u;
}
