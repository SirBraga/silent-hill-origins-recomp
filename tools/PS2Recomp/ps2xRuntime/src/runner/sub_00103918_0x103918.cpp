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

// Function: sub_00103918
// Address: 0x103918 - 0x103a00
void sub_00103918_0x103918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103918_0x103918");
#endif

    switch (ctx->pc) {
        case 0x103918u: goto label_103918;
        case 0x10391cu: goto label_10391c;
        case 0x103920u: goto label_103920;
        case 0x103924u: goto label_103924;
        case 0x103928u: goto label_103928;
        case 0x10392cu: goto label_10392c;
        case 0x103930u: goto label_103930;
        case 0x103934u: goto label_103934;
        case 0x103938u: goto label_103938;
        case 0x10393cu: goto label_10393c;
        case 0x103940u: goto label_103940;
        case 0x103944u: goto label_103944;
        case 0x103948u: goto label_103948;
        case 0x10394cu: goto label_10394c;
        case 0x103950u: goto label_103950;
        case 0x103954u: goto label_103954;
        case 0x103958u: goto label_103958;
        case 0x10395cu: goto label_10395c;
        case 0x103960u: goto label_103960;
        case 0x103964u: goto label_103964;
        case 0x103968u: goto label_103968;
        case 0x10396cu: goto label_10396c;
        case 0x103970u: goto label_103970;
        case 0x103974u: goto label_103974;
        case 0x103978u: goto label_103978;
        case 0x10397cu: goto label_10397c;
        case 0x103980u: goto label_103980;
        case 0x103984u: goto label_103984;
        case 0x103988u: goto label_103988;
        case 0x10398cu: goto label_10398c;
        case 0x103990u: goto label_103990;
        case 0x103994u: goto label_103994;
        case 0x103998u: goto label_103998;
        case 0x10399cu: goto label_10399c;
        case 0x1039a0u: goto label_1039a0;
        case 0x1039a4u: goto label_1039a4;
        case 0x1039a8u: goto label_1039a8;
        case 0x1039acu: goto label_1039ac;
        case 0x1039b0u: goto label_1039b0;
        case 0x1039b4u: goto label_1039b4;
        case 0x1039b8u: goto label_1039b8;
        case 0x1039bcu: goto label_1039bc;
        case 0x1039c0u: goto label_1039c0;
        case 0x1039c4u: goto label_1039c4;
        case 0x1039c8u: goto label_1039c8;
        case 0x1039ccu: goto label_1039cc;
        case 0x1039d0u: goto label_1039d0;
        case 0x1039d4u: goto label_1039d4;
        case 0x1039d8u: goto label_1039d8;
        case 0x1039dcu: goto label_1039dc;
        case 0x1039e0u: goto label_1039e0;
        case 0x1039e4u: goto label_1039e4;
        case 0x1039e8u: goto label_1039e8;
        case 0x1039ecu: goto label_1039ec;
        case 0x1039f0u: goto label_1039f0;
        case 0x1039f4u: goto label_1039f4;
        case 0x1039f8u: goto label_1039f8;
        case 0x1039fcu: goto label_1039fc;
        default: break;
    }

    ctx->pc = 0x103918u;

label_103918:
    // 0x103918: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x103918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10391c:
    // 0x10391c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x10391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_103920:
    // 0x103920: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x103920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_103924:
    // 0x103924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x103924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_103928:
    // 0x103928: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x103928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_10392c:
    // 0x10392c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10392cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_103930:
    // 0x103930: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x103930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_103934:
    // 0x103934: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x103934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_103938:
    // 0x103938: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x103938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_10393c:
    // 0x10393c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_103940:
    // 0x103940: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x103940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_103944:
    // 0x103944: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_103948:
    if (ctx->pc == 0x103948u) {
        ctx->pc = 0x103948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103944u;
        // 0x103948: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10394Cu;
        goto label_10394c;
    }
    ctx->pc = 0x103944u;
    {
        const bool branch_taken_0x103944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103944u;
        // 0x103948: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103944) {
            ctx->pc = 0x1039E0u;
            goto label_1039e0;
        }
    }
    ctx->pc = 0x10394Cu;
label_10394c:
    // 0x10394c: 0x8e02025c  lw          $v0, 0x25C($s0)
    ctx->pc = 0x10394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_103950:
    // 0x103950: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x103950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_103954:
    // 0x103954: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_103958:
    if (ctx->pc == 0x103958u) {
        ctx->pc = 0x103958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103954u;
        // 0x103958: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10395Cu;
        goto label_10395c;
    }
    ctx->pc = 0x103954u;
    {
        const bool branch_taken_0x103954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103954u;
        // 0x103958: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103954) {
            ctx->pc = 0x1039E0u;
            goto label_1039e0;
        }
    }
    ctx->pc = 0x10395Cu;
label_10395c:
    // 0x10395c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x10395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_103960:
    // 0x103960: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x103960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_103964:
    // 0x103964: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x103964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_103968:
    // 0x103968: 0x60f809  jalr        $v1
