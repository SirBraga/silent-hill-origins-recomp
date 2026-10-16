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

// Function: sub_001FC3C8
// Address: 0x1fc3c8 - 0x1fc470
void sub_001FC3C8_0x1fc3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC3C8_0x1fc3c8");
#endif

    switch (ctx->pc) {
        case 0x1fc3c8u: goto label_1fc3c8;
        case 0x1fc3ccu: goto label_1fc3cc;
        case 0x1fc3d0u: goto label_1fc3d0;
        case 0x1fc3d4u: goto label_1fc3d4;
        case 0x1fc3d8u: goto label_1fc3d8;
        case 0x1fc3dcu: goto label_1fc3dc;
        case 0x1fc3e0u: goto label_1fc3e0;
        case 0x1fc3e4u: goto label_1fc3e4;
        case 0x1fc3e8u: goto label_1fc3e8;
        case 0x1fc3ecu: goto label_1fc3ec;
        case 0x1fc3f0u: goto label_1fc3f0;
        case 0x1fc3f4u: goto label_1fc3f4;
        case 0x1fc3f8u: goto label_1fc3f8;
        case 0x1fc3fcu: goto label_1fc3fc;
        case 0x1fc400u: goto label_1fc400;
        case 0x1fc404u: goto label_1fc404;
        case 0x1fc408u: goto label_1fc408;
        case 0x1fc40cu: goto label_1fc40c;
        case 0x1fc410u: goto label_1fc410;
        case 0x1fc414u: goto label_1fc414;
        case 0x1fc418u: goto label_1fc418;
        case 0x1fc41cu: goto label_1fc41c;
        case 0x1fc420u: goto label_1fc420;
        case 0x1fc424u: goto label_1fc424;
        case 0x1fc428u: goto label_1fc428;
        case 0x1fc42cu: goto label_1fc42c;
        case 0x1fc430u: goto label_1fc430;
        case 0x1fc434u: goto label_1fc434;
        case 0x1fc438u: goto label_1fc438;
        case 0x1fc43cu: goto label_1fc43c;
        case 0x1fc440u: goto label_1fc440;
        case 0x1fc444u: goto label_1fc444;
        case 0x1fc448u: goto label_1fc448;
        case 0x1fc44cu: goto label_1fc44c;
        case 0x1fc450u: goto label_1fc450;
        case 0x1fc454u: goto label_1fc454;
        case 0x1fc458u: goto label_1fc458;
        case 0x1fc45cu: goto label_1fc45c;
        case 0x1fc460u: goto label_1fc460;
        case 0x1fc464u: goto label_1fc464;
        case 0x1fc468u: goto label_1fc468;
        case 0x1fc46cu: goto label_1fc46c;
        default: break;
    }

    ctx->pc = 0x1fc3c8u;

label_1fc3c8:
    // 0x1fc3c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fc3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fc3cc:
    // 0x1fc3cc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fc3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1fc3d0:
    // 0x1fc3d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fc3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fc3d4:
    // 0x1fc3d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fc3d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc3d8:
    // 0x1fc3d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fc3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fc3dc:
    // 0x1fc3dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fc3e0:
    // 0x1fc3e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fc3e4:
    // 0x1fc3e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1fc3e8:
    if (ctx->pc == 0x1FC3E8u) {
        ctx->pc = 0x1FC3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3E4u;
        // 0x1fc3e8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC3ECu;
        goto label_1fc3ec;
    }
    ctx->pc = 0x1FC3E4u;
    {
        const bool branch_taken_0x1fc3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3E4u;
        // 0x1fc3e8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc3e4) {
            ctx->pc = 0x1FC418u;
            goto label_1fc418;
        }
    }
    ctx->pc = 0x1FC3ECu;
label_1fc3ec:
    // 0x1fc3ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1fc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1fc3f0:
    // 0x1fc3f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1fc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fc3f4:
    // 0x1fc3f4: 0x0  nop
    ctx->pc = 0x1fc3f4u;
    // NOP
