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

// Function: sub_002738E0
// Address: 0x2738e0 - 0x273a80
void sub_002738E0_0x2738e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002738E0_0x2738e0");
#endif

    switch (ctx->pc) {
        case 0x2738e0u: goto label_2738e0;
        case 0x2738e4u: goto label_2738e4;
        case 0x2738e8u: goto label_2738e8;
        case 0x2738ecu: goto label_2738ec;
        case 0x2738f0u: goto label_2738f0;
        case 0x2738f4u: goto label_2738f4;
        case 0x2738f8u: goto label_2738f8;
        case 0x2738fcu: goto label_2738fc;
        case 0x273900u: goto label_273900;
        case 0x273904u: goto label_273904;
        case 0x273908u: goto label_273908;
        case 0x27390cu: goto label_27390c;
        case 0x273910u: goto label_273910;
        case 0x273914u: goto label_273914;
        case 0x273918u: goto label_273918;
        case 0x27391cu: goto label_27391c;
        case 0x273920u: goto label_273920;
        case 0x273924u: goto label_273924;
        case 0x273928u: goto label_273928;
        case 0x27392cu: goto label_27392c;
        case 0x273930u: goto label_273930;
        case 0x273934u: goto label_273934;
        case 0x273938u: goto label_273938;
        case 0x27393cu: goto label_27393c;
        case 0x273940u: goto label_273940;
        case 0x273944u: goto label_273944;
        case 0x273948u: goto label_273948;
        case 0x27394cu: goto label_27394c;
        case 0x273950u: goto label_273950;
        case 0x273954u: goto label_273954;
        case 0x273958u: goto label_273958;
        case 0x27395cu: goto label_27395c;
        case 0x273960u: goto label_273960;
        case 0x273964u: goto label_273964;
        case 0x273968u: goto label_273968;
        case 0x27396cu: goto label_27396c;
        case 0x273970u: goto label_273970;
        case 0x273974u: goto label_273974;
        case 0x273978u: goto label_273978;
        case 0x27397cu: goto label_27397c;
        case 0x273980u: goto label_273980;
        case 0x273984u: goto label_273984;
        case 0x273988u: goto label_273988;
        case 0x27398cu: goto label_27398c;
        case 0x273990u: goto label_273990;
        case 0x273994u: goto label_273994;
        case 0x273998u: goto label_273998;
        case 0x27399cu: goto label_27399c;
        case 0x2739a0u: goto label_2739a0;
        case 0x2739a4u: goto label_2739a4;
        case 0x2739a8u: goto label_2739a8;
        case 0x2739acu: goto label_2739ac;
        case 0x2739b0u: goto label_2739b0;
        case 0x2739b4u: goto label_2739b4;
        case 0x2739b8u: goto label_2739b8;
        case 0x2739bcu: goto label_2739bc;
        case 0x2739c0u: goto label_2739c0;
        case 0x2739c4u: goto label_2739c4;
        case 0x2739c8u: goto label_2739c8;
        case 0x2739ccu: goto label_2739cc;
        case 0x2739d0u: goto label_2739d0;
        case 0x2739d4u: goto label_2739d4;
        case 0x2739d8u: goto label_2739d8;
        case 0x2739dcu: goto label_2739dc;
        case 0x2739e0u: goto label_2739e0;
        case 0x2739e4u: goto label_2739e4;
        case 0x2739e8u: goto label_2739e8;
        case 0x2739ecu: goto label_2739ec;
        case 0x2739f0u: goto label_2739f0;
        case 0x2739f4u: goto label_2739f4;
        case 0x2739f8u: goto label_2739f8;
        case 0x2739fcu: goto label_2739fc;
        case 0x273a00u: goto label_273a00;
        case 0x273a04u: goto label_273a04;
        case 0x273a08u: goto label_273a08;
        case 0x273a0cu: goto label_273a0c;
        case 0x273a10u: goto label_273a10;
        case 0x273a14u: goto label_273a14;
        case 0x273a18u: goto label_273a18;
        case 0x273a1cu: goto label_273a1c;
        case 0x273a20u: goto label_273a20;
        case 0x273a24u: goto label_273a24;
        case 0x273a28u: goto label_273a28;
        case 0x273a2cu: goto label_273a2c;
        case 0x273a30u: goto label_273a30;
        case 0x273a34u: goto label_273a34;
        case 0x273a38u: goto label_273a38;
        case 0x273a3cu: goto label_273a3c;
        case 0x273a40u: goto label_273a40;
        case 0x273a44u: goto label_273a44;
        case 0x273a48u: goto label_273a48;
        case 0x273a4cu: goto label_273a4c;
        case 0x273a50u: goto label_273a50;
        case 0x273a54u: goto label_273a54;
        case 0x273a58u: goto label_273a58;
        case 0x273a5cu: goto label_273a5c;
        case 0x273a60u: goto label_273a60;
        case 0x273a64u: goto label_273a64;
        case 0x273a68u: goto label_273a68;
        case 0x273a6cu: goto label_273a6c;
        case 0x273a70u: goto label_273a70;
        case 0x273a74u: goto label_273a74;
        case 0x273a78u: goto label_273a78;
        case 0x273a7cu: goto label_273a7c;
        default: break;
    }

    ctx->pc = 0x2738e0u;

