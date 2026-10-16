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

// Function: sub_00119B88
// Address: 0x119b88 - 0x119d30
void sub_00119B88_0x119b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119B88_0x119b88");
#endif

    switch (ctx->pc) {
        case 0x119ba8u: goto label_119ba8;
        case 0x119bbcu: goto label_119bbc;
        case 0x119bd0u: goto label_119bd0;
        case 0x119be8u: goto label_119be8;
        case 0x119c0cu: goto label_119c0c;
        case 0x119c28u: goto label_119c28;
        case 0x119cb4u: goto label_119cb4;
        case 0x119d04u: goto label_119d04;
        default: break;
    }

    ctx->pc = 0x119b88u;

    // 0x119b88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x119b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x119b8c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x119b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x119b90: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x119b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x119b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x119b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x119b9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119ba0: 0xc04459c  jal         func_111670
    ctx->pc = 0x119BA0u;
    SET_GPR_U32(ctx, 31, 0x119BA8u);
    ctx->pc = 0x119BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119BA0u;
    // 0x119ba4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111670u, 0x119BA0u, 0x119BA8u)) {
        return;
    }
    ctx->pc = 0x119BA8u;
label_119ba8:
    // 0x119ba8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x119ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x119bac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x119bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119bb0: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x119bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x119bb4: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x119BB4u;
    SET_GPR_U32(ctx, 31, 0x119BBCu);
    ctx->pc = 0x119BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119BB4u;
    // 0x119bb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x119BB4u, 0x119BBCu)) {
        return;
    }
    ctx->pc = 0x119BBCu;
label_119bbc:
    // 0x119bbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x119bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119bc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119bc4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x119BC4u;
    {
        const bool branch_taken_0x119bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BC4u;
        // 0x119bc8: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bc4) {
            ctx->pc = 0x119BF8u;
            goto label_119bf8;
        }
    }
    ctx->pc = 0x119BCCu;
    // 0x119bcc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x119bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_119bd0:
    // 0x119bd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x119bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119bd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x119bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119bd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x119bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119bdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119be0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x119BE0u;
    SET_GPR_U32(ctx, 31, 0x119BE8u);
    ctx->pc = 0x119BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119BE0u;
    // 0x119be4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x119BE0u, 0x119BE8u)) {
        return;
    }
    ctx->pc = 0x119BE8u;
label_119be8:
    // 0x119be8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x119be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119bec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119bf0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x119BF0u;
    {
        const bool branch_taken_0x119bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x119BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BF0u;
        // 0x119bf4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bf0) {
            ctx->pc = 0x119BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119bd0;
        }
    }
    ctx->pc = 0x119BF8u;
label_119bf8:
    // 0x119bf8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x119bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x119bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c00: 0x8c464538  lw          $a2, 0x4538($v0)
    ctx->pc = 0x119c00u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4538u));
    // 0x119c04: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x119C04u;
    SET_GPR_U32(ctx, 31, 0x119C0Cu);
    ctx->pc = 0x119C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C04u;
    // 0x119c08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x119C04u, 0x119C0Cu)) {
        return;
    }
    ctx->pc = 0x119C0Cu;
label_119c0c:
    // 0x119c0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x119c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119c10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x119c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119c14: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x119C14u;
    {
        const bool branch_taken_0x119c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119c14) {
            ctx->pc = 0x119C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119C14u;
            // 0x119c18: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119D18u;
            goto label_119d18;
        }
    }
    ctx->pc = 0x119C1Cu;
    // 0x119c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119c20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x119c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119c24: 0x0  nop
    ctx->pc = 0x119c24u;
    // NOP
label_119c28:
    // 0x119c28: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x119c28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x119c2c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x119C2Cu;
    {
        const bool branch_taken_0x119c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C2Cu;
        // 0x119c30: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c2c) {
            ctx->pc = 0x119CE8u;
            goto label_119ce8;
        }
    }
    ctx->pc = 0x119C34u;
    // 0x119c34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x119c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x119c38: 0x2442ae50  addiu       $v0, $v0, -0x51B0
    ctx->pc = 0x119c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
    // 0x119c3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119c40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x119c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119c44: 0x800008  jr          $a0
    ctx->pc = 0x119C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119C4Cu: goto label_119c4c;
            case 0x119C60u: goto label_119c60;
            case 0x119C74u: goto label_119c74;
            case 0x119C88u: goto label_119c88;
            case 0x119C9Cu: goto label_119c9c;
            case 0x119CBCu: goto label_119cbc;
            case 0x119CCCu: goto label_119ccc;
            case 0x119CDCu: goto label_119cdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119C44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x119C4Cu;