label_1fc3f8:
    // 0x1fc3f8: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_1fc3fc:
    if (ctx->pc == 0x1FC3FCu) {
        ctx->pc = 0x1FC3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC3F8u;
        // 0x1fc3fc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC400u;
        goto label_1fc400;
    }
    ctx->pc = 0x1FC3F8u;
    {
        const bool branch_taken_0x1fc3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fc3f8) {
            ctx->pc = 0x1FC3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC3F8u;
            // 0x1fc3fc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC404u;
            goto label_1fc404;
        }
    }
    ctx->pc = 0x1FC400u;
label_1fc400:
    // 0x1fc400: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1fc400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1fc404:
    // 0x1fc404: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fc404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1fc408:
    // 0x1fc408: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fc40c:
    // 0x1fc40c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_1fc410:
    if (ctx->pc == 0x1FC410u) {
        ctx->pc = 0x1FC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC40Cu;
        // 0x1fc410: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC414u;
        goto label_1fc414;
    }
    ctx->pc = 0x1FC40Cu;
    {
        const bool branch_taken_0x1fc40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc40c) {
            ctx->pc = 0x1FC410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC40Cu;
            // 0x1fc410: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc3f8;
        }
    }
    ctx->pc = 0x1FC414u;
label_1fc414:
    // 0x1fc414: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fc414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1fc418:
    // 0x1fc418: 0x928023  subu        $s0, $a0, $s2
    ctx->pc = 0x1fc418u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1fc41c:
    // 0x1fc41c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x1fc41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_1fc420:
    // 0x1fc420: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1fc420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1fc424:
    // 0x1fc424: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x1fc424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_1fc428:
    // 0x1fc428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc42c:
    // 0x1fc42c: 0x40f809  jalr        $v0
label_1fc430:
    if (ctx->pc == 0x1FC430u) {
        ctx->pc = 0x1FC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC42Cu;
        // 0x1fc430: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC434u;
        goto label_1fc434;
    }
    ctx->pc = 0x1FC42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC434u);
        ctx->pc = 0x1FC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC42Cu;
        // 0x1fc430: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC42Cu, 0x1FC434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC434u;
label_1fc434:
    // 0x1fc434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fc434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc438:
    // 0x1fc438: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fc43c:
    // 0x1fc43c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fc43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fc440:
    // 0x1fc440: 0xc075fdc  jal         func_1D7F70
label_1fc444:
    if (ctx->pc == 0x1FC444u) {
        ctx->pc = 0x1FC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC440u;
        // 0x1fc444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC448u;
        goto label_1fc448;
    }
    ctx->pc = 0x1FC440u;
    SET_GPR_U32(ctx, 31, 0x1FC448u);
    ctx->pc = 0x1FC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC440u;
    // 0x1fc444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1FC440u, 0x1FC448u)) {
        return;
    }
    ctx->pc = 0x1FC448u;
label_1fc448:
    // 0x1fc448: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fc448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc44c:
    // 0x1fc44c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fc44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc450:
    // 0x1fc450: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fc450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc454:
    // 0x1fc454: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fc454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc458:
    // 0x1fc458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc45c:
    // 0x1fc45c: 0x3e00008  jr          $ra
label_1fc460:
    if (ctx->pc == 0x1FC460u) {
        ctx->pc = 0x1FC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC45Cu;
        // 0x1fc460: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC464u;
        goto label_1fc464;
    }
    ctx->pc = 0x1FC45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC45Cu;
        // 0x1fc460: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC464u;
label_1fc464:
    // 0x1fc464: 0x0  nop
    ctx->pc = 0x1fc464u;
    // NOP
label_1fc468:
    // 0x1fc468: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1fc468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1fc46c:
    // 0x1fc46c: 0x0  nop
    ctx->pc = 0x1fc46cu;
    // NOP
    ctx->pc = 0x1fc470u;
}
