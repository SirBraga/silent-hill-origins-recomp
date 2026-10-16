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

// Function: sub_001F6858
// Address: 0x1f6858 - 0x1f6960
void sub_001F6858_0x1f6858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6858_0x1f6858");
#endif

    switch (ctx->pc) {
        case 0x1f6858u: goto label_1f6858;
        case 0x1f685cu: goto label_1f685c;
        case 0x1f6860u: goto label_1f6860;
        case 0x1f6864u: goto label_1f6864;
        case 0x1f6868u: goto label_1f6868;
        case 0x1f686cu: goto label_1f686c;
        case 0x1f6870u: goto label_1f6870;
        case 0x1f6874u: goto label_1f6874;
        case 0x1f6878u: goto label_1f6878;
        case 0x1f687cu: goto label_1f687c;
        case 0x1f6880u: goto label_1f6880;
        case 0x1f6884u: goto label_1f6884;
        case 0x1f6888u: goto label_1f6888;
        case 0x1f688cu: goto label_1f688c;
        case 0x1f6890u: goto label_1f6890;
        case 0x1f6894u: goto label_1f6894;
        case 0x1f6898u: goto label_1f6898;
        case 0x1f689cu: goto label_1f689c;
        case 0x1f68a0u: goto label_1f68a0;
        case 0x1f68a4u: goto label_1f68a4;
        case 0x1f68a8u: goto label_1f68a8;
        case 0x1f68acu: goto label_1f68ac;
        case 0x1f68b0u: goto label_1f68b0;
        case 0x1f68b4u: goto label_1f68b4;
        case 0x1f68b8u: goto label_1f68b8;
        case 0x1f68bcu: goto label_1f68bc;
        case 0x1f68c0u: goto label_1f68c0;
        case 0x1f68c4u: goto label_1f68c4;
        case 0x1f68c8u: goto label_1f68c8;
        case 0x1f68ccu: goto label_1f68cc;
        case 0x1f68d0u: goto label_1f68d0;
        case 0x1f68d4u: goto label_1f68d4;
        case 0x1f68d8u: goto label_1f68d8;
        case 0x1f68dcu: goto label_1f68dc;
        case 0x1f68e0u: goto label_1f68e0;
        case 0x1f68e4u: goto label_1f68e4;
        case 0x1f68e8u: goto label_1f68e8;
        case 0x1f68ecu: goto label_1f68ec;
        case 0x1f68f0u: goto label_1f68f0;
        case 0x1f68f4u: goto label_1f68f4;
        case 0x1f68f8u: goto label_1f68f8;
        case 0x1f68fcu: goto label_1f68fc;
        case 0x1f6900u: goto label_1f6900;
        case 0x1f6904u: goto label_1f6904;
        case 0x1f6908u: goto label_1f6908;
        case 0x1f690cu: goto label_1f690c;
        case 0x1f6910u: goto label_1f6910;
        case 0x1f6914u: goto label_1f6914;
        case 0x1f6918u: goto label_1f6918;
        case 0x1f691cu: goto label_1f691c;
        case 0x1f6920u: goto label_1f6920;
        case 0x1f6924u: goto label_1f6924;
        case 0x1f6928u: goto label_1f6928;
        case 0x1f692cu: goto label_1f692c;
        case 0x1f6930u: goto label_1f6930;
        case 0x1f6934u: goto label_1f6934;
        case 0x1f6938u: goto label_1f6938;
        case 0x1f693cu: goto label_1f693c;
        case 0x1f6940u: goto label_1f6940;
        case 0x1f6944u: goto label_1f6944;
        case 0x1f6948u: goto label_1f6948;
        case 0x1f694cu: goto label_1f694c;
        case 0x1f6950u: goto label_1f6950;
        case 0x1f6954u: goto label_1f6954;
        case 0x1f6958u: goto label_1f6958;
        case 0x1f695cu: goto label_1f695c;
        default: break;
    }

    ctx->pc = 0x1f6858u;

label_1f6858:
    // 0x1f6858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f685c:
    // 0x1f685c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x1f685cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_1f6860:
    // 0x1f6860: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f6860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f6864:
    // 0x1f6864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f6868:
    // 0x1f6868: 0x8c82eb20  lw          $v0, -0x14E0($a0)
    ctx->pc = 0x1f6868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961952)));
