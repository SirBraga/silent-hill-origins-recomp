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

// Function: sub_001DC350
// Address: 0x1dc350 - 0x1dc470
void sub_001DC350_0x1dc350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC350_0x1dc350");
#endif

    switch (ctx->pc) {
        case 0x1dc350u: goto label_1dc350;
        case 0x1dc354u: goto label_1dc354;
        case 0x1dc358u: goto label_1dc358;
        case 0x1dc35cu: goto label_1dc35c;
        case 0x1dc360u: goto label_1dc360;
        case 0x1dc364u: goto label_1dc364;
        case 0x1dc368u: goto label_1dc368;
        case 0x1dc36cu: goto label_1dc36c;
        case 0x1dc370u: goto label_1dc370;
        case 0x1dc374u: goto label_1dc374;
        case 0x1dc378u: goto label_1dc378;
        case 0x1dc37cu: goto label_1dc37c;
        case 0x1dc380u: goto label_1dc380;
        case 0x1dc384u: goto label_1dc384;
        case 0x1dc388u: goto label_1dc388;
        case 0x1dc38cu: goto label_1dc38c;
        case 0x1dc390u: goto label_1dc390;
        case 0x1dc394u: goto label_1dc394;
        case 0x1dc398u: goto label_1dc398;
        case 0x1dc39cu: goto label_1dc39c;
        case 0x1dc3a0u: goto label_1dc3a0;
        case 0x1dc3a4u: goto label_1dc3a4;
        case 0x1dc3a8u: goto label_1dc3a8;
        case 0x1dc3acu: goto label_1dc3ac;
        case 0x1dc3b0u: goto label_1dc3b0;
        case 0x1dc3b4u: goto label_1dc3b4;
        case 0x1dc3b8u: goto label_1dc3b8;
        case 0x1dc3bcu: goto label_1dc3bc;
        case 0x1dc3c0u: goto label_1dc3c0;
        case 0x1dc3c4u: goto label_1dc3c4;
        case 0x1dc3c8u: goto label_1dc3c8;
        case 0x1dc3ccu: goto label_1dc3cc;
        case 0x1dc3d0u: goto label_1dc3d0;
        case 0x1dc3d4u: goto label_1dc3d4;
        case 0x1dc3d8u: goto label_1dc3d8;
        case 0x1dc3dcu: goto label_1dc3dc;
        case 0x1dc3e0u: goto label_1dc3e0;
        case 0x1dc3e4u: goto label_1dc3e4;
        case 0x1dc3e8u: goto label_1dc3e8;
        case 0x1dc3ecu: goto label_1dc3ec;
        case 0x1dc3f0u: goto label_1dc3f0;
        case 0x1dc3f4u: goto label_1dc3f4;
        case 0x1dc3f8u: goto label_1dc3f8;
        case 0x1dc3fcu: goto label_1dc3fc;
        case 0x1dc400u: goto label_1dc400;
        case 0x1dc404u: goto label_1dc404;
        case 0x1dc408u: goto label_1dc408;
        case 0x1dc40cu: goto label_1dc40c;
        case 0x1dc410u: goto label_1dc410;
        case 0x1dc414u: goto label_1dc414;
        case 0x1dc418u: goto label_1dc418;
        case 0x1dc41cu: goto label_1dc41c;
        case 0x1dc420u: goto label_1dc420;
        case 0x1dc424u: goto label_1dc424;
        case 0x1dc428u: goto label_1dc428;
        case 0x1dc42cu: goto label_1dc42c;
        case 0x1dc430u: goto label_1dc430;
        case 0x1dc434u: goto label_1dc434;
        case 0x1dc438u: goto label_1dc438;
        case 0x1dc43cu: goto label_1dc43c;
        case 0x1dc440u: goto label_1dc440;
        case 0x1dc444u: goto label_1dc444;
        case 0x1dc448u: goto label_1dc448;
        case 0x1dc44cu: goto label_1dc44c;
        case 0x1dc450u: goto label_1dc450;
        case 0x1dc454u: goto label_1dc454;
        case 0x1dc458u: goto label_1dc458;
        case 0x1dc45cu: goto label_1dc45c;
        case 0x1dc460u: goto label_1dc460;
        case 0x1dc464u: goto label_1dc464;
        case 0x1dc468u: goto label_1dc468;
        case 0x1dc46cu: goto label_1dc46c;
        default: break;
    }

    ctx->pc = 0x1dc350u;

