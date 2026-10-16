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

// Function: sub_0010DB38
// Address: 0x10db38 - 0x10e140
void sub_0010DB38_0x10db38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DB38_0x10db38");
#endif

    switch (ctx->pc) {
        case 0x10db68u: goto label_10db68;
        case 0x10dc10u: goto label_10dc10;
        case 0x10dc30u: goto label_10dc30;
        case 0x10dc44u: goto label_10dc44;
        case 0x10dc68u: goto label_10dc68;
        case 0x10dc7cu: goto label_10dc7c;
        case 0x10dc8cu: goto label_10dc8c;
        case 0x10dca4u: goto label_10dca4;
        case 0x10dcacu: goto label_10dcac;
        case 0x10dcb4u: goto label_10dcb4;
        case 0x10dcc8u: goto label_10dcc8;
        case 0x10dce8u: goto label_10dce8;
        case 0x10dd14u: goto label_10dd14;
        case 0x10dd28u: goto label_10dd28;
        case 0x10dd34u: goto label_10dd34;
        case 0x10dd74u: goto label_10dd74;
        case 0x10ddd4u: goto label_10ddd4;
        case 0x10de24u: goto label_10de24;
        case 0x10de78u: goto label_10de78;
        case 0x10df1cu: goto label_10df1c;
        case 0x10df2cu: goto label_10df2c;
        case 0x10df64u: goto label_10df64;
        case 0x10df7cu: goto label_10df7c;
        case 0x10dfccu: goto label_10dfcc;
        case 0x10dff0u: goto label_10dff0;
        case 0x10e06cu: goto label_10e06c;
        case 0x10e0c8u: goto label_10e0c8;
        case 0x10e11cu: goto label_10e11c;
        default: break;
    }

    ctx->pc = 0x10db38u;

    // 0x10db38: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x10db38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x10db3c: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x10db3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x10db40: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x10db40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x10db44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10db44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db48: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x10db48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x10db4c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10db4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10db50: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x10db50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x10db54: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x10db54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x10db58: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x10db58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x10db5c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x10db5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x10db60: 0xc0ba768  jal         func_2E9DA0
    ctx->pc = 0x10DB60u;
    SET_GPR_U32(ctx, 31, 0x10DB68u);
    ctx->pc = 0x10DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB60u;
    // 0x10db64: 0x8e241244  lw          $a0, 0x1244($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9DA0u, 0x10DB60u, 0x10DB68u)) {
        return;
    }
    ctx->pc = 0x10DB68u;
label_10db68:
    // 0x10db68: 0xc62013e0  lwc1        $f0, 0x13E0($s1)
    ctx->pc = 0x10db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10db6c: 0x27a40114  addiu       $a0, $sp, 0x114
    ctx->pc = 0x10db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x10db70: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10db70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10db74: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x10db74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x10db78: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x10db78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x10db7c: 0xae2213e4  sw          $v0, 0x13E4($s1)
    ctx->pc = 0x10db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5092), GPR_U32(ctx, 2));
    // 0x10db80: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x10db80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x10db84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10db84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10db88: 0x0  nop
    ctx->pc = 0x10db88u;
    // NOP
    // 0x10db8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x10DB8Cu;
    {
        const bool branch_taken_0x10db8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB8Cu;
        // 0x10db90: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db8c) {
            ctx->pc = 0x10DB98u;
            goto label_10db98;
        }
    }
    ctx->pc = 0x10DB94u;
    // 0x10db94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x10db94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10db98:
    // 0x10db98: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x10db98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10db9c: 0x263312d0  addiu       $s3, $s1, 0x12D0
    ctx->pc = 0x10db9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
    // 0x10dba0: 0x8e2313e8  lw          $v1, 0x13E8($s1)
    ctx->pc = 0x10dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5096)));
    // 0x10dba4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x10dba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x10dba8: 0x1040013b  beqz        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x10DBA8u;
    {
        const bool branch_taken_0x10dba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBA8u;
        // 0x10dbac: 0xe62013e0  swc1        $f0, 0x13E0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5088), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dba8) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10DBB0u;
    // 0x10dbb0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10dbb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10dbb8: 0x2442a180  addiu       $v0, $v0, -0x5E80
    ctx->pc = 0x10dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943104));
    // 0x10dbbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10dbc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10dbc4: 0x800008  jr          $a0
    ctx->pc = 0x10DBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10DBCCu: goto label_10dbcc;
            case 0x10DBECu: goto label_10dbec;
            case 0x10DD40u: goto label_10dd40;
            case 0x10DF8Cu: goto label_10df8c;
            case 0x10E03Cu: goto label_10e03c;
            case 0x10E078u: goto label_10e078;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DBC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10DBCCu;
