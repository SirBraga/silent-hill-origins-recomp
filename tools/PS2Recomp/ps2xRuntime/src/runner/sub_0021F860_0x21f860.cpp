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

// Function: sub_0021F860
// Address: 0x21f860 - 0x21fa08
void sub_0021F860_0x21f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F860_0x21f860");
#endif

    switch (ctx->pc) {
        case 0x21f860u: goto label_21f860;
        case 0x21f864u: goto label_21f864;
        case 0x21f868u: goto label_21f868;
        case 0x21f86cu: goto label_21f86c;
        case 0x21f870u: goto label_21f870;
        case 0x21f874u: goto label_21f874;
        case 0x21f878u: goto label_21f878;
        case 0x21f87cu: goto label_21f87c;
        case 0x21f880u: goto label_21f880;
        case 0x21f884u: goto label_21f884;
        case 0x21f888u: goto label_21f888;
        case 0x21f88cu: goto label_21f88c;
        case 0x21f890u: goto label_21f890;
        case 0x21f894u: goto label_21f894;
        case 0x21f898u: goto label_21f898;
        case 0x21f89cu: goto label_21f89c;
        case 0x21f8a0u: goto label_21f8a0;
        case 0x21f8a4u: goto label_21f8a4;
        case 0x21f8a8u: goto label_21f8a8;
        case 0x21f8acu: goto label_21f8ac;
        case 0x21f8b0u: goto label_21f8b0;
        case 0x21f8b4u: goto label_21f8b4;
        case 0x21f8b8u: goto label_21f8b8;
        case 0x21f8bcu: goto label_21f8bc;
        case 0x21f8c0u: goto label_21f8c0;
        case 0x21f8c4u: goto label_21f8c4;
        case 0x21f8c8u: goto label_21f8c8;
        case 0x21f8ccu: goto label_21f8cc;
        case 0x21f8d0u: goto label_21f8d0;
        case 0x21f8d4u: goto label_21f8d4;
        case 0x21f8d8u: goto label_21f8d8;
        case 0x21f8dcu: goto label_21f8dc;
        case 0x21f8e0u: goto label_21f8e0;
        case 0x21f8e4u: goto label_21f8e4;
        case 0x21f8e8u: goto label_21f8e8;
        case 0x21f8ecu: goto label_21f8ec;
        case 0x21f8f0u: goto label_21f8f0;
        case 0x21f8f4u: goto label_21f8f4;
        case 0x21f8f8u: goto label_21f8f8;
        case 0x21f8fcu: goto label_21f8fc;
        case 0x21f900u: goto label_21f900;
        case 0x21f904u: goto label_21f904;
        case 0x21f908u: goto label_21f908;
        case 0x21f90cu: goto label_21f90c;
        case 0x21f910u: goto label_21f910;
        case 0x21f914u: goto label_21f914;
        case 0x21f918u: goto label_21f918;
        case 0x21f91cu: goto label_21f91c;
        case 0x21f920u: goto label_21f920;
        case 0x21f924u: goto label_21f924;
        case 0x21f928u: goto label_21f928;
        case 0x21f92cu: goto label_21f92c;
        case 0x21f930u: goto label_21f930;
        case 0x21f934u: goto label_21f934;
        case 0x21f938u: goto label_21f938;
        case 0x21f93cu: goto label_21f93c;
        case 0x21f940u: goto label_21f940;
        case 0x21f944u: goto label_21f944;
        case 0x21f948u: goto label_21f948;
        case 0x21f94cu: goto label_21f94c;
        case 0x21f950u: goto label_21f950;
        case 0x21f954u: goto label_21f954;
        case 0x21f958u: goto label_21f958;
        case 0x21f95cu: goto label_21f95c;
        case 0x21f960u: goto label_21f960;
        case 0x21f964u: goto label_21f964;
        case 0x21f968u: goto label_21f968;
        case 0x21f96cu: goto label_21f96c;
        case 0x21f970u: goto label_21f970;
        case 0x21f974u: goto label_21f974;
        case 0x21f978u: goto label_21f978;
        case 0x21f97cu: goto label_21f97c;
        case 0x21f980u: goto label_21f980;
        case 0x21f984u: goto label_21f984;
        case 0x21f988u: goto label_21f988;
        case 0x21f98cu: goto label_21f98c;
        case 0x21f990u: goto label_21f990;
        case 0x21f994u: goto label_21f994;
        case 0x21f998u: goto label_21f998;
        case 0x21f99cu: goto label_21f99c;
        case 0x21f9a0u: goto label_21f9a0;
        case 0x21f9a4u: goto label_21f9a4;
        case 0x21f9a8u: goto label_21f9a8;
        case 0x21f9acu: goto label_21f9ac;
        case 0x21f9b0u: goto label_21f9b0;
        case 0x21f9b4u: goto label_21f9b4;
        case 0x21f9b8u: goto label_21f9b8;
        case 0x21f9bcu: goto label_21f9bc;
        case 0x21f9c0u: goto label_21f9c0;
        case 0x21f9c4u: goto label_21f9c4;
        case 0x21f9c8u: goto label_21f9c8;
        case 0x21f9ccu: goto label_21f9cc;
        case 0x21f9d0u: goto label_21f9d0;
        case 0x21f9d4u: goto label_21f9d4;
        case 0x21f9d8u: goto label_21f9d8;
        case 0x21f9dcu: goto label_21f9dc;
        case 0x21f9e0u: goto label_21f9e0;
        case 0x21f9e4u: goto label_21f9e4;
        case 0x21f9e8u: goto label_21f9e8;
        case 0x21f9ecu: goto label_21f9ec;
        case 0x21f9f0u: goto label_21f9f0;
        case 0x21f9f4u: goto label_21f9f4;
        case 0x21f9f8u: goto label_21f9f8;
        case 0x21f9fcu: goto label_21f9fc;
        case 0x21fa00u: goto label_21fa00;
        case 0x21fa04u: goto label_21fa04;
        default: break;
    }

    ctx->pc = 0x21f860u;