label_119c4c:
    // 0x119c4c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x119c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119c50: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x119c50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x119c54: 0x24c6ae40  addiu       $a2, $a2, -0x51C0
    ctx->pc = 0x119c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946368));
    // 0x119c58: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x119C58u;
    {
        const bool branch_taken_0x119c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C58u;
        // 0x119c5c: 0x26040098  addiu       $a0, $s0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c58) {
            ctx->pc = 0x119CACu;
            goto label_119cac;
        }
    }
    ctx->pc = 0x119C60u;
label_119c60:
    // 0x119c60: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x119c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119c64: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x119c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x119c68: 0x24c6ae40  addiu       $a2, $a2, -0x51C0
    ctx->pc = 0x119c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946368));
    // 0x119c6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x119C6Cu;
    {
        const bool branch_taken_0x119c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C6Cu;
        // 0x119c70: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c6c) {
            ctx->pc = 0x119CACu;
            goto label_119cac;
        }
    }
    ctx->pc = 0x119C74u;
label_119c74:
    // 0x119c74: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x119c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119c78: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x119c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x119c7c: 0x24c6ae40  addiu       $a2, $a2, -0x51C0
    ctx->pc = 0x119c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946368));
    // 0x119c80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x119C80u;
    {
        const bool branch_taken_0x119c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C80u;
        // 0x119c84: 0x260400a8  addiu       $a0, $s0, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c80) {
            ctx->pc = 0x119CACu;
            goto label_119cac;
        }
    }
    ctx->pc = 0x119C88u;
label_119c88:
    // 0x119c88: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x119c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119c8c: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x119c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x119c90: 0x24c6ae40  addiu       $a2, $a2, -0x51C0
    ctx->pc = 0x119c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946368));
    // 0x119c94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x119C94u;
    {
        const bool branch_taken_0x119c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C94u;
        // 0x119c98: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c94) {
            ctx->pc = 0x119CACu;
            goto label_119cac;
        }
    }
    ctx->pc = 0x119C9Cu;
label_119c9c:
    // 0x119c9c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x119c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119ca0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x119ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x119ca4: 0x24c6ae40  addiu       $a2, $a2, -0x51C0
    ctx->pc = 0x119ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946368));
    // 0x119ca8: 0x260400b8  addiu       $a0, $s0, 0xB8
    ctx->pc = 0x119ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_119cac:
    // 0x119cac: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x119CACu;
    SET_GPR_U32(ctx, 31, 0x119CB4u);
    ctx->pc = 0x119CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119CACu;
    // 0x119cb0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x119CACu, 0x119CB4u)) {
        return;
    }
    ctx->pc = 0x119CB4u;
label_119cb4:
    // 0x119cb4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x119CB4u;
    {
        const bool branch_taken_0x119cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CB4u;
        // 0x119cb8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cb4) {
            ctx->pc = 0x119CECu;
            goto label_119cec;
        }
    }
    ctx->pc = 0x119CBCu;
label_119cbc:
    // 0x119cbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119cc0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x119cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119cc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x119CC4u;
    {
        const bool branch_taken_0x119cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CC4u;
        // 0x119cc8: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cc4) {
            ctx->pc = 0x119CE8u;
            goto label_119ce8;
        }
    }
    ctx->pc = 0x119CCCu;
label_119ccc:
    // 0x119ccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119cd0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x119cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119cd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x119CD4u;
    {
        const bool branch_taken_0x119cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CD4u;
        // 0x119cd8: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cd4) {
            ctx->pc = 0x119CE8u;
            goto label_119ce8;
        }
    }
    ctx->pc = 0x119CDCu;
label_119cdc:
    // 0x119cdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119ce0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x119ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119ce4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x119ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_119ce8:
    // 0x119ce8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x119ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_119cec:
    // 0x119cec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x119cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x119cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x119cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119cf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x119cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119cf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119cfc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x119CFCu;
    SET_GPR_U32(ctx, 31, 0x119D04u);
    ctx->pc = 0x119D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119CFCu;
    // 0x119d00: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x119CFCu, 0x119D04u)) {
        return;
    }
    ctx->pc = 0x119D04u;
label_119d04:
    // 0x119d04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x119d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119d08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119d0c: 0x5460ffc6  bnel        $v1, $zero, . + 4 + (-0x3A << 2)
    ctx->pc = 0x119D0Cu;
    {
        const bool branch_taken_0x119d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x119d0c) {
            ctx->pc = 0x119D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119D0Cu;
            // 0x119d10: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119c28;
        }
    }
    ctx->pc = 0x119D14u;
    // 0x119d14: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x119d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_119d18:
    // 0x119d18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x119d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119d1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x119d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119d20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119d24: 0x3e00008  jr          $ra
    ctx->pc = 0x119D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D24u;
        // 0x119d28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119D2Cu;
    // 0x119d2c: 0x0  nop
    ctx->pc = 0x119d2cu;
    // NOP
    ctx->pc = 0x119d30u;
}