label_10dbcc:
    // 0x10dbcc: 0x82221358  lb          $v0, 0x1358($s1)
    ctx->pc = 0x10dbccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4952)));
    // 0x10dbd0: 0x10400131  beqz        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x10DBD0u;
    {
        const bool branch_taken_0x10dbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBD0u;
        // 0x10dbd4: 0x263312d0  addiu       $s3, $s1, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbd0) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10DBD8u;
    // 0x10dbd8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10dbdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dbe0: 0xae2213ec  sw          $v0, 0x13EC($s1)
    ctx->pc = 0x10dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5100), GPR_U32(ctx, 2));
    // 0x10dbe4: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x10DBE4u;
    {
        const bool branch_taken_0x10dbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBE4u;
        // 0x10dbe8: 0xae2313e8  sw          $v1, 0x13E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5096), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbe4) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10DBECu;
label_10dbec:
    // 0x10dbec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10dbf0: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x10dbf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbf4: 0x9043a128  lbu         $v1, -0x5ED8($v0)
    ctx->pc = 0x10dbf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x68A128u));
    // 0x10dbf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbfc: 0x27a40081  addiu       $a0, $sp, 0x81
    ctx->pc = 0x10dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 129));
    // 0x10dc00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10dc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc04: 0xa3a30080  sb          $v1, 0x80($sp)
    ctx->pc = 0x10dc04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 3));
    // 0x10dc08: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x10DC08u;
    SET_GPR_U32(ctx, 31, 0x10DC10u);
    ctx->pc = 0x10DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC08u;
    // 0x10dc0c: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x10DC08u, 0x10DC10u)) {
        return;
    }
    ctx->pc = 0x10DC10u;
label_10dc10:
    // 0x10dc10: 0x26321358  addiu       $s2, $s1, 0x1358
    ctx->pc = 0x10dc10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4952));
    // 0x10dc14: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x10DC14u;
    {
        const bool branch_taken_0x10dc14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC14u;
        // 0x10dc18: 0x9202a128  lbu         $v0, -0x5ED8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294943016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc14) {
            ctx->pc = 0x10DC50u;
            goto label_10dc50;
        }
    }
    ctx->pc = 0x10DC1Cu;
    // 0x10dc1c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10dc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10dc20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10dc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc24: 0x24a5a140  addiu       $a1, $a1, -0x5EC0
    ctx->pc = 0x10dc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943040));
    // 0x10dc28: 0xc0c4b78  jal         func_312DE0
    ctx->pc = 0x10DC28u;
    SET_GPR_U32(ctx, 31, 0x10DC30u);
    ctx->pc = 0x10DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC28u;
    // 0x10dc2c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x10DC28u, 0x10DC30u)) {
        return;
    }
    ctx->pc = 0x10DC30u;
label_10dc30:
    // 0x10dc30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10DC30u;
    {
        const bool branch_taken_0x10dc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC30u;
        // 0x10dc34: 0x9202a128  lbu         $v0, -0x5ED8($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294943016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc30) {
            ctx->pc = 0x10DC50u;
            goto label_10dc50;
        }
    }
    ctx->pc = 0x10DC38u;
    // 0x10dc38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10dc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc3c: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x10DC3Cu;
    SET_GPR_U32(ctx, 31, 0x10DC44u);
    ctx->pc = 0x10DC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC3Cu;
    // 0x10dc40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x10DC3Cu, 0x10DC44u)) {
        return;
    }
    ctx->pc = 0x10DC44u;
label_10dc44:
    // 0x10dc44: 0x263312d0  addiu       $s3, $s1, 0x12D0
    ctx->pc = 0x10dc44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
    // 0x10dc48: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10DC48u;
    {
        const bool branch_taken_0x10dc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC48u;
        // 0x10dc4c: 0x26251220  addiu       $a1, $s1, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc48) {
            ctx->pc = 0x10DD08u;
            goto label_10dd08;
        }
    }
    ctx->pc = 0x10DC50u;
label_10dc50:
    // 0x10dc50: 0x27a40101  addiu       $a0, $sp, 0x101
    ctx->pc = 0x10dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
    // 0x10dc54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10dc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc58: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x10dc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10dc5c: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x10dc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
    // 0x10dc60: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x10DC60u;
    SET_GPR_U32(ctx, 31, 0x10DC68u);
    ctx->pc = 0x10DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC60u;
    // 0x10dc64: 0x263312d0  addiu       $s3, $s1, 0x12D0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x10DC60u, 0x10DC68u)) {
        return;
    }
    ctx->pc = 0x10DC68u;
label_10dc68:
    // 0x10dc68: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x10dc68u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10dc6c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10dc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10dc70: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x10dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x10dc74: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x10DC74u;
    SET_GPR_U32(ctx, 31, 0x10DC7Cu);
    ctx->pc = 0x10DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC74u;
    // 0x10dc78: 0x24a5a130  addiu       $a1, $a1, -0x5ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x10DC74u, 0x10DC7Cu)) {
        return;
    }
    ctx->pc = 0x10DC7Cu;
label_10dc7c:
    // 0x10dc7c: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x10dc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x10dc80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dc84: 0xc08175a  jal         func_205D68
    ctx->pc = 0x10DC84u;
    SET_GPR_U32(ctx, 31, 0x10DC8Cu);
    ctx->pc = 0x10DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC84u;
    // 0x10dc88: 0x2610a138  addiu       $s0, $s0, -0x5EC8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205D68u, 0x10DC84u, 0x10DC8Cu)) {
        return;
    }
    ctx->pc = 0x10DC8Cu;