label_21f860:
    // 0x21f860: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x21f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_21f864:
    // 0x21f864: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x21f864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_21f868:
    // 0x21f868: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x21f868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_21f86c:
    // 0x21f86c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21f86cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21f870:
    // 0x21f870: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x21f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_21f874:
    // 0x21f874: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21f874u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21f878:
    // 0x21f878: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x21f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_21f87c:
    // 0x21f87c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x21f87cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21f880:
    // 0x21f880: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x21f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_21f884:
    // 0x21f884: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x21f884u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21f888:
    // 0x21f888: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x21f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_21f88c:
    // 0x21f88c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_21f890:
    // 0x21f890: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x21f890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_21f894:
    // 0x21f894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21f898:
    // 0x21f898: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x21f898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_21f89c:
    // 0x21f89c: 0x8ed20014  lw          $s2, 0x14($s6)
    ctx->pc = 0x21f89cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_21f8a0:
    // 0x21f8a0: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x21f8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_21f8a4:
    // 0x21f8a4: 0x8e4201a0  lw          $v0, 0x1A0($s2)
    ctx->pc = 0x21f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_21f8a8:
    // 0x21f8a8: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_21f8ac:
    if (ctx->pc == 0x21F8ACu) {
        ctx->pc = 0x21F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8A8u;
        // 0x21f8ac: 0x8ed10004  lw          $s1, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8B0u;
        goto label_21f8b0;
    }
    ctx->pc = 0x21F8A8u;
    {
        const bool branch_taken_0x21f8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8A8u;
        // 0x21f8ac: 0x8ed10004  lw          $s1, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8a8) {
            ctx->pc = 0x21F968u;
            goto label_21f968;
        }
    }
    ctx->pc = 0x21F8B0u;
label_21f8b0:
    // 0x21f8b0: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x21f8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
