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

// Function: sub_002DF2B8
// Address: 0x2df2b8 - 0x2df450
void sub_002DF2B8_0x2df2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF2B8_0x2df2b8");
#endif

    switch (ctx->pc) {
        case 0x2df2ecu: goto label_2df2ec;
        case 0x2df2fcu: goto label_2df2fc;
        case 0x2df314u: goto label_2df314;
        case 0x2df340u: goto label_2df340;
        default: break;
    }

    ctx->pc = 0x2df2b8u;

    // 0x2df2b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df2bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2df2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df2c4: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x2df2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x2df2c8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2df2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2df2cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DF2CCu;
    {
        const bool branch_taken_0x2df2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2CCu;
        // 0x2df2d0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df2cc) {
            ctx->pc = 0x2DF304u;
            goto label_2df304;
        }
    }
    ctx->pc = 0x2DF2D4u;
    // 0x2df2d4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2df2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2df2d8: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2df2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2df2dc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF2DCu;
    {
        const bool branch_taken_0x2df2dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df2dc) {
            ctx->pc = 0x2DF2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF2DCu;
            // 0x2df2e0: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF2F4u;
            goto label_2df2f4;
        }
    }
    ctx->pc = 0x2DF2E4u;
    // 0x2df2e4: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DF2E4u;
    SET_GPR_U32(ctx, 31, 0x2DF2ECu);
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DF2E4u, 0x2DF2ECu)) {
        return;
    }
    ctx->pc = 0x2DF2ECu;
label_2df2ec:
    // 0x2df2ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DF2ECu;
    {
        const bool branch_taken_0x2df2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2ECu;
        // 0x2df2f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df2ec) {
            ctx->pc = 0x2DF318u;
            goto label_2df318;
        }
    }
    ctx->pc = 0x2DF2F4u;
label_2df2f4:
    // 0x2df2f4: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2DF2F4u;
    SET_GPR_U32(ctx, 31, 0x2DF2FCu);
    ctx->pc = 0x2DF2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF2F4u;
    // 0x2df2f8: 0x24848068  addiu       $a0, $a0, -0x7F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DF2F4u, 0x2DF2FCu)) {
        return;
    }
    ctx->pc = 0x2DF2FCu;
label_2df2fc:
    // 0x2df2fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF2FCu;
    {
        const bool branch_taken_0x2df2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2FCu;
        // 0x2df300: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df2fc) {
            ctx->pc = 0x2DF318u;
            goto label_2df318;
        }
    }
    ctx->pc = 0x2DF304u;
label_2df304:
    // 0x2df304: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF304u;
    {
        const bool branch_taken_0x2df304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF304u;
        // 0x2df308: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df304) {
            ctx->pc = 0x2DF318u;
            goto label_2df318;
        }
    }
    ctx->pc = 0x2DF30Cu;
    // 0x2df30c: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2DF30Cu;
    SET_GPR_U32(ctx, 31, 0x2DF314u);
    ctx->pc = 0x2DF310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF30Cu;
    // 0x2df310: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DF30Cu, 0x2DF314u)) {
        return;
    }
    ctx->pc = 0x2DF314u;
label_2df314:
    // 0x2df314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2df318:
    // 0x2df318: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF318u;
        // 0x2df31c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF320u;
    // 0x2df320: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2df320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df324: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2df324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df328: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2df328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2df32c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2df32cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2df330: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2DF330u;
    {
        const bool branch_taken_0x2df330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF330u;
        // 0x2df334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df330) {
            ctx->pc = 0x2DF440u;
            goto label_2df440;
        }
    }
    ctx->pc = 0x2DF338u;
    // 0x2df338: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2df338u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2df33c: 0x0  nop
    ctx->pc = 0x2df33cu;
    // NOP
label_2df340:
    // 0x2df340: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2df340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2df344: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2DF344u;
    {
        const bool branch_taken_0x2df344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF344u;
        // 0x2df348: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df344) {
            ctx->pc = 0x2DF41Cu;
            goto label_2df41c;
        }
    }
    ctx->pc = 0x2DF34Cu;
    // 0x2df34c: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x2df34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2df350: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2df350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2df354: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2df354u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2df358: 0x2c830017  sltiu       $v1, $a0, 0x17
    ctx->pc = 0x2df358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x2df35c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2DF35Cu;
    {
        const bool branch_taken_0x2df35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF35Cu;
        // 0x2df360: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df35c) {
            ctx->pc = 0x2DF3F8u;
            goto label_2df3f8;
        }
    }
    ctx->pc = 0x2DF364u;
    // 0x2df364: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2df364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2df368: 0x2442f1c0  addiu       $v0, $v0, -0xE40
    ctx->pc = 0x2df368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963648));
    // 0x2df36c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2df36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2df370: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2df370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2df374: 0x800008  jr          $a0
    ctx->pc = 0x2DF374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF380u: goto label_2df380;
            case 0x2DF388u: goto label_2df388;
            case 0x2DF390u: goto label_2df390;
            case 0x2DF398u: goto label_2df398;
            case 0x2DF3A0u: goto label_2df3a0;
            case 0x2DF3A8u: goto label_2df3a8;
            case 0x2DF3B0u: goto label_2df3b0;
            case 0x2DF3B8u: goto label_2df3b8;
            case 0x2DF3C0u: goto label_2df3c0;
            case 0x2DF3C8u: goto label_2df3c8;
            case 0x2DF3D0u: goto label_2df3d0;
            case 0x2DF3D8u: goto label_2df3d8;
            case 0x2DF3E0u: goto label_2df3e0;
            case 0x2DF3E8u: goto label_2df3e8;
            case 0x2DF3F0u: goto label_2df3f0;
            case 0x2DF3F8u: goto label_2df3f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF374u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DF37Cu;
    // 0x2df37c: 0x0  nop
    ctx->pc = 0x2df37cu;
    // NOP