label_10dc8c:
    // 0x10dc8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10dc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x10dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x10dc94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10dc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc98: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x10dc98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc9c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x10DC9Cu;
    SET_GPR_U32(ctx, 31, 0x10DCA4u);
    ctx->pc = 0x10DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC9Cu;
    // 0x10dca0: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x10DC9Cu, 0x10DCA4u)) {
        return;
    }
    ctx->pc = 0x10DCA4u;
label_10dca4:
    // 0x10dca4: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x10DCA4u;
    SET_GPR_U32(ctx, 31, 0x10DCACu);
    ctx->pc = 0x10DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCA4u;
    // 0x10dca8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x10DCA4u, 0x10DCACu)) {
        return;
    }
    ctx->pc = 0x10DCACu;
label_10dcac:
    // 0x10dcac: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x10DCACu;
    SET_GPR_U32(ctx, 31, 0x10DCB4u);
    ctx->pc = 0x10DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCACu;
    // 0x10dcb0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x10DCACu, 0x10DCB4u)) {
        return;
    }
    ctx->pc = 0x10DCB4u;
label_10dcb4:
    // 0x10dcb4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10dcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10dcb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10dcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dcbc: 0x24a5a150  addiu       $a1, $a1, -0x5EB0
    ctx->pc = 0x10dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943056));
    // 0x10dcc0: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x10DCC0u;
    SET_GPR_U32(ctx, 31, 0x10DCC8u);
    ctx->pc = 0x10DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCC0u;
    // 0x10dcc4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x10DCC0u, 0x10DCC8u)) {
        return;
    }
    ctx->pc = 0x10DCC8u;
label_10dcc8:
    // 0x10dcc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10dcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dccc: 0x26251220  addiu       $a1, $s1, 0x1220
    ctx->pc = 0x10dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4640));
    // 0x10dcd0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x10dcd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10dcd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10DCD4u;
    {
        const bool branch_taken_0x10dcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCD4u;
        // 0x10dcd8: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dcd4) {
            ctx->pc = 0x10DD08u;
            goto label_10dd08;
        }
    }
    ctx->pc = 0x10DCDCu;
    // 0x10dcdc: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x10dcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x10dce0: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x10dce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x10dce4: 0x0  nop
    ctx->pc = 0x10dce4u;
    // NOP
label_10dce8:
    // 0x10dce8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x10dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x10dcec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x10dcecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x10dcf0: 0x50470001  beql        $v0, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x10DCF0u;
    {
        const bool branch_taken_0x10dcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x10dcf0) {
            ctx->pc = 0x10DCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DCF0u;
            // 0x10dcf4: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DCF8u;
            goto label_10dcf8;
        }
    }
    ctx->pc = 0x10DCF8u;
label_10dcf8:
    // 0x10dcf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10dcfc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x10dcfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10dd00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10DD00u;
    {
        const bool branch_taken_0x10dd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD00u;
        // 0x10dd04: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd00) {
            ctx->pc = 0x10DCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dce8;
        }
    }
    ctx->pc = 0x10DD08u;
label_10dd08:
    // 0x10dd08: 0x8e241244  lw          $a0, 0x1244($s1)
    ctx->pc = 0x10dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4676)));
    // 0x10dd0c: 0xc0ba720  jal         func_2E9C80
    ctx->pc = 0x10DD0Cu;
    SET_GPR_U32(ctx, 31, 0x10DD14u);
    ctx->pc = 0x10DD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD0Cu;
    // 0x10dd10: 0xae3d1220  sw          $sp, 0x1220($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4640), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9C80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9C80u, 0x10DD0Cu, 0x10DD14u)) {
        return;
    }
    ctx->pc = 0x10DD14u;
label_10dd14:
    // 0x10dd14: 0x8e301244  lw          $s0, 0x1244($s1)
    ctx->pc = 0x10dd14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4676)));
    // 0x10dd18: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DD18u;
    {
        const bool branch_taken_0x10dd18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD18u;
        // 0x10dd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd18) {
            ctx->pc = 0x10DD34u;
            goto label_10dd34;
        }
    }
    ctx->pc = 0x10DD20u;
    // 0x10dd20: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x10DD20u;
    SET_GPR_U32(ctx, 31, 0x10DD28u);
    ctx->pc = 0x10DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD20u;
    // 0x10dd24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x10DD20u, 0x10DD28u)) {
        return;
    }
    ctx->pc = 0x10DD28u;
label_10dd28:
    // 0x10dd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10dd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd2c: 0xc0ba718  jal         func_2E9C60
    ctx->pc = 0x10DD2Cu;
    SET_GPR_U32(ctx, 31, 0x10DD34u);
    ctx->pc = 0x10DD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD2Cu;
    // 0x10dd30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9C60u, 0x10DD2Cu, 0x10DD34u)) {
        return;
    }
    ctx->pc = 0x10DD34u;