label_10396c:
    if (ctx->pc == 0x10396Cu) {
        ctx->pc = 0x10396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103968u;
        // 0x10396c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103970u;
        goto label_103970;
    }
    ctx->pc = 0x103968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x103970u);
        ctx->pc = 0x10396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103968u;
        // 0x10396c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103968u, 0x103970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103970u;
label_103970:
    // 0x103970: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x103970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_103974:
    // 0x103974: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_103978:
    if (ctx->pc == 0x103978u) {
        ctx->pc = 0x103978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103974u;
        // 0x103978: 0x8c518668  lw          $s1, -0x7998($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10397Cu;
        goto label_10397c;
    }
    ctx->pc = 0x103974u;
    {
        const bool branch_taken_0x103974 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x103978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103974u;
        // 0x103978: 0x8c518668  lw          $s1, -0x7998($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103974) {
            ctx->pc = 0x103984u;
            goto label_103984;
        }
    }
    ctx->pc = 0x10397Cu;
label_10397c:
    // 0x10397c: 0x10000002  b           . + 4 + (0x2 << 2)
label_103980:
    if (ctx->pc == 0x103980u) {
        ctx->pc = 0x103980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10397Cu;
        // 0x103980: 0x8e050270  lw          $a1, 0x270($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103984u;
        goto label_103984;
    }
    ctx->pc = 0x10397Cu;
    {
        const bool branch_taken_0x10397c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10397Cu;
        // 0x103980: 0x8e050270  lw          $a1, 0x270($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10397c) {
            ctx->pc = 0x103988u;
            goto label_103988;
        }
    }
    ctx->pc = 0x103984u;
label_103984:
    // 0x103984: 0x8e05026c  lw          $a1, 0x26C($s0)
    ctx->pc = 0x103984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_103988:
    // 0x103988: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x103988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_10398c:
    // 0x10398c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x10398cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_103990:
    // 0x103990: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x103990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_103994:
    // 0x103994: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x103994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_103998:
    // 0x103998: 0xc059328  jal         func_164CA0
label_10399c:
    if (ctx->pc == 0x10399Cu) {
        ctx->pc = 0x10399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103998u;
        // 0x10399c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1039A0u;
        goto label_1039a0;
    }
    ctx->pc = 0x103998u;
    SET_GPR_U32(ctx, 31, 0x1039A0u);
    ctx->pc = 0x10399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103998u;
    // 0x10399c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164CA0u, 0x103998u, 0x1039A0u)) {
        return;
    }
    ctx->pc = 0x1039A0u;
label_1039a0:
    // 0x1039a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1039a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1039a4:
    // 0x1039a4: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x1039a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_1039a8:
    // 0x1039a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1039ac:
    if (ctx->pc == 0x1039ACu) {
        ctx->pc = 0x1039ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039A8u;
        // 0x1039ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1039B0u;
        goto label_1039b0;
    }
    ctx->pc = 0x1039A8u;
    {
        const bool branch_taken_0x1039a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1039ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039A8u;
        // 0x1039ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1039a8) {
            ctx->pc = 0x1039E0u;
            goto label_1039e0;
        }
    }
    ctx->pc = 0x1039B0u;
label_1039b0:
    // 0x1039b0: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x1039b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_1039b4:
    // 0x1039b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1039b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1039b8:
    // 0x1039b8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1039b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1039bc:
    // 0x1039bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1039bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1039c0:
    // 0x1039c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1039c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1039c4:
    // 0x1039c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1039c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1039c8:
    // 0x1039c8: 0xac45021c  sw          $a1, 0x21C($v0)
    ctx->pc = 0x1039c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 5));
label_1039cc:
    // 0x1039cc: 0xae03025c  sw          $v1, 0x25C($s0)
    ctx->pc = 0x1039ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 3));
label_1039d0:
    // 0x1039d0: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x1039d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_1039d4:
    // 0x1039d4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1039d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1039d8:
    // 0x1039d8: 0xc0595c6  jal         func_165718
label_1039dc:
    if (ctx->pc == 0x1039DCu) {
        ctx->pc = 0x1039DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039D8u;
        // 0x1039dc: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1039E0u;
        goto label_1039e0;
    }
    ctx->pc = 0x1039D8u;
    SET_GPR_U32(ctx, 31, 0x1039E0u);
    ctx->pc = 0x1039DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039D8u;
    // 0x1039dc: 0x2300b  movn        $a2, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165718u, 0x1039D8u, 0x1039E0u)) {
        return;
    }
    ctx->pc = 0x1039E0u;
label_1039e0:
    // 0x1039e0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1039e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1039e4:
    // 0x1039e4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1039e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1039e8:
    // 0x1039e8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1039e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1039ec:
    // 0x1039ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1039ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1039f0:
    // 0x1039f0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1039f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1039f4:
    // 0x1039f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1039f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1039f8:
    // 0x1039f8: 0x3e00008  jr          $ra
label_1039fc:
    if (ctx->pc == 0x1039FCu) {
        ctx->pc = 0x1039FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039F8u;
        // 0x1039fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103A00u;
        goto label_fallthrough_0x1039f8;
    }
    ctx->pc = 0x1039F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1039FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039F8u;
        // 0x1039fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1039F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1039f8:
    ctx->pc = 0x103A00u;
}