label_2738e0:
    // 0x2738e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2738e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2738e4:
    // 0x2738e4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2738e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2738e8:
    // 0x2738e8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2738e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2738ec:
    // 0x2738ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2738ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2738f0:
    // 0x2738f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2738f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2738f4:
    // 0x2738f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2738f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2738f8:
    // 0x2738f8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2738f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2738fc:
    // 0x2738fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2738fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_273900:
    // 0x273900: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x273900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_273904:
    // 0x273904: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x273904u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_273908:
    // 0x273908: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x273908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_27390c:
    // 0x27390c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x27390cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_273910:
    // 0x273910: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x273910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_273914:
    // 0x273914: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x273914u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_273918:
    // 0x273918: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x273918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27391c:
    // 0x27391c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x27391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_273920:
    // 0x273920: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
label_273924:
    if (ctx->pc == 0x273924u) {
        ctx->pc = 0x273924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273920u;
        // 0x273924: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273928u;
        goto label_273928;
    }
    ctx->pc = 0x273920u;
    {
        const bool branch_taken_0x273920 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x273924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273920u;
        // 0x273924: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273920) {
            ctx->pc = 0x273A34u;
            goto label_273a34;
        }
    }
    ctx->pc = 0x273928u;
label_273928:
    // 0x273928: 0x8f848f80  lw          $a0, -0x7080($gp)
    ctx->pc = 0x273928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
label_27392c:
    // 0x27392c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x27392cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273930:
    // 0x273930: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x273930u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273934:
    // 0x273934: 0xc0c84d8  jal         func_321360
label_273938:
    if (ctx->pc == 0x273938u) {
        ctx->pc = 0x273938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273934u;
        // 0x273938: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27393Cu;
        goto label_27393c;
    }
    ctx->pc = 0x273934u;
    SET_GPR_U32(ctx, 31, 0x27393Cu);
    ctx->pc = 0x273938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273934u;
    // 0x273938: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x273934u, 0x27393Cu)) {
        return;
    }
    ctx->pc = 0x27393Cu;
label_27393c:
    // 0x27393c: 0x10000003  b           . + 4 + (0x3 << 2)
label_273940:
    if (ctx->pc == 0x273940u) {
        ctx->pc = 0x273940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27393Cu;
        // 0x273940: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273944u;
        goto label_273944;
    }
    ctx->pc = 0x27393Cu;
    {
        const bool branch_taken_0x27393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27393Cu;
        // 0x273940: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27393c) {
            ctx->pc = 0x27394Cu;
            goto label_27394c;
        }
    }
    ctx->pc = 0x273944u;
label_273944:
    // 0x273944: 0x0  nop
    ctx->pc = 0x273944u;
    // NOP