label_21f8b4:
    // 0x21f8b4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_21f8b8:
    if (ctx->pc == 0x21F8B8u) {
        ctx->pc = 0x21F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8B4u;
        // 0x21f8b8: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8BCu;
        goto label_21f8bc;
    }
    ctx->pc = 0x21F8B4u;
    {
        const bool branch_taken_0x21f8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8B4u;
        // 0x21f8b8: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8b4) {
            ctx->pc = 0x21F9C0u;
            goto label_21f9c0;
        }
    }
    ctx->pc = 0x21F8BCu;
label_21f8bc:
    // 0x21f8bc: 0x0  nop
    ctx->pc = 0x21f8bcu;
    // NOP
label_21f8c0:
    // 0x21f8c0: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
label_21f8c4:
    if (ctx->pc == 0x21F8C4u) {
        ctx->pc = 0x21F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8C0u;
        // 0x21f8c4: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8C8u;
        goto label_21f8c8;
    }
    ctx->pc = 0x21F8C0u;
    {
        const bool branch_taken_0x21f8c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f8c0) {
            ctx->pc = 0x21F8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F8C0u;
            // 0x21f8c4: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F8F0u;
            goto label_21f8f0;
        }
    }
    ctx->pc = 0x21F8C8u;
label_21f8c8:
    // 0x21f8c8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x21f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21f8cc:
    // 0x21f8cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21f8d0:
    // 0x21f8d0: 0x40f809  jalr        $v0
label_21f8d4:
    if (ctx->pc == 0x21F8D4u) {
        ctx->pc = 0x21F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8D0u;
        // 0x21f8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8D8u;
        goto label_21f8d8;
    }
    ctx->pc = 0x21F8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F8D8u);
        ctx->pc = 0x21F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8D0u;
        // 0x21f8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F8D0u, 0x21F8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F8D8u;
label_21f8d8:
    // 0x21f8d8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_21f8dc:
    if (ctx->pc == 0x21F8DCu) {
        ctx->pc = 0x21F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8D8u;
        // 0x21f8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8E0u;
        goto label_21f8e0;
    }
    ctx->pc = 0x21F8D8u;
    {
        const bool branch_taken_0x21f8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8D8u;
        // 0x21f8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8d8) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F8E0u;
label_21f8e0:
    // 0x21f8e0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x21f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21f8e4:
    // 0x21f8e4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x21f8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f8e8:
    // 0x21f8e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f8ec:
    // 0x21f8ec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x21f8ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21f8f0:
    // 0x21f8f0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21f8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21f8f4:
    // 0x21f8f4: 0x145e0014  bne         $v0, $fp, . + 4 + (0x14 << 2)
label_21f8f8:
    if (ctx->pc == 0x21F8F8u) {
        ctx->pc = 0x21F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8F4u;
        // 0x21f8f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8FCu;
        goto label_21f8fc;
    }
    ctx->pc = 0x21F8F4u;
    {
        const bool branch_taken_0x21f8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x21F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8F4u;
        // 0x21f8f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8f4) {
            ctx->pc = 0x21F948u;
            goto label_21f948;
        }
    }
    ctx->pc = 0x21F8FCu;
label_21f8fc:
    // 0x21f8fc: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x21f8fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f900:
    // 0x21f900: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
label_21f904:
    if (ctx->pc == 0x21F904u) {
        ctx->pc = 0x21F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F900u;
        // 0x21f904: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F908u;
        goto label_21f908;
    }
    ctx->pc = 0x21F900u;
    {
        const bool branch_taken_0x21f900 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f900) {
            ctx->pc = 0x21F904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F900u;
            // 0x21f904: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F930u;
            goto label_21f930;
        }
    }
    ctx->pc = 0x21F908u;
label_21f908:
    // 0x21f908: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x21f908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21f90c:
    // 0x21f90c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21f910:
    // 0x21f910: 0x40f809  jalr        $v0