label_10dd34:
    // 0x10dd34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10dd38: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x10DD38u;
    {
        const bool branch_taken_0x10dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD38u;
        // 0x10dd3c: 0xae2213e8  sw          $v0, 0x13E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd38) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10DD40u;
label_10dd40:
    // 0x10dd40: 0x8e2313e4  lw          $v1, 0x13E4($s1)
    ctx->pc = 0x10dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5092)));
    // 0x10dd44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10dd48: 0x14620060  bne         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x10DD48u;
    {
        const bool branch_taken_0x10dd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD48u;
        // 0x10dd4c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd48) {
            ctx->pc = 0x10DECCu;
            goto label_10decc;
        }
    }
    ctx->pc = 0x10DD50u;
    // 0x10dd50: 0x262512d0  addiu       $a1, $s1, 0x12D0
    ctx->pc = 0x10dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
    // 0x10dd54: 0x26261248  addiu       $a2, $s1, 0x1248
    ctx->pc = 0x10dd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4680));
    // 0x10dd58: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x10dd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x10dd5c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x10dd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x10dd60: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10DD60u;
    {
        const bool branch_taken_0x10dd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD60u;
        // 0x10dd64: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd60) {
            ctx->pc = 0x10DDC8u;
            goto label_10ddc8;
        }
    }
    ctx->pc = 0x10DD68u;
    // 0x10dd68: 0x26221350  addiu       $v0, $s1, 0x1350
    ctx->pc = 0x10dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4944));
    // 0x10dd6c: 0x26271358  addiu       $a3, $s1, 0x1358
    ctx->pc = 0x10dd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4952));
    // 0x10dd70: 0x262813d8  addiu       $t0, $s1, 0x13D8
    ctx->pc = 0x10dd70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 5080));
label_10dd74:
    // 0x10dd74: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x10dd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10dd78: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x10dd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10dd7c: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x10dd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x10dd80: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x10dd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x10dd84: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x10dd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x10dd88: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x10dd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x10dd8c: 0x68aa001f  ldl         $t2, 0x1F($a1)
    ctx->pc = 0x10dd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x10dd90: 0x6caa0018  ldr         $t2, 0x18($a1)
    ctx->pc = 0x10dd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x10dd94: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x10dd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10dd98: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x10dd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10dd9c: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x10dd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10dda0: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x10dda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10dda4: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x10dda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10dda8: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x10dda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10ddac: 0xb0ca001f  sdl         $t2, 0x1F($a2)
    ctx->pc = 0x10ddacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10ddb0: 0xb4ca0018  sdr         $t2, 0x18($a2)
    ctx->pc = 0x10ddb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10ddb4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10ddb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x10ddb8: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10DDB8u;
    {
        const bool branch_taken_0x10ddb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDB8u;
        // 0x10ddbc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ddb8) {
            ctx->pc = 0x10DD74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dd74;
        }
    }
    ctx->pc = 0x10DDC0u;
    // 0x10ddc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10DDC0u;
    {
        const bool branch_taken_0x10ddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDC0u;
        // 0x10ddc4: 0xf31025  or          $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ddc0) {
            ctx->pc = 0x10DE04u;
            goto label_10de04;
        }
    }
    ctx->pc = 0x10DDC8u;
label_10ddc8:
    // 0x10ddc8: 0x26221350  addiu       $v0, $s1, 0x1350
    ctx->pc = 0x10ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4944));
    // 0x10ddcc: 0x26271358  addiu       $a3, $s1, 0x1358
    ctx->pc = 0x10ddccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4952));
    // 0x10ddd0: 0x262813d8  addiu       $t0, $s1, 0x13D8
    ctx->pc = 0x10ddd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 5080));
label_10ddd4:
    // 0x10ddd4: 0xdcab0000  ld          $t3, 0x0($a1)
    ctx->pc = 0x10ddd4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10ddd8: 0xdcac0008  ld          $t4, 0x8($a1)
    ctx->pc = 0x10ddd8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10dddc: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x10dddcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10dde0: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x10dde0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x10dde4: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x10dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x10dde8: 0xfccc0008  sd          $t4, 0x8($a2)
    ctx->pc = 0x10dde8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 12));
    // 0x10ddec: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x10ddecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x10ddf0: 0xfcc40018  sd          $a0, 0x18($a2)
    ctx->pc = 0x10ddf0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 4));
    // 0x10ddf4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x10ddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x10ddf8: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10DDF8u;
    {
        const bool branch_taken_0x10ddf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDF8u;
        // 0x10ddfc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ddf8) {
            ctx->pc = 0x10DDD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ddd4;
        }
    }
    ctx->pc = 0x10DE00u;
    // 0x10de00: 0xf31025  or          $v0, $a3, $s3
    ctx->pc = 0x10de00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