label_2df380:
    // 0x2df380: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2DF380u;
    {
        const bool branch_taken_0x2df380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF380u;
        // 0x2df384: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df380) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF388u;
label_2df388:
    // 0x2df388: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2DF388u;
    {
        const bool branch_taken_0x2df388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF388u;
        // 0x2df38c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df388) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF390u;
label_2df390:
    // 0x2df390: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2DF390u;
    {
        const bool branch_taken_0x2df390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF390u;
        // 0x2df394: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df390) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF398u;
label_2df398:
    // 0x2df398: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2DF398u;
    {
        const bool branch_taken_0x2df398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF398u;
        // 0x2df39c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df398) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3A0u;
label_2df3a0:
    // 0x2df3a0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DF3A0u;
    {
        const bool branch_taken_0x2df3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3A0u;
        // 0x2df3a4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3a0) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3A8u;
label_2df3a8:
    // 0x2df3a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2DF3A8u;
    {
        const bool branch_taken_0x2df3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3A8u;
        // 0x2df3ac: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3a8) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3B0u;
label_2df3b0:
    // 0x2df3b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2DF3B0u;
    {
        const bool branch_taken_0x2df3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3B0u;
        // 0x2df3b4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3b0) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3B8u;
label_2df3b8:
    // 0x2df3b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2DF3B8u;
    {
        const bool branch_taken_0x2df3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3B8u;
        // 0x2df3bc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3b8) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3C0u;
label_2df3c0:
    // 0x2df3c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DF3C0u;
    {
        const bool branch_taken_0x2df3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3C0u;
        // 0x2df3c4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3c0) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3C8u;
label_2df3c8:
    // 0x2df3c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DF3C8u;
    {
        const bool branch_taken_0x2df3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3C8u;
        // 0x2df3cc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3c8) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3D0u;
label_2df3d0:
    // 0x2df3d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DF3D0u;
    {
        const bool branch_taken_0x2df3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3D0u;
        // 0x2df3d4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3d0) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3D8u;
label_2df3d8:
    // 0x2df3d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DF3D8u;
    {
        const bool branch_taken_0x2df3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3D8u;
        // 0x2df3dc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3d8) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3E0u;
label_2df3e0:
    // 0x2df3e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF3E0u;
    {
        const bool branch_taken_0x2df3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3E0u;
        // 0x2df3e4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3e0) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3E8u;
label_2df3e8:
    // 0x2df3e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF3E8u;
    {
        const bool branch_taken_0x2df3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3E8u;
        // 0x2df3ec: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3e8) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3F0u;
label_2df3f0:
    // 0x2df3f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DF3F0u;
    {
        const bool branch_taken_0x2df3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3F0u;
        // 0x2df3f4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3f0) {
            ctx->pc = 0x2DF3FCu;
            goto label_2df3fc;
        }
    }
    ctx->pc = 0x2DF3F8u;
label_2df3f8:
    // 0x2df3f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2df3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df3fc:
    // 0x2df3fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df400: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2df400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2df404: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2df404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2df408: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2df408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2df40c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x2df40cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2df410: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x2df410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2df414: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x2df414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2df418: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2df418u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2df41c:
    // 0x2df41c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2df41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2df420: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2df420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2df424: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2df424u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2df428: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x2df428u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2df42c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF42Cu;
    {
        const bool branch_taken_0x2df42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF42Cu;
        // 0x2df430: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df42c) {
            ctx->pc = 0x2DF440u;
            goto label_2df440;
        }
    }
    ctx->pc = 0x2DF434u;
    // 0x2df434: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x2df434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2df438: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2DF438u;
    {
        const bool branch_taken_0x2df438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df438) {
            ctx->pc = 0x2DF43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF438u;
            // 0x2df43c: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df340;
        }
    }
    ctx->pc = 0x2DF440u;
label_2df440:
    // 0x2df440: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF440u;
        // 0x2df444: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF448u;
    // 0x2df448: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x2df448u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x2df44c: 0x0  nop
    ctx->pc = 0x2df44cu;
    // NOP
    ctx->pc = 0x2df450u;
}