label_1f686c:
    // 0x1f686c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f686cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6870:
    // 0x1f6870: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1f6874:
    if (ctx->pc == 0x1F6874u) {
        ctx->pc = 0x1F6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6870u;
        // 0x1f6874: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6878u;
        goto label_1f6878;
    }
    ctx->pc = 0x1F6870u;
    {
        const bool branch_taken_0x1f6870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6870u;
        // 0x1f6874: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6870) {
            ctx->pc = 0x1F689Cu;
            goto label_1f689c;
        }
    }
    ctx->pc = 0x1F6878u;
label_1f6878:
    // 0x1f6878: 0x8e02eb20  lw          $v0, -0x14E0($s0)
    ctx->pc = 0x1f6878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961952)));
label_1f687c:
    // 0x1f687c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1f6880:
    // 0x1f6880: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x1f6880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_1f6884:
    // 0x1f6884: 0x60f809  jalr        $v1
label_1f6888:
    if (ctx->pc == 0x1F6888u) {
        ctx->pc = 0x1F6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6884u;
        // 0x1f6888: 0xae02eb20  sw          $v0, -0x14E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294961952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F688Cu;
        goto label_1f688c;
    }
    ctx->pc = 0x1F6884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F688Cu);
        ctx->pc = 0x1F6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6884u;
        // 0x1f6888: 0xae02eb20  sw          $v0, -0x14E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294961952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6884u, 0x1F688Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F688Cu;
label_1f688c:
    // 0x1f688c: 0x8e02eb20  lw          $v0, -0x14E0($s0)
    ctx->pc = 0x1f688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961952)));
label_1f6890:
    // 0x1f6890: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f6890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6894:
    // 0x1f6894: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1f6898:
    if (ctx->pc == 0x1F6898u) {
        ctx->pc = 0x1F6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6894u;
        // 0x1f6898: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F689Cu;
        goto label_1f689c;
    }
    ctx->pc = 0x1F6894u;
    {
        const bool branch_taken_0x1f6894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6894u;
        // 0x1f6898: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6894) {
            ctx->pc = 0x1F6880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6880;
        }
    }
    ctx->pc = 0x1F689Cu;
label_1f689c:
    // 0x1f689c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f689cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f68a0:
    // 0x1f68a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f68a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f68a4:
    // 0x1f68a4: 0x3e00008  jr          $ra
label_1f68a8:
    if (ctx->pc == 0x1F68A8u) {
        ctx->pc = 0x1F68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68A4u;
        // 0x1f68a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68ACu;
        goto label_1f68ac;
    }
    ctx->pc = 0x1F68A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68A4u;
        // 0x1f68a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F68A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F68ACu;
label_1f68ac:
    // 0x1f68ac: 0x0  nop
    ctx->pc = 0x1f68acu;
    // NOP
label_1f68b0:
    // 0x1f68b0: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x1f68b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
label_1f68b4:
    // 0x1f68b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f68b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f68b8:
    // 0x1f68b8: 0x8ce58c04  lw          $a1, -0x73FC($a3)
    ctx->pc = 0x1f68b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294937604)));
label_1f68bc:
    // 0x1f68bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f68c0:
    // 0x1f68c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f68c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f68c4:
    // 0x1f68c4: 0x24e38c04  addiu       $v1, $a3, -0x73FC
    ctx->pc = 0x1f68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937604));
label_1f68c8:
    // 0x1f68c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f68c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1f68cc:
    // 0x1f68cc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_1f68d0:
    if (ctx->pc == 0x1F68D0u) {
        ctx->pc = 0x1F68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68CCu;
        // 0x1f68d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68D4u;
        goto label_1f68d4;
    }
    ctx->pc = 0x1F68CCu;
    {
        const bool branch_taken_0x1f68cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68CCu;
        // 0x1f68d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68cc) {
            ctx->pc = 0x1F6914u;
            goto label_1f6914;
        }
    }
    ctx->pc = 0x1F68D4u;
label_1f68d4:
    // 0x1f68d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f68d8:
    // 0x1f68d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1f68dc:
    if (ctx->pc == 0x1F68DCu) {
        ctx->pc = 0x1F68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68D8u;
        // 0x1f68dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F68E0u;
        goto label_1f68e0;
    }
    ctx->pc = 0x1F68D8u;
    {
        const bool branch_taken_0x1f68d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68D8u;
        // 0x1f68dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68d8) {
            ctx->pc = 0x1F6914u;
            goto label_1f6914;
        }
    }
    ctx->pc = 0x1F68E0u;
