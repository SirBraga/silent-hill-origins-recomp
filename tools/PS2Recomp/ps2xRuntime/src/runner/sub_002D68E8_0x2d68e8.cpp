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

// Function: sub_002D68E8
// Address: 0x2d68e8 - 0x2d6988
void sub_002D68E8_0x2d68e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D68E8_0x2d68e8");
#endif

    switch (ctx->pc) {
        case 0x2d68e8u: goto label_2d68e8;
        case 0x2d68ecu: goto label_2d68ec;
        case 0x2d68f0u: goto label_2d68f0;
        case 0x2d68f4u: goto label_2d68f4;
        case 0x2d68f8u: goto label_2d68f8;
        case 0x2d68fcu: goto label_2d68fc;
        case 0x2d6900u: goto label_2d6900;
        case 0x2d6904u: goto label_2d6904;
        case 0x2d6908u: goto label_2d6908;
        case 0x2d690cu: goto label_2d690c;
        case 0x2d6910u: goto label_2d6910;
        case 0x2d6914u: goto label_2d6914;
        case 0x2d6918u: goto label_2d6918;
        case 0x2d691cu: goto label_2d691c;
        case 0x2d6920u: goto label_2d6920;
        case 0x2d6924u: goto label_2d6924;
        case 0x2d6928u: goto label_2d6928;
        case 0x2d692cu: goto label_2d692c;
        case 0x2d6930u: goto label_2d6930;
        case 0x2d6934u: goto label_2d6934;
        case 0x2d6938u: goto label_2d6938;
        case 0x2d693cu: goto label_2d693c;
        case 0x2d6940u: goto label_2d6940;
        case 0x2d6944u: goto label_2d6944;
        case 0x2d6948u: goto label_2d6948;
        case 0x2d694cu: goto label_2d694c;
        case 0x2d6950u: goto label_2d6950;
        case 0x2d6954u: goto label_2d6954;
        case 0x2d6958u: goto label_2d6958;
        case 0x2d695cu: goto label_2d695c;
        case 0x2d6960u: goto label_2d6960;
        case 0x2d6964u: goto label_2d6964;
        case 0x2d6968u: goto label_2d6968;
        case 0x2d696cu: goto label_2d696c;
        case 0x2d6970u: goto label_2d6970;
        case 0x2d6974u: goto label_2d6974;
        case 0x2d6978u: goto label_2d6978;
        case 0x2d697cu: goto label_2d697c;
        case 0x2d6980u: goto label_2d6980;
        case 0x2d6984u: goto label_2d6984;
        default: break;
    }

    ctx->pc = 0x2d68e8u;

label_2d68e8:
    // 0x2d68e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d68e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d68ec:
    // 0x2d68ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d68ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d68f0:
    // 0x2d68f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d68f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d68f4:
    // 0x2d68f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d68f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d68f8:
    // 0x2d68f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d68f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2d68fc:
    // 0x2d68fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d68fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d6900:
    // 0x2d6900: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2d6900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_2d6904:
    // 0x2d6904: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d6904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d6908:
    // 0x2d6908: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2d690c:
    if (ctx->pc == 0x2D690Cu) {
        ctx->pc = 0x2D690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6908u;
        // 0x2d690c: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6910u;
        goto label_2d6910;
    }
    ctx->pc = 0x2D6908u;
    {
        const bool branch_taken_0x2d6908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6908u;
        // 0x2d690c: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6908) {
            ctx->pc = 0x2D6960u;
            goto label_2d6960;
        }
    }
    ctx->pc = 0x2D6910u;
label_2d6910:
    // 0x2d6910: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d6910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d6914:
    // 0x2d6914: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2d6918:
    if (ctx->pc == 0x2D6918u) {
        ctx->pc = 0x2D6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6914u;
        // 0x2d6918: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D691Cu;
        goto label_2d691c;
    }
    ctx->pc = 0x2D6914u;
    {
        const bool branch_taken_0x2d6914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6914u;
        // 0x2d6918: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6914) {
            ctx->pc = 0x2D6940u;
            goto label_2d6940;
        }
    }
    ctx->pc = 0x2D691Cu;
label_2d691c:
    // 0x2d691c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d691cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6920:
    // 0x2d6920: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6924:
    // 0x2d6924: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d6924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d6928:
    // 0x2d6928: 0xc0aa70e  jal         func_2A9C38
label_2d692c:
    if (ctx->pc == 0x2D692Cu) {
        ctx->pc = 0x2D692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6928u;
        // 0x2d692c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6930u;
        goto label_2d6930;
    }
    ctx->pc = 0x2D6928u;
    SET_GPR_U32(ctx, 31, 0x2D6930u);
    ctx->pc = 0x2D692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6928u;
    // 0x2d692c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9C38u, 0x2D6928u, 0x2D6930u)) {
        return;
    }
    ctx->pc = 0x2D6930u;
label_2d6930:
    // 0x2d6930: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d6930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d6934:
    // 0x2d6934: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d6934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d6938:
    // 0x2d6938: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2d693c:
    if (ctx->pc == 0x2D693Cu) {
        ctx->pc = 0x2D693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6938u;
        // 0x2d693c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6940u;
        goto label_2d6940;
    }
    ctx->pc = 0x2D6938u;
    {
        const bool branch_taken_0x2d6938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6938u;
        // 0x2d693c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6938) {
            ctx->pc = 0x2D6920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6920;
        }
    }
    ctx->pc = 0x2D6940u;
label_2d6940:
    // 0x2d6940: 0xc0ad2d0  jal         func_2B4B40
label_2d6944:
    if (ctx->pc == 0x2D6944u) {
        ctx->pc = 0x2D6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6940u;
        // 0x2d6944: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6948u;
        goto label_2d6948;
    }
    ctx->pc = 0x2D6940u;
    SET_GPR_U32(ctx, 31, 0x2D6948u);
    ctx->pc = 0x2D6944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6940u;
    // 0x2d6944: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2D6940u, 0x2D6948u)) {
        return;
    }
    ctx->pc = 0x2D6948u;
label_2d6948:
    // 0x2d6948: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2d6948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_2d694c:
    // 0x2d694c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d694cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2d6950:
    // 0x2d6950: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x2d6950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2d6954:
    // 0x2d6954: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x2d6954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_2d6958:
    // 0x2d6958: 0x60f809  jalr        $v1
label_2d695c:
    if (ctx->pc == 0x2D695Cu) {
        ctx->pc = 0x2D695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6958u;
        // 0x2d695c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6960u;
        goto label_2d6960;
    }
    ctx->pc = 0x2D6958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D6960u);
        ctx->pc = 0x2D695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6958u;
        // 0x2d695c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6958u, 0x2D6960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6960u;
label_2d6960:
    // 0x2d6960: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d6960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d6964:
    // 0x2d6964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6968:
    // 0x2d6968: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d6968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d696c:
    // 0x2d696c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d696cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6970:
    // 0x2d6970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6974:
    // 0x2d6974: 0x3e00008  jr          $ra
label_2d6978:
    if (ctx->pc == 0x2D6978u) {
        ctx->pc = 0x2D6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6974u;
        // 0x2d6978: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D697Cu;
        goto label_2d697c;
    }
    ctx->pc = 0x2D6974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6974u;
        // 0x2d6978: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D697Cu;
label_2d697c:
    // 0x2d697c: 0x0  nop
    ctx->pc = 0x2d697cu;
    // NOP
label_2d6980:
    // 0x2d6980: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d6980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d6984:
    // 0x2d6984: 0x0  nop
    ctx->pc = 0x2d6984u;
    // NOP
    ctx->pc = 0x2d6988u;
}