label_21f914:
    if (ctx->pc == 0x21F914u) {
        ctx->pc = 0x21F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F910u;
        // 0x21f914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F918u;
        goto label_21f918;
    }
    ctx->pc = 0x21F910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F918u);
        ctx->pc = 0x21F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F910u;
        // 0x21f914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F910u, 0x21F918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F918u;
label_21f918:
    // 0x21f918: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_21f91c:
    if (ctx->pc == 0x21F91Cu) {
        ctx->pc = 0x21F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F918u;
        // 0x21f91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F920u;
        goto label_21f920;
    }
    ctx->pc = 0x21F918u;
    {
        const bool branch_taken_0x21f918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F918u;
        // 0x21f91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f918) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F920u;
label_21f920:
    // 0x21f920: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x21f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21f924:
    // 0x21f924: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x21f924u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f928:
    // 0x21f928: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21f928u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f92c:
    // 0x21f92c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x21f92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21f930:
    // 0x21f930: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21f930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21f934:
    // 0x21f934: 0x1054fff2  beq         $v0, $s4, . + 4 + (-0xE << 2)
label_21f938:
    if (ctx->pc == 0x21F938u) {
        ctx->pc = 0x21F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F934u;
        // 0x21f938: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F93Cu;
        goto label_21f93c;
    }
    ctx->pc = 0x21F934u;
    {
        const bool branch_taken_0x21f934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x21F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F934u;
        // 0x21f938: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f934) {
            ctx->pc = 0x21F900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f900;
        }
    }
    ctx->pc = 0x21F93Cu;
label_21f93c:
    // 0x21f93c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_21f940:
    if (ctx->pc == 0x21F940u) {
        ctx->pc = 0x21F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F93Cu;
        // 0x21f940: 0xae4201a0  sw          $v0, 0x1A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F944u;
        goto label_21f944;
    }
    ctx->pc = 0x21F93Cu;
    {
        const bool branch_taken_0x21f93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f93c) {
            ctx->pc = 0x21F940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F93Cu;
            // 0x21f940: 0xae4201a0  sw          $v0, 0x1A0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F968u;
            goto label_21f968;
        }
    }
    ctx->pc = 0x21F944u;
label_21f944:
    // 0x21f944: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x21f944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21f948:
    // 0x21f948: 0x151a38  dsll        $v1, $s5, 8
    ctx->pc = 0x21f948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << 8);
label_21f94c:
    // 0x21f94c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x21f94cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_21f950:
    // 0x21f950: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x21f950u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21f954:
    // 0x21f954: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x21f954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
label_21f958:
    // 0x21f958: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_21f95c:
    if (ctx->pc == 0x21F95Cu) {
        ctx->pc = 0x21F960u;
        goto label_21f960;
    }
    ctx->pc = 0x21F958u;
    {
        const bool branch_taken_0x21f958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f958) {
            ctx->pc = 0x21F8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f8c0;
        }
    }
    ctx->pc = 0x21F960u;
label_21f960:
    // 0x21f960: 0x10000018  b           . + 4 + (0x18 << 2)
label_21f964:
    if (ctx->pc == 0x21F964u) {
        ctx->pc = 0x21F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F960u;
        // 0x21f964: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F968u;
        goto label_21f968;
    }
    ctx->pc = 0x21F960u;
    {
        const bool branch_taken_0x21f960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F960u;
        // 0x21f964: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f960) {
            ctx->pc = 0x21F9C4u;
            goto label_21f9c4;
        }
    }
    ctx->pc = 0x21F968u;
label_21f968:
    // 0x21f968: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x21f968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_21f96c:
    // 0x21f96c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_21f970:
    if (ctx->pc == 0x21F970u) {
        ctx->pc = 0x21F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F96Cu;
        // 0x21f970: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F974u;
        goto label_21f974;
    }
    ctx->pc = 0x21F96Cu;
    {
        const bool branch_taken_0x21f96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f96c) {
            ctx->pc = 0x21F970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F96Cu;
            // 0x21f970: 0xaed30010  sw          $s3, 0x10($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F9C4u;
            goto label_21f9c4;
        }
    }
    ctx->pc = 0x21F974u;