label_1f68e0:
    // 0x1f68e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f68e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f68e4:
    // 0x1f68e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f68e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f68e8:
    // 0x1f68e8: 0x24e48c04  addiu       $a0, $a3, -0x73FC
    ctx->pc = 0x1f68e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937604));
label_1f68ec:
    // 0x1f68ec: 0x0  nop
    ctx->pc = 0x1f68ecu;
    // NOP
label_1f68f0:
    // 0x1f68f0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x1f68f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_1f68f4:
    // 0x1f68f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f68f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f68f8:
    // 0x1f68f8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1f68f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_1f68fc:
    // 0x1f68fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f68fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1f6900:
    // 0x1f6900: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f6900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f6904:
    // 0x1f6904: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f6904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f6908:
    // 0x1f6908: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f6908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f690c:
    // 0x1f690c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1f6910:
    if (ctx->pc == 0x1F6910u) {
        ctx->pc = 0x1F6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F690Cu;
        // 0x1f6910: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6914u;
        goto label_1f6914;
    }
    ctx->pc = 0x1F690Cu;
    {
        const bool branch_taken_0x1f690c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f690c) {
            ctx->pc = 0x1F6910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F690Cu;
            // 0x1f6910: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F68F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f68f0;
        }
    }
    ctx->pc = 0x1F6914u;
label_1f6914:
    // 0x1f6914: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x1f6914u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_1f6918:
    // 0x1f6918: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x1f6918u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_1f691c:
    // 0x1f691c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_1f6920:
    if (ctx->pc == 0x1F6920u) {
        ctx->pc = 0x1F6920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F691Cu;
        // 0x1f6920: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6924u;
        goto label_1f6924;
    }
    ctx->pc = 0x1F691Cu;
    {
        const bool branch_taken_0x1f691c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F691Cu;
        // 0x1f6920: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f691c) {
            ctx->pc = 0x1F694Cu;
            goto label_1f694c;
        }
    }
    ctx->pc = 0x1F6924u;
label_1f6924:
    // 0x1f6924: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f6924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1f6928:
    // 0x1f6928: 0x24428c04  addiu       $v0, $v0, -0x73FC
    ctx->pc = 0x1f6928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937604));
label_1f692c:
    // 0x1f692c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1f692cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f6930:
    // 0x1f6930: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f6930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f6934:
    // 0x1f6934: 0x0  nop
    ctx->pc = 0x1f6934u;
    // NOP
label_1f6938:
    // 0x1f6938: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f6938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1f693c:
    // 0x1f693c: 0x40f809  jalr        $v0
label_1f6940:
    if (ctx->pc == 0x1F6940u) {
        ctx->pc = 0x1F6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F693Cu;
        // 0x1f6940: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6944u;
        goto label_1f6944;
    }
    ctx->pc = 0x1F693Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F6944u);
        ctx->pc = 0x1F6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F693Cu;
        // 0x1f6940: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F693Cu, 0x1F6944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F6944u;
label_1f6944:
    // 0x1f6944: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_1f6948:
    if (ctx->pc == 0x1F6948u) {
        ctx->pc = 0x1F6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6944u;
        // 0x1f6948: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F694Cu;
        goto label_1f694c;
    }
    ctx->pc = 0x1F6944u;
    {
        const bool branch_taken_0x1f6944 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6944) {
            ctx->pc = 0x1F6948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6944u;
            // 0x1f6948: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6938;
        }
    }
    ctx->pc = 0x1F694Cu;
label_1f694c:
    // 0x1f694c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f694cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6950:
    // 0x1f6950: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f6950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6954:
    // 0x1f6954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6958:
    // 0x1f6958: 0x3e00008  jr          $ra
label_1f695c:
    if (ctx->pc == 0x1F695Cu) {
        ctx->pc = 0x1F695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6958u;
        // 0x1f695c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6960u;
        goto label_fallthrough_0x1f6958;
    }
    ctx->pc = 0x1F6958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6958u;
        // 0x1f695c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f6958:
    ctx->pc = 0x1F6960u;
}