label_1dc350:
    // 0x1dc350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dc350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dc354:
    // 0x1dc354: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dc354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dc358:
    // 0x1dc358: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dc358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1dc35c:
    // 0x1dc35c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dc360:
    // 0x1dc360: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dc364:
    // 0x1dc364: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1dc364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1dc368:
    // 0x1dc368: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1dc36c:
    if (ctx->pc == 0x1DC36Cu) {
        ctx->pc = 0x1DC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC368u;
        // 0x1dc36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC370u;
        goto label_1dc370;
    }
    ctx->pc = 0x1DC368u;
    {
        const bool branch_taken_0x1dc368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC368u;
        // 0x1dc36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc368) {
            ctx->pc = 0x1DC388u;
            goto label_1dc388;
        }
    }
    ctx->pc = 0x1DC370u;
label_1dc370:
    // 0x1dc370: 0xc077e86  jal         func_1DFA18
label_1dc374:
    if (ctx->pc == 0x1DC374u) {
        ctx->pc = 0x1DC378u;
        goto label_1dc378;
    }
    ctx->pc = 0x1DC370u;
    SET_GPR_U32(ctx, 31, 0x1DC378u);
    ctx->pc = 0x1DFA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DFA18u, 0x1DC370u, 0x1DC378u)) {
        return;
    }
    ctx->pc = 0x1DC378u;
label_1dc378:
    // 0x1dc378: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dc37c:
    if (ctx->pc == 0x1DC37Cu) {
        ctx->pc = 0x1DC380u;
        goto label_1dc380;
    }
    ctx->pc = 0x1DC378u;
    {
        const bool branch_taken_0x1dc378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc378) {
            ctx->pc = 0x1DC388u;
            goto label_1dc388;
        }
    }
    ctx->pc = 0x1DC380u;
label_1dc380:
    // 0x1dc380: 0x10000014  b           . + 4 + (0x14 << 2)
label_1dc384:
    if (ctx->pc == 0x1DC384u) {
        ctx->pc = 0x1DC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC380u;
        // 0x1dc384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC388u;
        goto label_1dc388;
    }
    ctx->pc = 0x1DC380u;
    {
        const bool branch_taken_0x1dc380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC380u;
        // 0x1dc384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc380) {
            ctx->pc = 0x1DC3D4u;
            goto label_1dc3d4;
        }
    }
    ctx->pc = 0x1DC388u;
label_1dc388:
    // 0x1dc388: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1dc38c:
    if (ctx->pc == 0x1DC38Cu) {
        ctx->pc = 0x1DC390u;
        goto label_1dc390;
    }
    ctx->pc = 0x1DC388u;
    {
        const bool branch_taken_0x1dc388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc388) {
            ctx->pc = 0x1DC3FCu;
            goto label_1dc3fc;
        }
    }
    ctx->pc = 0x1DC390u;
label_1dc390:
    // 0x1dc390: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1dc390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1dc394:
    // 0x1dc394: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1dc398:
    if (ctx->pc == 0x1DC398u) {
        ctx->pc = 0x1DC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC394u;
        // 0x1dc398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC39Cu;
        goto label_1dc39c;
    }
    ctx->pc = 0x1DC394u;
    {
        const bool branch_taken_0x1dc394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC394u;
        // 0x1dc398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc394) {
            ctx->pc = 0x1DC3D4u;
            goto label_1dc3d4;
        }
    }
    ctx->pc = 0x1DC39Cu;
label_1dc39c:
    // 0x1dc39c: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x1dc39cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1dc3a0:
    // 0x1dc3a0: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
label_1dc3a4:
    if (ctx->pc == 0x1DC3A4u) {
        ctx->pc = 0x1DC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3A0u;
        // 0x1dc3a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3A8u;
        goto label_1dc3a8;
    }
    ctx->pc = 0x1DC3A0u;
    {
        const bool branch_taken_0x1dc3a0 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x1DC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3A0u;
        // 0x1dc3a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3a0) {
            ctx->pc = 0x1DC3D4u;
            goto label_1dc3d4;
        }
    }
    ctx->pc = 0x1DC3A8u;