label_273948:
    // 0x273948: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x273948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_27394c:
    // 0x27394c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27394cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_273950:
    // 0x273950: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_273954:
    if (ctx->pc == 0x273954u) {
        ctx->pc = 0x273954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273950u;
        // 0x273954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273958u;
        goto label_273958;
    }
    ctx->pc = 0x273950u;
    {
        const bool branch_taken_0x273950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273950u;
        // 0x273954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273950) {
            ctx->pc = 0x27397Cu;
            goto label_27397c;
        }
    }
    ctx->pc = 0x273958u;
label_273958:
    // 0x273958: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x273958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_27395c:
    // 0x27395c: 0x40f809  jalr        $v0
label_273960:
    if (ctx->pc == 0x273960u) {
        ctx->pc = 0x273960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27395Cu;
        // 0x273960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273964u;
        goto label_273964;
    }
    ctx->pc = 0x27395Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273964u);
        ctx->pc = 0x273960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27395Cu;
        // 0x273960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27395Cu, 0x273964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273964u;
label_273964:
    // 0x273964: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x273964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273968:
    // 0x273968: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x273968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_27396c:
    // 0x27396c: 0x5454fff6  bnel        $v0, $s4, . + 4 + (-0xA << 2)
label_273970:
    if (ctx->pc == 0x273970u) {
        ctx->pc = 0x273970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27396Cu;
        // 0x273970: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273974u;
        goto label_273974;
    }
    ctx->pc = 0x27396Cu;
    {
        const bool branch_taken_0x27396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x27396c) {
            ctx->pc = 0x273970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27396Cu;
            // 0x273970: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273948;
        }
    }
    ctx->pc = 0x273974u;
label_273974:
    // 0x273974: 0xac750038  sw          $s5, 0x38($v1)
    ctx->pc = 0x273974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 21));
label_273978:
    // 0x273978: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x273978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27397c:
    // 0x27397c: 0xc0c84d0  jal         func_321340
label_273980:
    if (ctx->pc == 0x273980u) {
        ctx->pc = 0x273980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27397Cu;
        // 0x273980: 0x8f848f80  lw          $a0, -0x7080($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273984u;
        goto label_273984;
    }
    ctx->pc = 0x27397Cu;
    SET_GPR_U32(ctx, 31, 0x273984u);
    ctx->pc = 0x273980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27397Cu;
    // 0x273980: 0x8f848f80  lw          $a0, -0x7080($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x27397Cu, 0x273984u)) {
        return;
    }
    ctx->pc = 0x273984u;
label_273984:
    // 0x273984: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
label_273988:
    if (ctx->pc == 0x273988u) {
        ctx->pc = 0x273988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273984u;
        // 0x273988: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27398Cu;
        goto label_27398c;
    }
    ctx->pc = 0x273984u;
    {
        const bool branch_taken_0x273984 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x273988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273984u;
        // 0x273988: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273984) {
            ctx->pc = 0x2739B8u;
            goto label_2739b8;
        }
    }
    ctx->pc = 0x27398Cu;
label_27398c:
    // 0x27398c: 0xc09cea0  jal         func_273A80
label_273990:
    if (ctx->pc == 0x273990u) {
        ctx->pc = 0x273994u;
        goto label_273994;
    }
    ctx->pc = 0x27398Cu;
    SET_GPR_U32(ctx, 31, 0x273994u);
    ctx->pc = 0x273A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273A80u, 0x27398Cu, 0x273994u)) {
        return;
    }
    ctx->pc = 0x273994u;
label_273994:
    // 0x273994: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x273994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_273998:
    // 0x273998: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x273998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27399c:
    // 0x27399c: 0x8c6353dc  lw          $v1, 0x53DC($v1)
    ctx->pc = 0x27399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21468)));
label_2739a0:
    // 0x2739a0: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_2739a4:
    if (ctx->pc == 0x2739A4u) {
        ctx->pc = 0x2739A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739A0u;
        // 0x2739a4: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2739A8u;
        goto label_2739a8;
    }
    ctx->pc = 0x2739A0u;
    {
        const bool branch_taken_0x2739a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739A0u;
        // 0x2739a4: 0xac440010  sw          $a0, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739a0) {
            ctx->pc = 0x273A4Cu;
            goto label_273a4c;
        }
    }
    ctx->pc = 0x2739A8u;