label_21f974:
    // 0x21f974: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x21f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_21f978:
    // 0x21f978: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21f97c:
    // 0x21f97c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_21f980:
    if (ctx->pc == 0x21F980u) {
        ctx->pc = 0x21F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F97Cu;
        // 0x21f980: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F984u;
        goto label_21f984;
    }
    ctx->pc = 0x21F97Cu;
    {
        const bool branch_taken_0x21f97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F97Cu;
        // 0x21f980: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f97c) {
            ctx->pc = 0x21F9B4u;
            goto label_21f9b4;
        }
    }
    ctx->pc = 0x21F984u;
label_21f984:
    // 0x21f984: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x21f984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21f988:
    // 0x21f988: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x21f988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_21f98c:
    // 0x21f98c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f990:
    // 0x21f990: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x21f990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_21f994:
    // 0x21f994: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21f998:
    // 0x21f998: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21f998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21f99c:
    // 0x21f99c: 0x60f809  jalr        $v1
label_21f9a0:
    if (ctx->pc == 0x21F9A0u) {
        ctx->pc = 0x21F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F99Cu;
        // 0x21f9a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9A4u;
        goto label_21f9a4;
    }
    ctx->pc = 0x21F99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21F9A4u);
        ctx->pc = 0x21F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F99Cu;
        // 0x21f9a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F99Cu, 0x21F9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F9A4u;
label_21f9a4:
    // 0x21f9a4: 0x8e4401bc  lw          $a0, 0x1BC($s2)
    ctx->pc = 0x21f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_21f9a8:
    // 0x21f9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f9ac:
    // 0x21f9ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x21f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_21f9b0:
    // 0x21f9b0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x21f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21f9b4:
    // 0x21f9b4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x21f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_21f9b8:
    // 0x21f9b8: 0x55a814  dsllv       $s5, $s5, $v0
    ctx->pc = 0x21f9b8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (GPR_U32(ctx, 2) & 0x3F));
label_21f9bc:
    // 0x21f9bc: 0x24130019  addiu       $s3, $zero, 0x19
    ctx->pc = 0x21f9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21f9c0:
    // 0x21f9c0: 0xaed30010  sw          $s3, 0x10($s6)
    ctx->pc = 0x21f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 19));
label_21f9c4:
    // 0x21f9c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f9c8:
    // 0x21f9c8: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x21f9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
label_21f9cc:
    // 0x21f9cc: 0xaed10004  sw          $s1, 0x4($s6)
    ctx->pc = 0x21f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 17));
label_21f9d0:
    // 0x21f9d0: 0xfed50008  sd          $s5, 0x8($s6)
    ctx->pc = 0x21f9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 21));
label_21f9d4:
    // 0x21f9d4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x21f9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21f9d8:
    // 0x21f9d8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x21f9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21f9dc:
    // 0x21f9dc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x21f9dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21f9e0:
    // 0x21f9e0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x21f9e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21f9e4:
    // 0x21f9e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x21f9e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21f9e8:
    // 0x21f9e8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x21f9e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21f9ec:
    // 0x21f9ec: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x21f9ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21f9f0:
    // 0x21f9f0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x21f9f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21f9f4:
    // 0x21f9f4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x21f9f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21f9f8:
    // 0x21f9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f9fc:
    // 0x21f9fc: 0x3e00008  jr          $ra
label_21fa00:
    if (ctx->pc == 0x21FA00u) {
        ctx->pc = 0x21FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9FCu;
        // 0x21fa00: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA04u;
        goto label_21fa04;
    }
    ctx->pc = 0x21F9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9FCu;
        // 0x21fa00: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FA04u;
label_21fa04:
    // 0x21fa04: 0x0  nop
    ctx->pc = 0x21fa04u;
    // NOP
    ctx->pc = 0x21fa08u;
}