label_1dc3a8:
    // 0x1dc3a8: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x1dc3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1dc3ac:
    // 0x1dc3ac: 0x0  nop
    ctx->pc = 0x1dc3acu;
    // NOP
label_1dc3b0:
    // 0x1dc3b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dc3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dc3b4:
    // 0x1dc3b4: 0x90620007  lbu         $v0, 0x7($v1)
    ctx->pc = 0x1dc3b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
label_1dc3b8:
    // 0x1dc3b8: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x1dc3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
label_1dc3bc:
    // 0x1dc3bc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1dc3c0:
    if (ctx->pc == 0x1DC3C0u) {
        ctx->pc = 0x1DC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3BCu;
        // 0x1dc3c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3C4u;
        goto label_1dc3c4;
    }
    ctx->pc = 0x1DC3BCu;
    {
        const bool branch_taken_0x1dc3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3BCu;
        // 0x1dc3c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3bc) {
            ctx->pc = 0x1DC380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc380;
        }
    }
    ctx->pc = 0x1DC3C4u;
label_1dc3c4:
    // 0x1dc3c4: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1dc3c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1dc3c8:
    // 0x1dc3c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1dc3cc:
    if (ctx->pc == 0x1DC3CCu) {
        ctx->pc = 0x1DC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3C8u;
        // 0x1dc3cc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3D0u;
        goto label_1dc3d0;
    }
    ctx->pc = 0x1DC3C8u;
    {
        const bool branch_taken_0x1dc3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3C8u;
        // 0x1dc3cc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3c8) {
            ctx->pc = 0x1DC3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc3b0;
        }
    }
    ctx->pc = 0x1DC3D0u;
label_1dc3d0:
    // 0x1dc3d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc3d4:
    // 0x1dc3d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1dc3d8:
    if (ctx->pc == 0x1DC3D8u) {
        ctx->pc = 0x1DC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3D4u;
        // 0x1dc3d8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3DCu;
        goto label_1dc3dc;
    }
    ctx->pc = 0x1DC3D4u;
    {
        const bool branch_taken_0x1dc3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3D4u;
        // 0x1dc3d8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3d4) {
            ctx->pc = 0x1DC3FCu;
            goto label_1dc3fc;
        }
    }
    ctx->pc = 0x1DC3DCu;
label_1dc3dc:
    // 0x1dc3dc: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1dc3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1dc3e0:
    // 0x1dc3e0: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dc3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
label_1dc3e4:
    // 0x1dc3e4: 0x8ca4e668  lw          $a0, -0x1998($a1)
    ctx->pc = 0x1dc3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960744)));
label_1dc3e8:
    // 0x1dc3e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1dc3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc3ec:
    // 0x1dc3ec: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1dc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1dc3f0:
    // 0x1dc3f0: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1dc3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_1dc3f4:
    // 0x1dc3f4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1dc3f8:
    if (ctx->pc == 0x1DC3F8u) {
        ctx->pc = 0x1DC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3F4u;
        // 0x1dc3f8: 0xacb1e668  sw          $s1, -0x1998($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294960744), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC3FCu;
        goto label_1dc3fc;
    }
    ctx->pc = 0x1DC3F4u;
    {
        const bool branch_taken_0x1dc3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3F4u;
        // 0x1dc3f8: 0xacb1e668  sw          $s1, -0x1998($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294960744), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3f4) {
            ctx->pc = 0x1DC45Cu;
            goto label_1dc45c;
        }
    }
    ctx->pc = 0x1DC3FCu;
label_1dc3fc:
    // 0x1dc3fc: 0xc076d8e  jal         func_1DB638
label_1dc400:
    if (ctx->pc == 0x1DC400u) {
        ctx->pc = 0x1DC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3FCu;
        // 0x1dc400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC404u;
        goto label_1dc404;
    }
    ctx->pc = 0x1DC3FCu;
    SET_GPR_U32(ctx, 31, 0x1DC404u);
    ctx->pc = 0x1DC400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC3FCu;
    // 0x1dc400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB638u, 0x1DC3FCu, 0x1DC404u)) {
        return;
    }
    ctx->pc = 0x1DC404u;