label_10de04:
    // 0x10de04: 0x68a90007  ldl         $t1, 0x7($a1)
    ctx->pc = 0x10de04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x10de08: 0x6ca90000  ldr         $t1, 0x0($a1)
    ctx->pc = 0x10de08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x10de0c: 0xb0c90007  sdl         $t1, 0x7($a2)
    ctx->pc = 0x10de0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10de10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10de10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de14: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x10de14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de18: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x10de18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x10de1c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10DE1Cu;
    {
        const bool branch_taken_0x10de1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE1Cu;
        // 0x10de20: 0xb4c90000  sdr         $t1, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de1c) {
            ctx->pc = 0x10DE78u;
            goto label_10de78;
        }
    }
    ctx->pc = 0x10DE24u;
label_10de24:
    // 0x10de24: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x10de24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10de28: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x10de28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10de2c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x10de2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x10de30: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x10de30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x10de34: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x10de34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x10de38: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x10de38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x10de3c: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x10de3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x10de40: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x10de40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x10de44: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x10de44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10de48: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x10de48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10de4c: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x10de4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10de50: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x10de50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10de54: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x10de54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10de58: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x10de58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10de5c: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x10de5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10de60: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x10de60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10de64: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x10de64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x10de68: 0x1468ffee  bne         $v1, $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10DE68u;
    {
        const bool branch_taken_0x10de68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x10DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE68u;
        // 0x10de6c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de68) {
            ctx->pc = 0x10DE24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10de24;
        }
    }
    ctx->pc = 0x10DE70u;
    // 0x10de70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10DE70u;
    {
        const bool branch_taken_0x10de70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10de70) {
            ctx->pc = 0x10DEA4u;
            goto label_10dea4;
        }
    }
    ctx->pc = 0x10DE78u;
label_10de78:
    // 0x10de78: 0xdc6a0000  ld          $t2, 0x0($v1)
    ctx->pc = 0x10de78u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10de7c: 0xdc6b0008  ld          $t3, 0x8($v1)
    ctx->pc = 0x10de7cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10de80: 0xdc6c0010  ld          $t4, 0x10($v1)
    ctx->pc = 0x10de80u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x10de84: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x10de84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x10de88: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x10de88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x10de8c: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x10de8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x10de90: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x10de90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x10de94: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x10de94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x10de98: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x10de98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x10de9c: 0x1468fff6  bne         $v1, $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10DE9Cu;
    {
        const bool branch_taken_0x10de9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x10DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE9Cu;
        // 0x10dea0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de9c) {
            ctx->pc = 0x10DE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10de78;
        }
    }
    ctx->pc = 0x10DEA4u;
label_10dea4:
    // 0x10dea4: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x10dea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x10dea8: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x10dea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x10deac: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x10deacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10deb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10deb4: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x10deb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10deb8: 0xa2201358  sb          $zero, 0x1358($s1)
    ctx->pc = 0x10deb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4952), (uint8_t)GPR_U32(ctx, 0));
    // 0x10debc: 0xace00084  sw          $zero, 0x84($a3)
    ctx->pc = 0x10debcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 0));
    // 0x10dec0: 0xace00080  sw          $zero, 0x80($a3)
    ctx->pc = 0x10dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 0));
    // 0x10dec4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x10DEC4u;
    {
        const bool branch_taken_0x10dec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEC4u;
        // 0x10dec8: 0xae2213e8  sw          $v0, 0x13E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dec4) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10DECCu;
label_10decc:
    // 0x10decc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DECCu;
    {
        const bool branch_taken_0x10decc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DECCu;
        // 0x10ded0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10decc) {
            ctx->pc = 0x10DEDCu;
            goto label_10dedc;
        }
    }
    ctx->pc = 0x10DED4u;
    // 0x10ded4: 0x14620070  bne         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x10DED4u;
    {
        const bool branch_taken_0x10ded4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DED4u;
        // 0x10ded8: 0x263312d0  addiu       $s3, $s1, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ded4) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10DEDCu;
label_10dedc:
    // 0x10dedc: 0x8e2213ec  lw          $v0, 0x13EC($s1)
    ctx->pc = 0x10dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5100)));
    // 0x10dee0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10dee4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DEE4u;
    {
        const bool branch_taken_0x10dee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEE4u;
        // 0x10dee8: 0xae2213ec  sw          $v0, 0x13EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dee4) {
            ctx->pc = 0x10DEFCu;
            goto label_10defc;
        }
    }
    ctx->pc = 0x10DEECu;
    // 0x10deec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10deecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10def0: 0x263312d0  addiu       $s3, $s1, 0x12D0
    ctx->pc = 0x10def0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
    // 0x10def4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x10DEF4u;
    {
        const bool branch_taken_0x10def4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DEF4u;
        // 0x10def8: 0xae2213e8  sw          $v0, 0x13E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10def4) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10DEFCu;
label_10defc:
    // 0x10defc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10defcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10df00: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10DF00u;
    {
        const bool branch_taken_0x10df00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF00u;
        // 0x10df04: 0x263312d0  addiu       $s3, $s1, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df00) {
            ctx->pc = 0x10DF5Cu;
            goto label_10df5c;
        }
    }
    ctx->pc = 0x10DF08u;
    // 0x10df08: 0x8e301244  lw          $s0, 0x1244($s1)
    ctx->pc = 0x10df08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4676)));
    // 0x10df0c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10DF0Cu;
    {
        const bool branch_taken_0x10df0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF0Cu;
        // 0x10df10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df0c) {
            ctx->pc = 0x10DF2Cu;
            goto label_10df2c;
        }
    }
    ctx->pc = 0x10DF14u;
    // 0x10df14: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x10DF14u;
    SET_GPR_U32(ctx, 31, 0x10DF1Cu);
    ctx->pc = 0x10DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF14u;
    // 0x10df18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x10DF14u, 0x10DF1Cu)) {
        return;
    }
    ctx->pc = 0x10DF1Cu;
