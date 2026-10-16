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

// Function: sub_001F5248
// Address: 0x1f5248 - 0x1f5340
void sub_001F5248_0x1f5248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5248_0x1f5248");
#endif

    switch (ctx->pc) {
        case 0x1f52b8u: goto label_1f52b8;
        case 0x1f52e8u: goto label_1f52e8;
        case 0x1f52fcu: goto label_1f52fc;
        case 0x1f5324u: goto label_1f5324;
        default: break;
    }

    ctx->pc = 0x1f5248u;

    // 0x1f5248: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f5248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f524c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f5250: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f5250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f5254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5258: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f5258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f525c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f525cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f5264: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1f5264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f5268: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1f5268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f526c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F526Cu;
    {
        const bool branch_taken_0x1f526c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F526Cu;
        // 0x1f5270: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f526c) {
            ctx->pc = 0x1F52D0u;
            goto label_1f52d0;
        }
    }
    ctx->pc = 0x1F5274u;
    // 0x1f5274: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f5274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f5278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f5278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f527c: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x1f527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x1f5280: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f5280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f5284: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f5284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f5288: 0x800008  jr          $a0
    ctx->pc = 0x1F5288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F5290u: goto label_1f5290;
            case 0x1F5298u: goto label_1f5298;
            case 0x1F52A0u: goto label_1f52a0;
            case 0x1F52A8u: goto label_1f52a8;
            case 0x1F52CCu: goto label_1f52cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5288u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F5290u;
label_1f5290:
    // 0x1f5290: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F5290u;
    {
        const bool branch_taken_0x1f5290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5290u;
        // 0x1f5294: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5290) {
            ctx->pc = 0x1F52D0u;
            goto label_1f52d0;
        }
    }
    ctx->pc = 0x1F5298u;
label_1f5298:
    // 0x1f5298: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F5298u;
    {
        const bool branch_taken_0x1f5298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5298u;
        // 0x1f529c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5298) {
            ctx->pc = 0x1F52D0u;
            goto label_1f52d0;
        }
    }
    ctx->pc = 0x1F52A0u;
label_1f52a0:
    // 0x1f52a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F52A0u;
    {
        const bool branch_taken_0x1f52a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52A0u;
        // 0x1f52a4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52a0) {
            ctx->pc = 0x1F52D0u;
            goto label_1f52d0;
        }
    }
    ctx->pc = 0x1F52A8u;
label_1f52a8:
    // 0x1f52a8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F52A8u;
    {
        const bool branch_taken_0x1f52a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52A8u;
        // 0x1f52ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52a8) {
            ctx->pc = 0x1F52C0u;
            goto label_1f52c0;
        }
    }
    ctx->pc = 0x1F52B0u;
    // 0x1f52b0: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1F52B0u;
    SET_GPR_U32(ctx, 31, 0x1F52B8u);
    ctx->pc = 0x1F52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52B0u;
    // 0x1f52b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1F52B0u, 0x1F52B8u)) {
        return;
    }
    ctx->pc = 0x1F52B8u;
label_1f52b8:
    // 0x1f52b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F52B8u;
    {
        const bool branch_taken_0x1f52b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52B8u;
        // 0x1f52bc: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52b8) {
            ctx->pc = 0x1F52D0u;
            goto label_1f52d0;
        }
    }
    ctx->pc = 0x1F52C0u;
label_1f52c0:
    // 0x1f52c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f52c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F52C4u;
    {
        const bool branch_taken_0x1f52c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F52C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52C4u;
        // 0x1f52c8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52c4) {
            ctx->pc = 0x1F52D0u;
            goto label_1f52d0;
        }
    }
    ctx->pc = 0x1F52CCu;
label_1f52cc:
    // 0x1f52cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f52ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f52d0:
    // 0x1f52d0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1f52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1f52d4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1f52d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f52d8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F52D8u;
    {
        const bool branch_taken_0x1f52d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f52d8) {
            ctx->pc = 0x1F52DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F52D8u;
            // 0x1f52dc: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5308u;
            goto label_1f5308;
        }
    }
    ctx->pc = 0x1F52E0u;
    // 0x1f52e0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1F52E0u;
    SET_GPR_U32(ctx, 31, 0x1F52E8u);
    ctx->pc = 0x1F52E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52E0u;
    // 0x1f52e4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1F52E0u, 0x1F52E8u)) {
        return;
    }
    ctx->pc = 0x1F52E8u;
label_1f52e8:
    // 0x1f52e8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F52E8u;
    {
        const bool branch_taken_0x1f52e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F52E8u;
        // 0x1f52ec: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52e8) {
            ctx->pc = 0x1F5300u;
            goto label_1f5300;
        }
    }
    ctx->pc = 0x1F52F0u;
    // 0x1f52f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f52f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52f4: 0xc080924  jal         func_202490
    ctx->pc = 0x1F52F4u;
    SET_GPR_U32(ctx, 31, 0x1F52FCu);
    ctx->pc = 0x1F52F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52F4u;
    // 0x1f52f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1F52F4u, 0x1F52FCu)) {
        return;
    }
    ctx->pc = 0x1F52FCu;
label_1f52fc:
    // 0x1f52fc: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1f52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1f5300:
    // 0x1f5300: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x1f5300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x1f5304: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1f5304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1f5308:
    // 0x1f5308: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F5308u;
    {
        const bool branch_taken_0x1f5308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5308u;
        // 0x1f530c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5308) {
            ctx->pc = 0x1F5328u;
            goto label_1f5328;
        }
    }
    ctx->pc = 0x1F5310u;
    // 0x1f5310: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5310u;
    {
        const bool branch_taken_0x1f5310 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5310) {
            ctx->pc = 0x1F5314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5310u;
            // 0x1f5314: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F532Cu;
            goto label_1f532c;
        }
    }
    ctx->pc = 0x1F5318u;
    // 0x1f5318: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x1f5318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1f531c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x1F531Cu;
    SET_GPR_U32(ctx, 31, 0x1F5324u);
    ctx->pc = 0x1F5320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F531Cu;
    // 0x1f5320: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x1F531Cu, 0x1F5324u)) {
        return;
    }
    ctx->pc = 0x1F5324u;
label_1f5324:
    // 0x1f5324: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f5324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5328:
    // 0x1f5328: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f5328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f532c:
    // 0x1f532c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f532cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5334: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5334u;
        // 0x1f5338: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F533Cu;
    // 0x1f533c: 0x0  nop
    ctx->pc = 0x1f533cu;
    // NOP
    ctx->pc = 0x1f5340u;
}