label_1dc404:
    // 0x1dc404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dc408:
    if (ctx->pc == 0x1DC408u) {
        ctx->pc = 0x1DC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC404u;
        // 0x1dc408: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC40Cu;
        goto label_1dc40c;
    }
    ctx->pc = 0x1DC404u;
    {
        const bool branch_taken_0x1dc404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC404u;
        // 0x1dc408: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc404) {
            ctx->pc = 0x1DC418u;
            goto label_1dc418;
        }
    }
    ctx->pc = 0x1DC40Cu;
label_1dc40c:
    // 0x1dc40c: 0xc077e8c  jal         func_1DFA30
label_1dc410:
    if (ctx->pc == 0x1DC410u) {
        ctx->pc = 0x1DC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC40Cu;
        // 0x1dc410: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC414u;
        goto label_1dc414;
    }
    ctx->pc = 0x1DC40Cu;
    SET_GPR_U32(ctx, 31, 0x1DC414u);
    ctx->pc = 0x1DC410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC40Cu;
    // 0x1dc410: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFA30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DFA30u, 0x1DC40Cu, 0x1DC414u)) {
        return;
    }
    ctx->pc = 0x1DC414u;
label_1dc414:
    // 0x1dc414: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1dc414u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1dc418:
    // 0x1dc418: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dc418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dc41c:
    // 0x1dc41c: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1dc41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1dc420:
    // 0x1dc420: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1dc420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1dc424:
    // 0x1dc424: 0x40f809  jalr        $v0
label_1dc428:
    if (ctx->pc == 0x1DC428u) {
        ctx->pc = 0x1DC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC424u;
        // 0x1dc428: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC42Cu;
        goto label_1dc42c;
    }
    ctx->pc = 0x1DC424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC42Cu);
        ctx->pc = 0x1DC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC424u;
        // 0x1dc428: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC424u, 0x1DC42Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC42Cu;
label_1dc42c:
    // 0x1dc42c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dc42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc430:
    // 0x1dc430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc434:
    // 0x1dc434: 0x40f809  jalr        $v0
label_1dc438:
    if (ctx->pc == 0x1DC438u) {
        ctx->pc = 0x1DC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC434u;
        // 0x1dc438: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC43Cu;
        goto label_1dc43c;
    }
    ctx->pc = 0x1DC434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DC43Cu);
        ctx->pc = 0x1DC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC434u;
        // 0x1dc438: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC434u, 0x1DC43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC43Cu;
label_1dc43c:
    // 0x1dc43c: 0xc0773d8  jal         func_1DCF60
label_1dc440:
    if (ctx->pc == 0x1DC440u) {
        ctx->pc = 0x1DC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC43Cu;
        // 0x1dc440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC444u;
        goto label_1dc444;
    }
    ctx->pc = 0x1DC43Cu;
    SET_GPR_U32(ctx, 31, 0x1DC444u);
    ctx->pc = 0x1DC440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC43Cu;
    // 0x1dc440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCF60u, 0x1DC43Cu, 0x1DC444u)) {
        return;
    }
    ctx->pc = 0x1DC444u;
label_1dc444:
    // 0x1dc444: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1dc444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dc448:
    // 0x1dc448: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dc448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc44c:
    // 0x1dc44c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1dc44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc450:
    // 0x1dc450: 0x60f809  jalr        $v1
label_1dc454:
    if (ctx->pc == 0x1DC454u) {
        ctx->pc = 0x1DC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC450u;
        // 0x1dc454: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC458u;
        goto label_1dc458;
    }
    ctx->pc = 0x1DC450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DC458u);
        ctx->pc = 0x1DC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC450u;
        // 0x1dc454: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC450u, 0x1DC458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC458u;
label_1dc458:
    // 0x1dc458: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1dc458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc45c:
    // 0x1dc45c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dc45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc460:
    // 0x1dc460: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dc460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc464:
    // 0x1dc464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc468:
    // 0x1dc468: 0x3e00008  jr          $ra
label_1dc46c:
    if (ctx->pc == 0x1DC46Cu) {
        ctx->pc = 0x1DC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC468u;
        // 0x1dc46c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC470u;
        goto label_fallthrough_0x1dc468;
    }
    ctx->pc = 0x1DC468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC468u;
        // 0x1dc46c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dc468:
    ctx->pc = 0x1DC470u;
}