label_10df1c:
    // 0x10df1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10df1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10df20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df24: 0xc0b69c2  jal         func_2DA708
    ctx->pc = 0x10DF24u;
    SET_GPR_U32(ctx, 31, 0x10DF2Cu);
    ctx->pc = 0x10DF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF24u;
    // 0x10df28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DA708u, 0x10DF24u, 0x10DF2Cu)) {
        return;
    }
    ctx->pc = 0x10DF2Cu;
label_10df2c:
    // 0x10df2c: 0xae201244  sw          $zero, 0x1244($s1)
    ctx->pc = 0x10df2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 0));
    // 0x10df30: 0x26221358  addiu       $v0, $s1, 0x1358
    ctx->pc = 0x10df30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4952));
    // 0x10df34: 0xa22012d0  sb          $zero, 0x12D0($s1)
    ctx->pc = 0x10df34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4816), (uint8_t)GPR_U32(ctx, 0));
    // 0x10df38: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x10df38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x10df3c: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x10df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x10df40: 0xa2201358  sb          $zero, 0x1358($s1)
    ctx->pc = 0x10df40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4952), (uint8_t)GPR_U32(ctx, 0));
    // 0x10df44: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x10df44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x10df48: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x10df48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x10df4c: 0xae2013e0  sw          $zero, 0x13E0($s1)
    ctx->pc = 0x10df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5088), GPR_U32(ctx, 0));
    // 0x10df50: 0xae2013e4  sw          $zero, 0x13E4($s1)
    ctx->pc = 0x10df50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5092), GPR_U32(ctx, 0));
    // 0x10df54: 0xae2013e8  sw          $zero, 0x13E8($s1)
    ctx->pc = 0x10df54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5096), GPR_U32(ctx, 0));
    // 0x10df58: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10df58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_10df5c:
    // 0x10df5c: 0xc076642  jal         func_1D9908
    ctx->pc = 0x10DF5Cu;
    SET_GPR_U32(ctx, 31, 0x10DF64u);
    ctx->pc = 0x1D9908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9908u, 0x10DF5Cu, 0x10DF64u)) {
        return;
    }
    ctx->pc = 0x10DF64u;
label_10df64:
    // 0x10df64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10df64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10df68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10df6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10df70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df74: 0xc0ba6e0  jal         func_2E9B80
    ctx->pc = 0x10DF74u;
    SET_GPR_U32(ctx, 31, 0x10DF7Cu);
    ctx->pc = 0x10DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DF74u;
    // 0x10df78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9B80u, 0x10DF74u, 0x10DF7Cu)) {
        return;
    }
    ctx->pc = 0x10DF7Cu;
label_10df7c:
    // 0x10df7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10df80: 0xae221244  sw          $v0, 0x1244($s1)
    ctx->pc = 0x10df80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 2));
    // 0x10df84: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x10DF84u;
    {
        const bool branch_taken_0x10df84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF84u;
        // 0x10df88: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df84) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10DF8Cu;
label_10df8c:
    // 0x10df8c: 0x8e2313e4  lw          $v1, 0x13E4($s1)
    ctx->pc = 0x10df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5092)));
    // 0x10df90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10df90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10df94: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10DF94u;
    {
        const bool branch_taken_0x10df94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF94u;
        // 0x10df98: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df94) {
            ctx->pc = 0x10DFD4u;
            goto label_10dfd4;
        }
    }
    ctx->pc = 0x10DF9Cu;
    // 0x10df9c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10dfa0: 0x8c4382ec  lw          $v1, -0x7D14($v0)
    ctx->pc = 0x10dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3382ECu));
    // 0x10dfa4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10DFA4u;
    {
        const bool branch_taken_0x10dfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dfa4) {
            ctx->pc = 0x10DFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DFA4u;
            // 0x10dfa8: 0x8e2313e4  lw          $v1, 0x13E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DFD0u;
            goto label_10dfd0;
        }
    }
    ctx->pc = 0x10DFACu;
    // 0x10dfac: 0x8e221354  lw          $v0, 0x1354($s1)
    ctx->pc = 0x10dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4948)));
    // 0x10dfb0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10DFB0u;
    {
        const bool branch_taken_0x10dfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dfb0) {
            ctx->pc = 0x10DFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DFB0u;
            // 0x10dfb4: 0x8e2313e4  lw          $v1, 0x13E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DFD0u;
            goto label_10dfd0;
        }
    }
    ctx->pc = 0x10DFB8u;
    // 0x10dfb8: 0x8e241244  lw          $a0, 0x1244($s1)
    ctx->pc = 0x10dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4676)));
    // 0x10dfbc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DFBCu;
    {
        const bool branch_taken_0x10dfbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dfbc) {
            ctx->pc = 0x10DFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DFBCu;
            // 0x10dfc0: 0x8e2313e4  lw          $v1, 0x13E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DFD0u;
            goto label_10dfd0;
        }
    }
    ctx->pc = 0x10DFC4u;
    // 0x10dfc4: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x10DFC4u;
    SET_GPR_U32(ctx, 31, 0x10DFCCu);
    ctx->pc = 0x10DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFC4u;
    // 0x10dfc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x10DFC4u, 0x10DFCCu)) {
        return;
    }
    ctx->pc = 0x10DFCCu;