label_2739a8:
    // 0x2739a8: 0x60f809  jalr        $v1
label_2739ac:
    if (ctx->pc == 0x2739ACu) {
        ctx->pc = 0x2739B0u;
        goto label_2739b0;
    }
    ctx->pc = 0x2739A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2739B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2739A8u, 0x2739B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2739B0u;
label_2739b0:
    // 0x2739b0: 0x10000027  b           . + 4 + (0x27 << 2)
label_2739b4:
    if (ctx->pc == 0x2739B4u) {
        ctx->pc = 0x2739B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739B0u;
        // 0x2739b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2739B8u;
        goto label_2739b8;
    }
    ctx->pc = 0x2739B0u;
    {
        const bool branch_taken_0x2739b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739B0u;
        // 0x2739b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739b0) {
            ctx->pc = 0x273A50u;
            goto label_273a50;
        }
    }
    ctx->pc = 0x2739B8u;
label_2739b8:
    // 0x2739b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2739bc:
    if (ctx->pc == 0x2739BCu) {
        ctx->pc = 0x2739BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739B8u;
        // 0x2739bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2739C0u;
        goto label_2739c0;
    }
    ctx->pc = 0x2739B8u;
    {
        const bool branch_taken_0x2739b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2739BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739B8u;
        // 0x2739bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739b8) {
            ctx->pc = 0x2739CCu;
            goto label_2739cc;
        }
    }
    ctx->pc = 0x2739C0u;
label_2739c0:
    // 0x2739c0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2739c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2739c4:
    // 0x2739c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2739c8:
    if (ctx->pc == 0x2739C8u) {
        ctx->pc = 0x2739C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739C4u;
        // 0x2739c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2739CCu;
        goto label_2739cc;
    }
    ctx->pc = 0x2739C4u;
    {
        const bool branch_taken_0x2739c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739C4u;
        // 0x2739c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739c4) {
            ctx->pc = 0x2739D8u;
            goto label_2739d8;
        }
    }
    ctx->pc = 0x2739CCu;
label_2739cc:
    // 0x2739cc: 0xae560048  sw          $s6, 0x48($s2)
    ctx->pc = 0x2739ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 22));
label_2739d0:
    // 0x2739d0: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2739d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_2739d4:
    // 0x2739d4: 0xae57004c  sw          $s7, 0x4C($s2)
    ctx->pc = 0x2739d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 23));
label_2739d8:
    // 0x2739d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2739d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2739dc:
    // 0x2739dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2739e0:
    if (ctx->pc == 0x2739E0u) {
        ctx->pc = 0x2739E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739DCu;
        // 0x2739e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2739E4u;
        goto label_2739e4;
    }
    ctx->pc = 0x2739DCu;
    {
        const bool branch_taken_0x2739dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739DCu;
        // 0x2739e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739dc) {
            ctx->pc = 0x2739F4u;
            goto label_2739f4;
        }
    }
    ctx->pc = 0x2739E4u;
label_2739e4:
    // 0x2739e4: 0xae560048  sw          $s6, 0x48($s2)
    ctx->pc = 0x2739e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 22));
label_2739e8:
    // 0x2739e8: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2739e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_2739ec:
    // 0x2739ec: 0x36730010  ori         $s3, $s3, 0x10
    ctx->pc = 0x2739ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16);
label_2739f0:
    // 0x2739f0: 0xae57004c  sw          $s7, 0x4C($s2)
    ctx->pc = 0x2739f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 23));
label_2739f4:
    // 0x2739f4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2739f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2739f8:
    // 0x2739f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2739f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2739fc:
    // 0x2739fc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2739fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_273a00:
    // 0x273a00: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x273a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_273a04:
    // 0x273a04: 0x40f809  jalr        $v0