label_10dfcc:
    // 0x10dfcc: 0x8e2313e4  lw          $v1, 0x13E4($s1)
    ctx->pc = 0x10dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5092)));
label_10dfd0:
    // 0x10dfd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10dfd4:
    // 0x10dfd4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10DFD4u;
    {
        const bool branch_taken_0x10dfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFD4u;
        // 0x10dfd8: 0x262212d0  addiu       $v0, $s1, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfd4) {
            ctx->pc = 0x10E00Cu;
            goto label_10e00c;
        }
    }
    ctx->pc = 0x10DFDCu;
    // 0x10dfdc: 0x8e241244  lw          $a0, 0x1244($s1)
    ctx->pc = 0x10dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4676)));
    // 0x10dfe0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DFE0u;
    {
        const bool branch_taken_0x10dfe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dfe0) {
            ctx->pc = 0x10DFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DFE0u;
            // 0x10dfe4: 0xae2013e8  sw          $zero, 0x13E8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5096), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DFF8u;
            goto label_10dff8;
        }
    }
    ctx->pc = 0x10DFE8u;
    // 0x10dfe8: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x10DFE8u;
    SET_GPR_U32(ctx, 31, 0x10DFF0u);
    ctx->pc = 0x10DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DFE8u;
    // 0x10dfec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x10DFE8u, 0x10DFF0u)) {
        return;
    }
    ctx->pc = 0x10DFF0u;
label_10dff0:
    // 0x10dff0: 0x262212d0  addiu       $v0, $s1, 0x12D0
    ctx->pc = 0x10dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
    // 0x10dff4: 0xae2013e8  sw          $zero, 0x13E8($s1)
    ctx->pc = 0x10dff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5096), GPR_U32(ctx, 0));
label_10dff8:
    // 0x10dff8: 0xa22012d0  sb          $zero, 0x12D0($s1)
    ctx->pc = 0x10dff8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4816), (uint8_t)GPR_U32(ctx, 0));
    // 0x10dffc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10dffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e000: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x10e000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x10e004: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x10E004u;
    {
        const bool branch_taken_0x10e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E004u;
        // 0x10e008: 0xac400084  sw          $zero, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e004) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10E00Cu;
label_10e00c:
    // 0x10e00c: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x10e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x10e010: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x10E010u;
    {
        const bool branch_taken_0x10e010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E010u;
        // 0x10e014: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e010) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10E018u;
    // 0x10e018: 0xc62113e0  lwc1        $f1, 0x13E0($s1)
    ctx->pc = 0x10e018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10e01c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10e01cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e020: 0x0  nop
    ctx->pc = 0x10e020u;
    // NOP
    // 0x10e024: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10e024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e028: 0x0  nop
    ctx->pc = 0x10e028u;
    // NOP
    // 0x10e02c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x10E02Cu;
    {
        const bool branch_taken_0x10e02c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E02Cu;
        // 0x10e030: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e02c) {
            ctx->pc = 0x10E058u;
            goto label_10e058;
        }
    }
    ctx->pc = 0x10E034u;
    // 0x10e034: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10E034u;
    {
        const bool branch_taken_0x10e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E034u;
        // 0x10e038: 0xae2213e8  sw          $v0, 0x13E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e034) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10E03Cu;
label_10e03c:
    // 0x10e03c: 0xc62113e0  lwc1        $f1, 0x13E0($s1)
    ctx->pc = 0x10e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10e040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10e040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e044: 0x0  nop
    ctx->pc = 0x10e044u;
    // NOP
    // 0x10e048: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x10e048u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e04c: 0x0  nop
    ctx->pc = 0x10e04cu;
    // NOP
    // 0x10e050: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x10E050u;
    {
        const bool branch_taken_0x10e050 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E050u;
        // 0x10e054: 0x263312d0  addiu       $s3, $s1, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e050) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10E058u;
label_10e058:
    // 0x10e058: 0x8e241244  lw          $a0, 0x1244($s1)
    ctx->pc = 0x10e058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4676)));
    // 0x10e05c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E05Cu;
    {
        const bool branch_taken_0x10e05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E05Cu;
        // 0x10e060: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e05c) {
            ctx->pc = 0x10E070u;
            goto label_10e070;
        }
    }
    ctx->pc = 0x10E064u;
    // 0x10e064: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x10E064u;
    SET_GPR_U32(ctx, 31, 0x10E06Cu);
    ctx->pc = 0x10E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E064u;
    // 0x10e068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x10E064u, 0x10E06Cu)) {
        return;
    }
    ctx->pc = 0x10E06Cu;
label_10e06c:
    // 0x10e06c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x10e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10e070:
    // 0x10e070: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10E070u;
    {
        const bool branch_taken_0x10e070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E070u;
        // 0x10e074: 0xae2213e8  sw          $v0, 0x13E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e070) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10E078u;
label_10e078:
    // 0x10e078: 0x8e2313e4  lw          $v1, 0x13E4($s1)
    ctx->pc = 0x10e078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5092)));
    // 0x10e07c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10e080: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E080u;
    {
        const bool branch_taken_0x10e080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E080u;
        // 0x10e084: 0x263312d0  addiu       $s3, $s1, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e080) {
            ctx->pc = 0x10E098u;
            goto label_10e098;
        }
    }
    ctx->pc = 0x10E088u;
    // 0x10e088: 0xae2013e8  sw          $zero, 0x13E8($s1)
    ctx->pc = 0x10e088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5096), GPR_U32(ctx, 0));
    // 0x10e08c: 0xa22012d0  sb          $zero, 0x12D0($s1)
    ctx->pc = 0x10e08cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4816), (uint8_t)GPR_U32(ctx, 0));
    // 0x10e090: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x10e090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x10e094: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x10e094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_10e098:
    // 0x10e098: 0xc6340010  lwc1        $f20, 0x10($s1)
    ctx->pc = 0x10e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10e09c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x10e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10e0a0: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x10e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x10e0a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E0A4u;
    {
        const bool branch_taken_0x10e0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0A4u;
        // 0x10e0a8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0a4) {
            ctx->pc = 0x10E0B4u;
            goto label_10e0b4;
        }
    }
    ctx->pc = 0x10E0ACu;
    // 0x10e0ac: 0xc62013e0  lwc1        $f0, 0x13E0($s1)
    ctx->pc = 0x10e0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10e0b0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x10e0b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_10e0b4:
    // 0x10e0b4: 0x8e301244  lw          $s0, 0x1244($s1)
    ctx->pc = 0x10e0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4676)));
    // 0x10e0b8: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x10E0B8u;
    {
        const bool branch_taken_0x10e0b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e0b8) {
            ctx->pc = 0x10E0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E0B8u;
            // 0x10e0bc: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E120u;
            goto label_10e120;
        }
    }
    ctx->pc = 0x10E0C0u;
    // 0x10e0c0: 0xc0ba768  jal         func_2E9DA0
    ctx->pc = 0x10E0C0u;
    SET_GPR_U32(ctx, 31, 0x10E0C8u);
    ctx->pc = 0x10E0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E0C0u;
    // 0x10e0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9DA0u, 0x10E0C0u, 0x10E0C8u)) {
        return;
    }
    ctx->pc = 0x10E0C8u;
label_10e0c8:
    // 0x10e0c8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10e0cc: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x10E0CCu;
    {
        const bool branch_taken_0x10e0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10e0cc) {
            ctx->pc = 0x10E0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E0CCu;
            // 0x10e0d0: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E120u;
            goto label_10e120;
        }
    }
    ctx->pc = 0x10E0D4u;
    // 0x10e0d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10e0d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e0dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10e0e0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x10e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x10e0e4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x10e0e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e0e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10e0ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10e0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10e0f0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x10E0F0u;
    {
        const bool branch_taken_0x10e0f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0F0u;
        // 0x10e0f4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0f0) {
            ctx->pc = 0x10E10Cu;
            goto label_10e10c;
        }
    }
    ctx->pc = 0x10E0F8u;
    // 0x10e0f8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x10e0f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e0fc: 0x0  nop
    ctx->pc = 0x10e0fcu;
    // NOP
    // 0x10e100: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x10E100u;
    {
        const bool branch_taken_0x10e100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E100u;
        // 0x10e104: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e100) {
            ctx->pc = 0x10E10Cu;
            goto label_10e10c;
        }
    }
    ctx->pc = 0x10E108u;
    // 0x10e108: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x10e108u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_10e10c:
    // 0x10e10c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x10e10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x10e110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e114: 0xc0ba776  jal         func_2E9DD8
    ctx->pc = 0x10E114u;
    SET_GPR_U32(ctx, 31, 0x10E11Cu);
    ctx->pc = 0x10E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E114u;
    // 0x10e118: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9DD8u, 0x10E114u, 0x10E11Cu)) {
        return;
    }
    ctx->pc = 0x10E11Cu;
label_10e11c:
    // 0x10e11c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x10e11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_10e120:
    // 0x10e120: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x10e120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x10e124: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x10e124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10e128: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x10e128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10e12c: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x10e12cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10e130: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x10e130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10e134: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x10e134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10e138: 0x3e00008  jr          $ra
    ctx->pc = 0x10E138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E138u;
        // 0x10e13c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E140u;
}