label_273a08:
    if (ctx->pc == 0x273A08u) {
        ctx->pc = 0x273A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A04u;
        // 0x273a08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273A0Cu;
        goto label_273a0c;
    }
    ctx->pc = 0x273A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273A0Cu);
        ctx->pc = 0x273A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A04u;
        // 0x273a08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273A04u, 0x273A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273A0Cu;
label_273a0c:
    // 0x273a0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273a10:
    // 0x273a10: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_273a14:
    if (ctx->pc == 0x273A14u) {
        ctx->pc = 0x273A18u;
        goto label_273a18;
    }
    ctx->pc = 0x273A10u;
    {
        const bool branch_taken_0x273a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x273a10) {
            ctx->pc = 0x273A20u;
            goto label_273a20;
        }
    }
    ctx->pc = 0x273A18u;
label_273a18:
    // 0x273a18: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x273a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_273a1c:
    // 0x273a1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x273a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273a20:
    // 0x273a20: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_273a24:
    if (ctx->pc == 0x273A24u) {
        ctx->pc = 0x273A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A20u;
        // 0x273a24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273A28u;
        goto label_273a28;
    }
    ctx->pc = 0x273A20u;
    {
        const bool branch_taken_0x273a20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A20u;
        // 0x273a24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a20) {
            ctx->pc = 0x273A2Cu;
            goto label_273a2c;
        }
    }
    ctx->pc = 0x273A28u;
label_273a28:
    // 0x273a28: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x273a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_273a2c:
    // 0x273a2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_273a30:
    if (ctx->pc == 0x273A30u) {
        ctx->pc = 0x273A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A2Cu;
        // 0x273a30: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273A34u;
        goto label_273a34;
    }
    ctx->pc = 0x273A2Cu;
    {
        const bool branch_taken_0x273a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A2Cu;
        // 0x273a30: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a2c) {
            ctx->pc = 0x273A50u;
            goto label_273a50;
        }
    }
    ctx->pc = 0x273A34u;
label_273a34:
    // 0x273a34: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x273a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_273a38:
    // 0x273a38: 0x8c4253dc  lw          $v0, 0x53DC($v0)
    ctx->pc = 0x273a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21468)));
label_273a3c:
    // 0x273a3c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_273a40:
    if (ctx->pc == 0x273A40u) {
        ctx->pc = 0x273A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A3Cu;
        // 0x273a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273A44u;
        goto label_273a44;
    }
    ctx->pc = 0x273A3Cu;
    {
        const bool branch_taken_0x273a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273a3c) {
            ctx->pc = 0x273A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273A3Cu;
            // 0x273a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273A50u;
            goto label_273a50;
        }
    }
    ctx->pc = 0x273A44u;
label_273a44:
    // 0x273a44: 0x40f809  jalr        $v0
label_273a48:
    if (ctx->pc == 0x273A48u) {
        ctx->pc = 0x273A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A44u;
        // 0x273a48: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273A4Cu;
        goto label_273a4c;
    }
    ctx->pc = 0x273A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273A4Cu);
        ctx->pc = 0x273A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A44u;
        // 0x273a48: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273A44u, 0x273A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273A4Cu;
label_273a4c:
    // 0x273a4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273a50:
    // 0x273a50: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x273a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_273a54:
    // 0x273a54: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x273a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_273a58:
    // 0x273a58: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x273a58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_273a5c:
    // 0x273a5c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x273a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_273a60:
    // 0x273a60: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x273a60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_273a64:
    // 0x273a64: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x273a64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_273a68:
    // 0x273a68: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x273a68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_273a6c:
    // 0x273a6c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x273a6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_273a70:
    // 0x273a70: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x273a70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_273a74:
    // 0x273a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_273a78:
    // 0x273a78: 0x3e00008  jr          $ra
label_273a7c:
    if (ctx->pc == 0x273A7Cu) {
        ctx->pc = 0x273A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A78u;
        // 0x273a7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273A80u;
        goto label_fallthrough_0x273a78;
    }
    ctx->pc = 0x273A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A78u;
        // 0x273a7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x273a78:
    ctx->pc = 0x273A80u;
}
